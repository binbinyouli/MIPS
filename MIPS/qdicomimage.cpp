#include "qdicomimage.h"

QGrayColorTable::QGrayColorTable() 
{ 
	//color table for monochroom images. 
	for(unsigned int i=0; i < GRAY_LEVELS; i++)
	{ 
		m_colortable[i] = qRgb(i,i,i); 
	} 
} 

QRgb QGrayColorTable::m_colortable[GRAY_LEVELS]; 

QDicomImage::QDicomImage(const char* filename, const unsigned long flags, 
						 const unsigned long fstart, const unsigned long fcount) 
						 :m_dicomImage(NULL),m_status(EIS_Normal),m_qimageSize(0),m_qimageBuffer(NULL) 
{ 
	m_dicomImage = new DicomImage(filename, flags, fstart, fcount); 
	m_status = m_dicomImage->getStatus(); 
	if(EIS_Normal == m_status)
	{ 
		m_qimageSize = m_dicomImage->getWidth() * m_dicomImage->getHeight(); 
		if(!m_dicomImage->isMonochrome()) 
		{ 
			/// color images needs 4 times the amount of memory (RGBA) 
			m_qimageSize = m_qimageSize * 4; 
		} 
		m_qimageBuffer = new uchar[m_qimageSize]; 
	} 
} 

QDicomImage::~QDicomImage() 
{ 
	if(m_dicomImage)
	{ 
		delete m_dicomImage; 
	} 

	if(m_qimageBuffer)
	{ 
		delete[] m_qimageBuffer; 
	} 
} 

QImage QDicomImage::getOutputData(const unsigned long p_frame, const int p_planar) 
{ 
	QImage image; 
	if(EIS_Normal == m_status)
	{ 
		if (m_dicomImage->isMonochrome()) 
		{ 
			///Monochroom images 
			m_dicomImage->setMinMaxWindow(); 
			m_dicomImage->getOutputData(m_qimageBuffer, m_qimageSize, IMG_DEPTH, p_frame, p_planar); 
			image = QImage(m_qimageBuffer, m_dicomImage->getWidth(), m_dicomImage->getHeight(),QImage::Format_Indexed8); 
			//image.setColorTable(*m_grayColorTable.getGrayColorTable());
		} 
		else 
		{ 
			///color images 
			uchar* pixelData = (uchar *)(m_dicomImage->getOutputData(IMG_DEPTH, p_frame, p_planar)); 

			///transform representation from dcmtk(RGB) to qimage (RGBA) 
			unsigned long y = 0; 
			for(unsigned long x = 0; x < m_qimageSize; x+=4) { 
				m_qimageBuffer[x] = pixelData[y];     //R 
				m_qimageBuffer[x+1] = pixelData[y+1]; //G 
				m_qimageBuffer[x+2] = pixelData[y+2]; //B 
				m_qimageBuffer[x+3] = 0xFF; //Alpha 
				y += 3; 
			} 
			image = QImage(m_qimageBuffer, m_dicomImage->getWidth(), m_dicomImage->getHeight(), QImage::Format_ARGB32); 
		} 
	} 
	return image; ///< is ok to return, qimage supports shallow copy 
} 

unsigned long QDicomImage::getFrameCount() const 
{ 
	return m_dicomImage->getFrameCount(); 
} 

QGrayColorTable QDicomImage::m_grayColorTable; 