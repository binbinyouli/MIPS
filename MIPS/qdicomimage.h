#ifndef QDICOMIMAGE_H
#define QDICOMIMAGE_H

#include <QImage>	  
#include <dcmtk/config/osconfig.h>
#include <dcmtk/ofstd/ofstd.h>
#include <dcmtk/ofstd/ofstring.h> 
#include <dcmtk/ofstd/ofconsol.h> 
#include <dcmtk/dcmdata/dctk.h>
#include <dcmtk/dcmdata/dcdeftag.h>
#include <dcmtk/dcmdata/dcfilefo.h>
#include <dcmtk/dcmdata/dcrledrg.h>
#include <dcmtk/dcmimgle/dcmimage.h>	
#include <dcmtk/dcmimage/diregist.h>
#include <dcmtk/dcmjpeg/djdecode.h>

class QGrayColorTable 
{ 
public: 
	static const unsigned int GRAY_LEVELS = 256; 
	QGrayColorTable(); 
	virtual ~QGrayColorTable() {} 

	QRgb* getGrayColorTable() { return m_colortable; } 
private: 
	static QRgb m_colortable[GRAY_LEVELS]; 
}; 

class QDicomImage
{
public: 
	QDicomImage(const char* filename, const unsigned long flags=0, const unsigned long fstart=0, const unsigned long fcount=0); 
	virtual ~QDicomImage(); 
	QImage getOutputData(const unsigned long p_frame=0, const int p_planar=0); 
	unsigned long getFrameCount() const; 
	DicomImage* m_dicomImage;			

private:		
	EI_Status m_status;	    // Dcmtk attributes	   	
	
	static QGrayColorTable m_grayColorTable;     // Qt related attributes 
	static const int IMG_DEPTH = 8; 
	unsigned long m_qimageSize; 

	///Image buffer is maintained by this class instead of dcmtk or qt. 
	///It is to prevent create/delete of buffer for every frame in case 
	///of a multi frame dicom file. 
	uchar* m_qimageBuffer;	  	
};

#endif // QDICOMIMAGE_H
