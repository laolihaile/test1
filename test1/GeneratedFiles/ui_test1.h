/********************************************************************************
** Form generated from reading UI file 'test1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST1_H
#define UI_TEST1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test1Class
{
public:
    QWidget *centralWidget;
    QSpinBox *add1;
    QSpinBox *add2;
    QTextBrowser *result;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test1Class)
    {
        if (test1Class->objectName().isEmpty())
            test1Class->setObjectName(QStringLiteral("test1Class"));
        test1Class->resize(600, 400);
        centralWidget = new QWidget(test1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        add1 = new QSpinBox(centralWidget);
        add1->setObjectName(QStringLiteral("add1"));
        add1->setGeometry(QRect(50, 100, 51, 21));
        add2 = new QSpinBox(centralWidget);
        add2->setObjectName(QStringLiteral("add2"));
        add2->setGeometry(QRect(160, 100, 42, 22));
        result = new QTextBrowser(centralWidget);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(260, 100, 71, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 80, 54, 11));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 110, 54, 11));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 90, 54, 51));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(270, 80, 54, 11));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(160, 80, 54, 11));
        test1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        test1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test1Class->setStatusBar(statusBar);

        retranslateUi(test1Class);
        QObject::connect(add1, SIGNAL(valueChanged(int)), test1Class, SLOT(add1_valueChanged(int)));
        QObject::connect(add2, SIGNAL(valueChanged(int)), test1Class, SLOT(add2_valueChanged(int)));

        QMetaObject::connectSlotsByName(test1Class);
    } // setupUi

    void retranslateUi(QMainWindow *test1Class)
    {
        test1Class->setWindowTitle(QApplication::translate("test1Class", "test1", Q_NULLPTR));
        label->setText(QApplication::translate("test1Class", "input1", Q_NULLPTR));
        label_2->setText(QApplication::translate("test1Class", "+", Q_NULLPTR));
        label_3->setText(QApplication::translate("test1Class", "=", Q_NULLPTR));
        label_4->setText(QApplication::translate("test1Class", "output", Q_NULLPTR));
        label_5->setText(QApplication::translate("test1Class", "input2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class test1Class: public Ui_test1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST1_H
