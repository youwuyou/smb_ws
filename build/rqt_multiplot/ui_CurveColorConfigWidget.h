/********************************************************************************
** Form generated from reading UI file 'CurveColorConfigWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURVECOLORCONFIGWIDGET_H
#define UI_CURVECOLORCONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurveColorConfigWidget
{
public:
    QGridLayout *gridLayout;
    QCheckBox *checkBoxAuto;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *labelColor;

    void setupUi(QWidget *CurveColorConfigWidget)
    {
        if (CurveColorConfigWidget->objectName().isEmpty())
            CurveColorConfigWidget->setObjectName(QString::fromUtf8("CurveColorConfigWidget"));
        CurveColorConfigWidget->resize(400, 23);
        gridLayout = new QGridLayout(CurveColorConfigWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        checkBoxAuto = new QCheckBox(CurveColorConfigWidget);
        checkBoxAuto->setObjectName(QString::fromUtf8("checkBoxAuto"));
        checkBoxAuto->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(checkBoxAuto, 0, 2, 1, 1);

        frame = new QFrame(CurveColorConfigWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(0, 23));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelColor = new QLabel(frame);
        labelColor->setObjectName(QString::fromUtf8("labelColor"));
        labelColor->setCursor(QCursor(Qt::PointingHandCursor));
        labelColor->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelColor, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 1, 1, 1);


        retranslateUi(CurveColorConfigWidget);

        QMetaObject::connectSlotsByName(CurveColorConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *CurveColorConfigWidget)
    {
        CurveColorConfigWidget->setWindowTitle(QApplication::translate("CurveColorConfigWidget", "Form", nullptr));
        checkBoxAuto->setText(QApplication::translate("CurveColorConfigWidget", "Auto", nullptr));
        labelColor->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CurveColorConfigWidget: public Ui_CurveColorConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURVECOLORCONFIGWIDGET_H
