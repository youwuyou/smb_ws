/********************************************************************************
** Form generated from reading UI file 'CurveConfigDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURVECONFIGDIALOG_H
#define UI_CURVECONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <rqt_multiplot/CurveConfigWidget.h>

QT_BEGIN_NAMESPACE

class Ui_CurveConfigDialog
{
public:
    QGridLayout *gridLayout_2;
    rqt_multiplot::CurveConfigWidget *widgetCurveConfig;
    QDialogButtonBox *buttonBox;
    QFrame *line;

    void setupUi(QDialog *CurveConfigDialog)
    {
        if (CurveConfigDialog->objectName().isEmpty())
            CurveConfigDialog->setObjectName(QString::fromUtf8("CurveConfigDialog"));
        CurveConfigDialog->resize(885, 461);
        gridLayout_2 = new QGridLayout(CurveConfigDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(5);
        widgetCurveConfig = new rqt_multiplot::CurveConfigWidget(CurveConfigDialog);
        widgetCurveConfig->setObjectName(QString::fromUtf8("widgetCurveConfig"));

        gridLayout_2->addWidget(widgetCurveConfig, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(CurveConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

        line = new QFrame(CurveConfigDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 1);


        retranslateUi(CurveConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CurveConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CurveConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CurveConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *CurveConfigDialog)
    {
        CurveConfigDialog->setWindowTitle(QApplication::translate("CurveConfigDialog", "Configure Plot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CurveConfigDialog: public Ui_CurveConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURVECONFIGDIALOG_H
