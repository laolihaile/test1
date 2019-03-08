#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test1.h"

class test1 : public QMainWindow
{
	Q_OBJECT

public:
	test1(QWidget *parent = Q_NULLPTR);
	~test1();

private:
	Ui::test1Class ui;

private slots:
	void add1_valueChanged(int value);
	void add2_valueChanged(int value);
};
