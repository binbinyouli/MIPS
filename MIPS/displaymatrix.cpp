#include "displaymatrix.h"

DisplayMatrix::DisplayMatrix(QWidget *parent)
	: QDialog(parent)
{
	setWindowTitle(tr("Matrix Template"));
	matrixWidget = new QWidget;

	gridLayout->addWidget(lineEdit_1,0,0);
	gridLayout->addWidget(lineEdit_2,0,1);
	gridLayout->addWidget(lineEdit_3,0,2);
	gridLayout->addWidget(lineEdit_4,1,0);
	gridLayout->addWidget(lineEdit_5,1,1);
	gridLayout->addWidget(lineEdit_6,1,2);
	gridLayout->addWidget(lineEdit_7,2,0);
	gridLayout->addWidget(lineEdit_8,2,1);
	gridLayout->addWidget(lineEdit_9,2,2);	

	okButton = new QPushButton(tr("OK"));
	resetButton = new QPushButton(tr("Reset"));
	QDialogButtonBox *btnBox = new QDialogButtonBox(Qt::Horizontal);
	btnBox->addButton(okButton,QDialogButtonBox::ActionRole);
	btnBox->addButton(resetButton,QDialogButtonBox::ActionRole);

	vBoxLayout = new QVBoxLayout;
	vBoxLayout->addLayout(gridLayout);
	vBoxLayout->addWidget(btnBox);
	setLayout(vBoxLayout);

}

DisplayMatrix::~DisplayMatrix()
{

}
