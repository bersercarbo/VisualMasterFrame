/********************************************************************************
** Form generated from reading UI file 'VisualMasterFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALMASTERFRAME_H
#define UI_VISUALMASTERFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisualMasterFrameClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VisualMasterFrameClass)
    {
        if (VisualMasterFrameClass->objectName().isEmpty())
            VisualMasterFrameClass->setObjectName(QString::fromUtf8("VisualMasterFrameClass"));
        VisualMasterFrameClass->resize(600, 400);
        menuBar = new QMenuBar(VisualMasterFrameClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        VisualMasterFrameClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VisualMasterFrameClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        VisualMasterFrameClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(VisualMasterFrameClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        VisualMasterFrameClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(VisualMasterFrameClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        VisualMasterFrameClass->setStatusBar(statusBar);

        retranslateUi(VisualMasterFrameClass);

        QMetaObject::connectSlotsByName(VisualMasterFrameClass);
    } // setupUi

    void retranslateUi(QMainWindow *VisualMasterFrameClass)
    {
        VisualMasterFrameClass->setWindowTitle(QApplication::translate("VisualMasterFrameClass", "VisualMasterFrame", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VisualMasterFrameClass: public Ui_VisualMasterFrameClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALMASTERFRAME_H
