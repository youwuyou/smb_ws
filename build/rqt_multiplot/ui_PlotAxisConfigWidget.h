/********************************************************************************
** Form generated from reading UI file 'PlotAxisConfigWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTAXISCONFIGWIDGET_H
#define UI_PLOTAXISCONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlotAxisConfigWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditTitle;
    QCheckBox *checkBoxTitleAuto;
    QCheckBox *checkBoxTitleVisible;

    void setupUi(QWidget *PlotAxisConfigWidget)
    {
        if (PlotAxisConfigWidget->objectName().isEmpty())
            PlotAxisConfigWidget->setObjectName(QString::fromUtf8("PlotAxisConfigWidget"));
        PlotAxisConfigWidget->resize(465, 23);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PlotAxisConfigWidget->sizePolicy().hasHeightForWidth());
        PlotAxisConfigWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(PlotAxisConfigWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        label = new QLabel(PlotAxisConfigWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditTitle = new QLineEdit(PlotAxisConfigWidget);
        lineEditTitle->setObjectName(QString::fromUtf8("lineEditTitle"));

        gridLayout->addWidget(lineEditTitle, 0, 1, 1, 1);

        checkBoxTitleAuto = new QCheckBox(PlotAxisConfigWidget);
        checkBoxTitleAuto->setObjectName(QString::fromUtf8("checkBoxTitleAuto"));

        gridLayout->addWidget(checkBoxTitleAuto, 0, 2, 1, 1);

        checkBoxTitleVisible = new QCheckBox(PlotAxisConfigWidget);
        checkBoxTitleVisible->setObjectName(QString::fromUtf8("checkBoxTitleVisible"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBoxTitleVisible->sizePolicy().hasHeightForWidth());
        checkBoxTitleVisible->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(checkBoxTitleVisible, 0, 3, 1, 1);


        retranslateUi(PlotAxisConfigWidget);

        QMetaObject::connectSlotsByName(PlotAxisConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *PlotAxisConfigWidget)
    {
        PlotAxisConfigWidget->setWindowTitle(QApplication::translate("PlotAxisConfigWidget", "Form", nullptr));
        label->setText(QApplication::translate("PlotAxisConfigWidget", "Title:", nullptr));
        checkBoxTitleAuto->setText(QApplication::translate("PlotAxisConfigWidget", "Auto", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxTitleVisible->setToolTip(QApplication::translate("PlotAxisConfigWidget", "Show/hide axis labels", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxTitleVisible->setText(QApplication::translate("PlotAxisConfigWidget", "Show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlotAxisConfigWidget: public Ui_PlotAxisConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTAXISCONFIGWIDGET_H
