/********************************************************************************
** Form generated from reading UI file 'ProgressWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSWIDGET_H
#define UI_PROGRESSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>
#include <rqt_multiplot/StatusWidget.h>

QT_BEGIN_NAMESPACE

class Ui_ProgressWidget
{
public:
    QGridLayout *gridLayout;
    QProgressBar *progressBar;
    rqt_multiplot::StatusWidget *widgetStatus;

    void setupUi(QWidget *ProgressWidget)
    {
        if (ProgressWidget->objectName().isEmpty())
            ProgressWidget->setObjectName(QString::fromUtf8("ProgressWidget"));
        ProgressWidget->resize(706, 23);
        gridLayout = new QGridLayout(ProgressWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        progressBar = new QProgressBar(ProgressWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(true);
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);

        gridLayout->addWidget(progressBar, 0, 0, 1, 1);

        widgetStatus = new rqt_multiplot::StatusWidget(ProgressWidget);
        widgetStatus->setObjectName(QString::fromUtf8("widgetStatus"));
        widgetStatus->setMinimumSize(QSize(22, 22));
        widgetStatus->setMaximumSize(QSize(22, 22));

        gridLayout->addWidget(widgetStatus, 0, 1, 1, 1);


        retranslateUi(ProgressWidget);

        QMetaObject::connectSlotsByName(ProgressWidget);
    } // setupUi

    void retranslateUi(QWidget *ProgressWidget)
    {
        ProgressWidget->setWindowTitle(QApplication::translate("ProgressWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgressWidget: public Ui_ProgressWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSWIDGET_H
