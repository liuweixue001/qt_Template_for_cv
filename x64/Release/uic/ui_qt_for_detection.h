/********************************************************************************
** Form generated from reading UI file 'qt_for_detection.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_FOR_DETECTION_H
#define UI_QT_FOR_DETECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qt_for_detectionClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QSplitter *splitter;
    QPushButton *pushButton1;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qt_for_detectionClass)
    {
        if (qt_for_detectionClass->objectName().isEmpty())
            qt_for_detectionClass->setObjectName(QString::fromUtf8("qt_for_detectionClass"));
        qt_for_detectionClass->resize(600, 400);
        centralWidget = new QWidget(qt_for_detectionClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 40, 224, 224));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(180, 280, 219, 23));
        splitter->setOrientation(Qt::Horizontal);
        pushButton1 = new QPushButton(splitter);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));
        splitter->addWidget(pushButton1);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        splitter->addWidget(pushButton);
        comboBox = new QComboBox(splitter);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(true);
        comboBox->setMinimumSize(QSize(66, 0));
        splitter->addWidget(comboBox);
        qt_for_detectionClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(qt_for_detectionClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        qt_for_detectionClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qt_for_detectionClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        qt_for_detectionClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(qt_for_detectionClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        qt_for_detectionClass->setStatusBar(statusBar);

        retranslateUi(qt_for_detectionClass);

        comboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qt_for_detectionClass);
    } // setupUi

    void retranslateUi(QMainWindow *qt_for_detectionClass)
    {
        qt_for_detectionClass->setWindowTitle(QApplication::translate("qt_for_detectionClass", "qt_for_detection", nullptr));
        label->setText(QApplication::translate("qt_for_detectionClass", "\350\247\206\351\242\221\347\224\273\351\235\242", nullptr));
        pushButton1->setText(QApplication::translate("qt_for_detectionClass", "\346\222\255\346\224\276", nullptr));
        pushButton->setText(QApplication::translate("qt_for_detectionClass", "\346\232\202\345\201\234", nullptr));
        comboBox->setItemText(0, QApplication::translate("qt_for_detectionClass", "RGB", nullptr));
        comboBox->setItemText(1, QApplication::translate("qt_for_detectionClass", "BGR", nullptr));

    } // retranslateUi

};

namespace Ui {
    class qt_for_detectionClass: public Ui_qt_for_detectionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_FOR_DETECTION_H
