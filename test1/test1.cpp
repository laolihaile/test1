#include "test1.h"

test1::test1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

test1::~test1()
{

}

void test1::add1_valueChanged(int value)
{
	ui.result->setText(QString::number(value + ui.add2->value()));
}

void test1::add2_valueChanged(int value)
{
	ui.result->setText(QString::number(value + ui.add1->value()));
}