/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *clear;
    QPushButton *minus;
    QPushButton *num8;
    QPushButton *divide;
    QLineEdit *display;
    QPushButton *btndelate;
    QPushButton *period;
    QPushButton *plus;
    QPushButton *num0;
    QPushButton *multiple;
    QPushButton *num5;
    QPushButton *square;
    QPushButton *num9;
    QPushButton *num7;
    QPushButton *num4;
    QPushButton *num1;
    QPushButton *CE;
    QPushButton *num6;
    QPushButton *num3;
    QPushButton *percentage;
    QPushButton *num2;
    QPushButton *sign;
    QPushButton *equal;
    QPushButton *sqrt;
    QPushButton *inverse;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(725, 382);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(clear, 1, 2, 1, 1);

        minus = new QPushButton(centralwidget);
        minus->setObjectName("minus");
        sizePolicy1.setHeightForWidth(minus->sizePolicy().hasHeightForWidth());
        minus->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(minus, 4, 3, 1, 1);

        num8 = new QPushButton(centralwidget);
        num8->setObjectName("num8");
        sizePolicy1.setHeightForWidth(num8->sizePolicy().hasHeightForWidth());
        num8->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(num8, 3, 1, 1, 1);

        divide = new QPushButton(centralwidget);
        divide->setObjectName("divide");
        sizePolicy1.setHeightForWidth(divide->sizePolicy().hasHeightForWidth());
        divide->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(divide, 2, 3, 1, 1);

        display = new QLineEdit(centralwidget);
        display->setObjectName("display");
        sizePolicy1.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy1);
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(display, 0, 0, 1, 4);

        btndelate = new QPushButton(centralwidget);
        btndelate->setObjectName("btndelate");
        sizePolicy1.setHeightForWidth(btndelate->sizePolicy().hasHeightForWidth());
        btndelate->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(btndelate, 1, 3, 1, 1);

        period = new QPushButton(centralwidget);
        period->setObjectName("period");
        sizePolicy1.setHeightForWidth(period->sizePolicy().hasHeightForWidth());
        period->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(period, 6, 2, 1, 1);

        plus = new QPushButton(centralwidget);
        plus->setObjectName("plus");
        sizePolicy1.setHeightForWidth(plus->sizePolicy().hasHeightForWidth());
        plus->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(plus, 5, 3, 1, 1);

        num0 = new QPushButton(centralwidget);
        num0->setObjectName("num0");
        sizePolicy1.setHeightForWidth(num0->sizePolicy().hasHeightForWidth());
        num0->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(num0, 6, 1, 1, 1);

        multiple = new QPushButton(centralwidget);
        multiple->setObjectName("multiple");
        sizePolicy1.setHeightForWidth(multiple->sizePolicy().hasHeightForWidth());
        multiple->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(multiple, 3, 3, 1, 1);

        num5 = new QPushButton(centralwidget);
        num5->setObjectName("num5");
        sizePolicy1.setHeightForWidth(num5->sizePolicy().hasHeightForWidth());
        num5->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(num5, 4, 1, 1, 1);

        square = new QPushButton(centralwidget);
        square->setObjectName("square");
        sizePolicy1.setHeightForWidth(square->sizePolicy().hasHeightForWidth());
        square->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(square, 2, 1, 1, 1);

        num9 = new QPushButton(centralwidget);
        num9->setObjectName("num9");
        sizePolicy1.setHeightForWidth(num9->sizePolicy().hasHeightForWidth());
        num9->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(num9, 3, 2, 1, 1);

        num7 = new QPushButton(centralwidget);
        num7->setObjectName("num7");
        sizePolicy1.setHeightForWidth(num7->sizePolicy().hasHeightForWidth());
        num7->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(num7, 3, 0, 1, 1);

        num4 = new QPushButton(centralwidget);
        num4->setObjectName("num4");
        sizePolicy1.setHeightForWidth(num4->sizePolicy().hasHeightForWidth());
        num4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(num4, 4, 0, 1, 1);

        num1 = new QPushButton(centralwidget);
        num1->setObjectName("num1");
        sizePolicy1.setHeightForWidth(num1->sizePolicy().hasHeightForWidth());
        num1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(num1, 5, 0, 1, 1);

        CE = new QPushButton(centralwidget);
        CE->setObjectName("CE");
        sizePolicy1.setHeightForWidth(CE->sizePolicy().hasHeightForWidth());
        CE->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(CE, 1, 1, 1, 1);

        num6 = new QPushButton(centralwidget);
        num6->setObjectName("num6");
        sizePolicy1.setHeightForWidth(num6->sizePolicy().hasHeightForWidth());
        num6->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(num6, 4, 2, 1, 1);

        num3 = new QPushButton(centralwidget);
        num3->setObjectName("num3");
        sizePolicy1.setHeightForWidth(num3->sizePolicy().hasHeightForWidth());
        num3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(num3, 5, 2, 1, 1);

        percentage = new QPushButton(centralwidget);
        percentage->setObjectName("percentage");
        sizePolicy1.setHeightForWidth(percentage->sizePolicy().hasHeightForWidth());
        percentage->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(percentage, 1, 0, 1, 1);

        num2 = new QPushButton(centralwidget);
        num2->setObjectName("num2");
        sizePolicy1.setHeightForWidth(num2->sizePolicy().hasHeightForWidth());
        num2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(num2, 5, 1, 1, 1);

        sign = new QPushButton(centralwidget);
        sign->setObjectName("sign");
        sizePolicy1.setHeightForWidth(sign->sizePolicy().hasHeightForWidth());
        sign->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(sign, 6, 0, 1, 1);

        equal = new QPushButton(centralwidget);
        equal->setObjectName("equal");
        sizePolicy1.setHeightForWidth(equal->sizePolicy().hasHeightForWidth());
        equal->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(equal, 6, 3, 1, 1);

        sqrt = new QPushButton(centralwidget);
        sqrt->setObjectName("sqrt");
        sizePolicy1.setHeightForWidth(sqrt->sizePolicy().hasHeightForWidth());
        sqrt->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(sqrt, 2, 2, 1, 1);

        inverse = new QPushButton(centralwidget);
        inverse->setObjectName("inverse");
        sizePolicy1.setHeightForWidth(inverse->sizePolicy().hasHeightForWidth());
        inverse->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(inverse, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 725, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        num8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        display->setText(QString());
        display->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btndelate->setText(QCoreApplication::translate("MainWindow", "DELATE", nullptr));
        period->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        num0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        multiple->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        num5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        square->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
        num9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        num7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        num4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        num1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        CE->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        num6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        num3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        percentage->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        num2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        sign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232x", nullptr));
        inverse->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
