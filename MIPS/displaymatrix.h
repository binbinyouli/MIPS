#ifndef DISPLAYMATRIX_H
#define DISPLAYMATRIX_H

#include <QDialog>
#include <QGroupBox>
#include <QLineEdit>
#include <QLabel>
#include <QGridLayout> 
#include <QWidget>
#include <QPushButton>
#include <QDialogButtonBox>

class DisplayMatrix : public QDialog
{
	Q_OBJECT

public:
	DisplayMatrix(QWidget *parent = 0);
	~DisplayMatrix();

// 	private slots:
// 		void okClick();
// 		void resetClick();
 
	QWidget *matrixWidget;
	QGroupBox *groupBox;	
	QLabel *tipLabel;	

	QLineEdit *lineEdit_1;
	QLineEdit *lineEdit_2;
	QLineEdit *lineEdit_3;
	QLineEdit *lineEdit_4;
	QLineEdit *lineEdit_5;
	QLineEdit *lineEdit_6;
	QLineEdit *lineEdit_7;
	QLineEdit *lineEdit_8;
	QLineEdit *lineEdit_9;

	QPushButton *okButton;
	QPushButton *resetButton;

	QGridLayout *gridLayout;
	QVBoxLayout *vBoxLayout;	
};

#endif // DISPLAYMATRIX_H
