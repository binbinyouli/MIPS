#include "mainwindow.h"	   
//#include <iostream>
//using namespace std;
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), scaleFactor(1),imageInfoFlag(false)
{
    setupUi(this);
	connectSignalsAndSlots();    
    addTreeView();    

	previewBefore = new PreViewWidget();
	previewAfter = new PreViewWidget();
	comparison = new PreViewWidget();
	tabWidget->addTab(previewBefore,"&Before");
	tabWidget->addTab(previewAfter,"&After");
	tabWidget->addTab(comparison,"&Comparion");
    
    foreach (QByteArray byteArray, QImageReader::supportedImageFormats())
    {
        QString extra = QString("*.") + QString(byteArray);
        supportedFormat << extra;
    }
	 supportedFormat << QString("*.dcm");
	currentDirectory = new QDir(); 
    currentFile = displayFiles.constBegin();  

  resize(800,600);
   updateUi();
}

MainWindow::~MainWindow()
{
    delete currentDirectory;
}

void MainWindow::addTreeView()
{
	dirModel = new QDirModel(this);
	dirModel->setFilter(QDir::Dirs | QDir::NoDotAndDotDot);

	treeView->setModel(dirModel);
	treeView->header()->setVisible(false);
	treeView->setColumnHidden(1,true);	// Size
	treeView->setColumnHidden(2,true);  // Type
	treeView->setColumnHidden(3,true);  // Modified Date   
}

void MainWindow::connectSignalsAndSlots()
{
	QObject::connect(actionGauss_2,SIGNAL(triggered()),this,SLOT(slotGaussInSmoother()));
	QObject::connect(actionBox_2,SIGNAL(triggered()),this,SLOT(slotBoxInSmoother()));
	QObject::connect(actionEight_2,SIGNAL(triggered()),this,SLOT(slotEightInSmoother()));
	QObject::connect(actionTen_2,SIGNAL(triggered()),this,SLOT(slotTenInSmoother()));
	QObject::connect(actionMF5,SIGNAL(triggered()),this,SLOT(slotMF5InSmoother()));
	QObject::connect(actionMF9,SIGNAL(triggered()),this,SLOT(slotMF9InSmoother()));
	QObject::connect(actionIdeal_Low_Pass_Filter,SIGNAL(triggered()),this,SLOT(slotILPFInSmoother()));
	QObject::connect(actionButter_Worth_LP_Filter,SIGNAL(triggered()),this,SLOT(slotBWLPFInSmoother()));	

	QObject::connect(actionIdeal_High_Pass_Filter,SIGNAL(triggered()),this,SLOT(slotIHPFInSharpener()));
	QObject::connect(actionButter_Worth_HP_Filter,SIGNAL(triggered()),this,SLOT(slotBWHPFInSharpener()));	
	QObject::connect(actionL4,SIGNAL(triggered()),this,SLOT(slotLaplacian4InSharpener()));
	QObject::connect(actionL8,SIGNAL(triggered()),this,SLOT(slotLaplacian8InSharpener()));
	QObject::connect(actionSobel,SIGNAL(triggered()),this,SLOT(slotSobelInSharpener()));
	QObject::connect(actionIsotropic,SIGNAL(triggered()),this,SLOT(slotIsotropicInSharpener()));
	QObject::connect(actionPrewitt,SIGNAL(triggered()),this,SLOT(slotPrewittInSharpener())); 

	QObject::connect(actionGradiant,SIGNAL(triggered()),this,SLOT(slotGradiantInEdgeDetector())); 
	QObject::connect(actionRoberts,SIGNAL(triggered()),this,SLOT(slotRobertsInEdgeDetector())); 
	QObject::connect(actionSobel_In_ED,SIGNAL(triggered()),this,SLOT(slotSobelInEdgeDetector())); 
	QObject::connect(actionLaplace8,SIGNAL(triggered()),this,SLOT(slotLaplacian8InEdgeDetector())); 

	QObject::connect(actionLinearity,SIGNAL(triggered()),this,SLOT(slotLinearityInTransformator()));
	QObject::connect(actionLogTrans,SIGNAL(triggered()),this,SLOT(slotLogTransInTransformator()));
	QObject::connect(actionPowerTrans,SIGNAL(triggered()),this,SLOT(slotPowerTransInTransformator()));
	QObject::connect(actionExpTrans,SIGNAL(triggered()),this,SLOT(slotExpTransInTransformator()));
}

void MainWindow::updateUi()
{
    if(currentFile == displayFiles.constEnd())
    {
        imageInfo->setText(tr("There Are No Images! Please Click TreeView to Select Image Folder!"));
        actionForward->setEnabled(false);
        actionBack->setEnabled(false);  
		actionSave->setEnabled(false);   
		actionGauss_2->setEnabled(false);
		actionBox_2->setEnabled(false);
		actionEight_2->setEnabled(false);
		actionTen_2->setEnabled(false);
		actionMF5->setEnabled(false);
		actionMF9->setEnabled(false);
		actionIdeal_Low_Pass_Filter->setEnabled(false);
		actionButter_Worth_LP_Filter->setEnabled(false);
		actionL4->setEnabled(false);
		actionL8->setEnabled(false);
		actionPrewitt->setEnabled(false);
		actionIsotropic->setEnabled(false);
		actionSobel->setEnabled(false);
		actionIdeal_High_Pass_Filter->setEnabled(false);
		actionButter_Worth_HP_Filter->setEnabled(false);
		actionGradiant->setEnabled(false);
	    actionRoberts->setEnabled(false);
		actionSobel_In_ED->setEnabled(false);
		actionLaplace8->setEnabled(false);
		actionLinearity->setEnabled(false);
    }
    else
    {
        int seqNumber = displayFiles.indexOf(*currentFile, 0) + 1;	// non-Programmer count from 1 instead 0
	if (imageInfoFlag )
	{
				imageInfo->clear();
		     	imageInfo->setText(QString(tr("%1/%2   %3   %4%    %5 \nPatient's Name:%6")).
				arg(seqNumber).arg(displayFiles.size()).arg(*currentFile).arg(scaleFactor*100, 3).
				arg(originFileName).arg(patientName.c_str()));
	}
		else
		{
				imageInfo->clear();
			    imageInfo->setText(QString(tr("%1/%2   %3   %4%    %5 ")).
				arg(seqNumber).arg(displayFiles.size()).arg(*currentFile).arg(scaleFactor*100, 3).
				arg(originFileName));
		}	 

        actionForward->setEnabled(true);
        actionBack->setEnabled(true);   
		actionSave->setEnabled(true);
		actionGauss_2->setEnabled(true);
		actionBox_2->setEnabled(true);
		actionEight_2->setEnabled(true);
		actionTen_2->setEnabled(true);
		actionMF5->setEnabled(true);
		actionMF9->setEnabled(true);
		actionIdeal_Low_Pass_Filter->setEnabled(true);
		actionButter_Worth_LP_Filter->setEnabled(true);
		actionL4->setEnabled(true);
		actionL8->setEnabled(true);
		actionPrewitt->setEnabled(true);
		actionIsotropic->setEnabled(true);
		actionSobel->setEnabled(true);
		actionIdeal_High_Pass_Filter->setEnabled(true);
		actionButter_Worth_HP_Filter->setEnabled(true);
		actionGradiant->setEnabled(true);
		actionRoberts->setEnabled(true);
		actionSobel_In_ED->setEnabled(true);
		actionLaplace8->setEnabled(true);
		actionLinearity->setEnabled(true);
    }
}

void MainWindow::on_actionForward_triggered()
{
    currentFile++;
    if(currentFile == displayFiles.constEnd())
        currentFile = displayFiles.constBegin();
    displayImage();
    updateUi();
}

void MainWindow::on_actionBack_triggered()
{
   if(currentFile == displayFiles.constBegin())
        currentFile = displayFiles.constEnd();
    currentFile--;
    displayImage();
    updateUi();
}

void MainWindow::on_actionSave_triggered()
{
	QString savedFileName = QFileDialog::getSaveFileName(this,tr("Save Image"), ".",
		tr("Images (*.bmp *.png  *.jpg )"));
	imageAfterProcessing.save(savedFileName);	
}

void MainWindow::on_treeView_clicked ( const QModelIndex &index )
{
    const QString path = dirModel->data(index, QDirModel::FilePathRole).toString();
    currentDirectory->setPath(path);
	originFileName = dirModel->fileName(index);
    displayFiles = currentDirectory->entryList(supportedFormat, QDir::Files);
    currentFile = displayFiles.constBegin();
    if(currentFile != displayFiles.constEnd())			
		displayImage();	
    updateUi();
}

void MainWindow::displayImage()
{
	QString  fileName = currentDirectory->absoluteFilePath(*currentFile);	   	
	//const char *dicomFileName = fileName.toAscii().constData();
	imageBeforeProcessing = QImage(fileName);
	imageInfoFlag = false;
	if (imageBeforeProcessing.isNull())
	{			
		//dicomImage = new QDicomImage("D:/test.dcm",0,0,0);
		//dicomImage->m_dicomImage->writeBMP("D:/dicom.bmp",8,0);
		imageInfoFlag = true;
		dicomImage = new QDicomImage(fileName.toAscii().constData(),0,0,0);		
		imageBeforeProcessing = dicomImage->getOutputData(0,0);	

 		DcmFileFormat fileFormat;
 		OFCondition ofStatus = fileFormat.loadFile(fileName.toAscii().constData());
 		/*OFString  patientName;*/
 		fileFormat.getDataset()->findAndGetOFString(DCM_PatientsName,patientName);	    		
 	//	QMessageBox::information(this, tr("MIPS"),tr("%1").arg(patientName.c_str()));  //patientName.data()
 	}
	previewBefore->setImage(imageBeforeProcessing);		  	
}

QImage MainWindow::compareImage(QImage imageB, QImage imageA) //比较处理前后的图片差异
{
	int h = imageB.height();
	int w = imageB.width();	

	QImage targetImage (w,h,QImage::Format_Indexed8);

	 targetImage.setNumColors(256);
	for ( int i = 0; i < 256; i++ ) 
	{
		 targetImage.setColor( i, qRgb( i, i, i )) ;
	}

	for (int x = 1; x < w - 1; x++)
	{
		for (int y = 1; y < h - 1; y++)
		{
			 uint px = imageB.pixelIndex(x,y) - imageA.pixelIndex(x,y);
		//	uint px = imageA.pixelIndex(x,y) - imageB.pixelIndex(x,y);
// 			 if(px < 0)
// 				px = 0;
// 			if(px > 255)
// 				px = 255;		
			 if (!px)						  //如果图像像素没有改变，置白
				 px = 255;
			 else
				 px = 0;			 
			targetImage.setPixel( x, y, px);		
		}
	}
	return targetImage;
}

void MainWindow::slotGaussInSmoother()
{	 	
	TemplateMatrix matrix(1);

	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			int w = 0;
			int res = i * i + j * j;
			switch(res)
			{
			case 0:
				w = 4;
				break;
			case 1:
				w = 2;
				break;
			case 2:
				w = 1;
				break;
			default:
				w = 0;
			}
			matrix.setWeightAt(i + 1, j + 1, w);
		}
	}	  	

	imageAfterProcessing = ImageSmoother::setTemplate(imageBeforeProcessing, matrix, 1.0 / 16.0);   
     previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);		
}

void  MainWindow::slotBoxInSmoother()
{	 	
	TemplateMatrix matrix(1);
	
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{			
			matrix.setWeightAt(i + 1, j + 1, 1);
		}
	}	

	imageAfterProcessing = ImageSmoother::setTemplate(imageBeforeProcessing, matrix, 1.0 / 9.0);
    previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);	
}

void  MainWindow::slotEightInSmoother()
{	 	
	TemplateMatrix matrix(1);

	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{			
			matrix.setWeightAt(i + 1, j + 1, 1);
		}
	}
	matrix.setWeightAt(1,1,0);

	imageAfterProcessing = ImageSmoother::setTemplate(imageBeforeProcessing, matrix, 1.0/8.0);
    previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);	

	//DisplayMatrix *displayDialog = new DisplayMatrix(this);
	//displayDialog->exec();
	//delete displayDialog;
}

void  MainWindow::slotTenInSmoother()
{ 	
	TemplateMatrix matrix(1);

	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{			
			matrix.setWeightAt(i + 1, j + 1, 1);
		}
	}
    matrix.setWeightAt(1,1,2);

	imageAfterProcessing = ImageSmoother::setTemplate(imageBeforeProcessing, matrix, 1.0 / 10.0);
	previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);	
}

void MainWindow::slotMF5InSmoother()
{ 	
	imageAfterProcessing = ImageSmoother::useMedianFilter(imageBeforeProcessing,5);
	previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);	
}

void MainWindow::slotMF9InSmoother()
{	 	
	imageAfterProcessing = ImageSmoother::useMedianFilter(imageBeforeProcessing,9);
	previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);	
}

void MainWindow::slotILPFInSmoother()
{			
	 int xRadius = 25;
	 int yRadius = 25;
	imageAfterProcessing = ImageSmoother::useIdealLowPassFilter(imageBeforeProcessing,xRadius,yRadius);
	previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);	
}

void MainWindow::slotBWLPFInSmoother()
{ 	
	int radius = 5;	
	imageAfterProcessing = ImageSmoother::useButterWorthLowPassFilter(imageBeforeProcessing,radius);
	previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);	
}

void MainWindow::slotIHPFInSharpener()
{		
	int xRadius = 5;
	int yRadius = 5;
	imageAfterProcessing = ImageSharpener::useIdealHighPassFilter(imageBeforeProcessing,xRadius,yRadius);
	previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);	
}

void MainWindow::slotBWHPFInSharpener()
{ 	
	int radius = 5;	
	imageAfterProcessing = ImageSharpener::useButterWorthHighPassFilter(imageBeforeProcessing,radius);
	previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);	
}

void MainWindow::slotLaplacian4InSharpener()
{ 	
	TemplateMatrix matrix(1);

	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			int w = 0;
			int res = i * i + j * j;
			switch(res)
			{
			case 0:
				w = 4;
				break;
			case 1:
				w = -1;
				break;
			case 2:
				w = 0;
				break;
			default:
				w = 0;
			}
			matrix.setWeightAt(i + 1, j + 1, w);
		}
	}

	imageAfterProcessing = ImageSmoother::setTemplate(imageBeforeProcessing, matrix, 1.0);
	previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);	
}

void MainWindow::slotLaplacian8InSharpener()
{ 	
	TemplateMatrix matrix(1);
	int i,j;

	for ( i = -1; i <= 1; i++)
	{
		for ( j = -1; j <= 1; j++)
		{
			matrix.setWeightAt(i + 1, j + 1, -1);
		}
	}
    matrix.setWeightAt(1, 1, 8);
	imageAfterProcessing = ImageSmoother::setTemplate(imageBeforeProcessing, matrix, 1.0);
	previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);	
}

void MainWindow::slotSobelInSharpener()
{	 	
	TemplateMatrix matrixX(1);   //3X3
	TemplateMatrix matrixY(1);   //3X3
	
	matrixX.setWeightAt(0, 0, 1);
	matrixX.setWeightAt(0, 1, 0);
	matrixX.setWeightAt(0, 2,-1);
	matrixX.setWeightAt(1, 0, 2);
	matrixX.setWeightAt(1, 1, 0);
	matrixX.setWeightAt(1, 2, -2);
	matrixX.setWeightAt(2, 0, 1);
	matrixX.setWeightAt(2, 1, 0);
	matrixX.setWeightAt(2, 2, -1);

	matrixY.setWeightAt(0, 0, -1);
	matrixY.setWeightAt(0, 1, -2);
	matrixY.setWeightAt(0, 2,-1);
	matrixY.setWeightAt(1, 0, 0);
	matrixY.setWeightAt(1, 1, 0);
	matrixY.setWeightAt(1, 2, 0);
	matrixY.setWeightAt(2, 0, 1);
	matrixY.setWeightAt(2, 1, 2);
	matrixY.setWeightAt(2, 2, 1);
		
	imageAfterProcessing = ImageSharpener::setTemplateInSharpener(imageBeforeProcessing, matrixX,matrixY);
    previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);	
}

void MainWindow::slotIsotropicInSharpener()
{		
	TemplateMatrix matrixX(1);   //3X3
	TemplateMatrix matrixY(1);   //3X3

	matrixX.setWeightAt(0, 0, 1);
	matrixX.setWeightAt(0, 1, 0);
	matrixX.setWeightAt(0, 2,-1);
	matrixX.setWeightAt(1, 0, sqrt(2.0));
	matrixX.setWeightAt(1, 1, 0);
	matrixX.setWeightAt(1, 2, -sqrt(2.0));
	matrixX.setWeightAt(2, 0, 1);
	matrixX.setWeightAt(2, 1, 0);
	matrixX.setWeightAt(2, 2, -1);

	matrixY.setWeightAt(0, 0, -1);
	matrixY.setWeightAt(0, 1, -sqrt(2.0));
	matrixY.setWeightAt(0, 2,-1);
	matrixY.setWeightAt(1, 0, 0);
	matrixY.setWeightAt(1, 1, 0);
	matrixY.setWeightAt(1, 2, 0);
	matrixY.setWeightAt(2, 0, 1);
	matrixY.setWeightAt(2, 1, sqrt(2.0));
	matrixY.setWeightAt(2, 2, 1);

	imageAfterProcessing = ImageSharpener::setTemplateInSharpener(imageBeforeProcessing, matrixX,matrixY);
    previewAfter->setImage(imageAfterProcessing);

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);	
}

void MainWindow::slotPrewittInSharpener()
{	  	
	TemplateMatrix matrixX(1);   //3X3
	TemplateMatrix matrixY(1);   //3X3

	matrixX.setWeightAt(0, 0, 1);
	matrixX.setWeightAt(0, 1, 0);
	matrixX.setWeightAt(0, 2,-1);
	matrixX.setWeightAt(1, 0, 1);
	matrixX.setWeightAt(1, 1, 0);
	matrixX.setWeightAt(1, 2, -1);
	matrixX.setWeightAt(2, 0, 1);
	matrixX.setWeightAt(2, 1, 0);
	matrixX.setWeightAt(2, 2, -1);

	matrixY.setWeightAt(0, 0, -1);
	matrixY.setWeightAt(0, 1, -1);
	matrixY.setWeightAt(0, 2,-1);
	matrixY.setWeightAt(1, 0, 0);
	matrixY.setWeightAt(1, 1, 0);
	matrixY.setWeightAt(1, 2, 0);
	matrixY.setWeightAt(2, 0, 1);
	matrixY.setWeightAt(2, 1, 1);
	matrixY.setWeightAt(2, 2, 1);

	imageAfterProcessing = ImageSharpener::setTemplateInSharpener(imageBeforeProcessing, matrixX,matrixY);
   previewAfter->setImage(imageAfterProcessing);	

   imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
   comparison->setImage(imageInDistinction);	
}

void MainWindow::slotGradiantInEdgeDetector()
{	     
	 char flag = 'M';
	 double scaleFactor = 2.0;
	 imageAfterProcessing = ImageEdgeDetector::useGradiant(imageBeforeProcessing, 'M',2.0);
     previewAfter->setImage(imageAfterProcessing);	

	 imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	 comparison->setImage(imageInDistinction);	
}

void MainWindow::slotRobertsInEdgeDetector()
{		
	char flag = 'R';
	double scaleFactor = 2.0;
	imageAfterProcessing = ImageEdgeDetector::useGradiant(imageBeforeProcessing, 'R',2.0);
    previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);	
}

void MainWindow::slotSobelInEdgeDetector()
{		
	char flag = 'm';
	double scaleFactor = 4.0;

	TemplateMatrix matrixX(1);   //3X3
	TemplateMatrix matrixY(1);   //3X3

	matrixX.setWeightAt(0, 0, -1);
	matrixX.setWeightAt(0, 1, -2);
	matrixX.setWeightAt(0, 2,-1);
	matrixX.setWeightAt(1, 0, 0);
	matrixX.setWeightAt(1, 1, 0);
	matrixX.setWeightAt(1, 2, 0);
	matrixX.setWeightAt(2, 0, 1);
	matrixX.setWeightAt(2, 1, 2);
	matrixX.setWeightAt(2, 2, 1);

	matrixY.setWeightAt(0, 0, -1);
	matrixY.setWeightAt(0, 1, 0);
	matrixY.setWeightAt(0, 2,1);
	matrixY.setWeightAt(1, 0, -2);
	matrixY.setWeightAt(1, 1, 0);
	matrixY.setWeightAt(1, 2, 2);
	matrixY.setWeightAt(2, 0, -1);
	matrixY.setWeightAt(2, 1, 0);
	matrixY.setWeightAt(2, 2, 1);

	imageAfterProcessing = ImageEdgeDetector::useSobel(imageBeforeProcessing, matrixX,matrixY,flag,scaleFactor);
    previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);	
}

void MainWindow::slotLaplacian8InEdgeDetector()
{ 	
	TemplateMatrix matrix(1);
	int i,j;

	for ( i = -1; i <= 1; i++)
	{
		for ( j = -1; j <= 1; j++)
		{
			matrix.setWeightAt(i + 1, j + 1, 1);
		}
	}
	matrix.setWeightAt(1, 1, -8);
	imageAfterProcessing = ImageSmoother::setTemplate(imageBeforeProcessing, matrix, 1.0);
	previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);	
}

void MainWindow::slotLinearityInTransformator()
{   
    int oldLow = 70;
	int oldHigh = 210;
	int newLow = 0;
	int newHigh = 255;

	imageAfterProcessing = ImageGrayLevelTransformator::transformGrayLevelInLinearity(imageBeforeProcessing,oldLow,oldHigh,newLow,newHigh);
	previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);	
}	  

void MainWindow::slotLogTransInTransformator()
{
	double a = 1.0;
	double b = 0.025;

	imageAfterProcessing = ImageGrayLevelTransformator::process8BitImageInLogTrans(imageBeforeProcessing,a,b);
	previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);		
}

void MainWindow::slotPowerTransInTransformator()
{
	double b = 1.0;
	double c = 0.1;
	double r = -0.75;

	imageAfterProcessing = ImageGrayLevelTransformator::process8BitImageInPowerTrans(imageBeforeProcessing,b,c,r);
	previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);		
}

void MainWindow::slotExpTransInTransformator()
{
	double a = 0;
	double b = 1.5;
	double c = 0.05;

	imageAfterProcessing = ImageGrayLevelTransformator::process8BitImageInExpTrans(imageBeforeProcessing,a,b,c);
	previewAfter->setImage(imageAfterProcessing);	

	imageInDistinction = compareImage(imageBeforeProcessing,imageAfterProcessing);
	comparison->setImage(imageInDistinction);		
}

const char *htmlAboutText =
        "<HTML>"
        "<p>The MIPS (Medical Image Preprocessing System) is mainly designed to enhance the medical images.</p>"
        "<p>This program is subject to the GPL license.</p>"
        "<p>Powered by Kevin Chow.</p>"
        "<p>Current Version 1.0.0.0"
        "</HTML>";

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this, tr("About The MIPS"), htmlAboutText);
}
