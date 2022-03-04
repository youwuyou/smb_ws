/********************************************************************************
** Form generated from reading UI file 'CurveDataConfigWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURVEDATACONFIGWIDGET_H
#define UI_CURVEDATACONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurveDataConfigWidget
{
public:
    QGridLayout *gridLayout;
    QFrame *line_3;
    QRadioButton *radioButtonCircularBuffer;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QRadioButton *radioButtonList;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBoxCircularBufferCapacity;
    QLabel *label_2;
    QRadioButton *radioButtonVector;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *radioButtonTimeFrame;
    QDoubleSpinBox *doubleSpinBoxTimeFrameLength;
    QLabel *label_3;

    void setupUi(QWidget *CurveDataConfigWidget)
    {
        if (CurveDataConfigWidget->objectName().isEmpty())
            CurveDataConfigWidget->setObjectName(QString::fromUtf8("CurveDataConfigWidget"));
        CurveDataConfigWidget->resize(848, 27);
        gridLayout = new QGridLayout(CurveDataConfigWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        line_3 = new QFrame(CurveDataConfigWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 0, 8, 1, 1);

        radioButtonCircularBuffer = new QRadioButton(CurveDataConfigWidget);
        radioButtonCircularBuffer->setObjectName(QString::fromUtf8("radioButtonCircularBuffer"));

        gridLayout->addWidget(radioButtonCircularBuffer, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        line = new QFrame(CurveDataConfigWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);

        radioButtonList = new QRadioButton(CurveDataConfigWidget);
        radioButtonList->setObjectName(QString::fromUtf8("radioButtonList"));

        gridLayout->addWidget(radioButtonList, 0, 2, 1, 1);

        label = new QLabel(CurveDataConfigWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 14, 1, 1);

        spinBoxCircularBufferCapacity = new QSpinBox(CurveDataConfigWidget);
        spinBoxCircularBufferCapacity->setObjectName(QString::fromUtf8("spinBoxCircularBufferCapacity"));
        spinBoxCircularBufferCapacity->setMinimum(1);
        spinBoxCircularBufferCapacity->setMaximum(999999999);

        gridLayout->addWidget(spinBoxCircularBufferCapacity, 0, 7, 1, 1);

        label_2 = new QLabel(CurveDataConfigWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 11, 1, 1);

        radioButtonVector = new QRadioButton(CurveDataConfigWidget);
        radioButtonVector->setObjectName(QString::fromUtf8("radioButtonVector"));

        gridLayout->addWidget(radioButtonVector, 0, 0, 1, 1);

        line_2 = new QFrame(CurveDataConfigWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 10, 1, 1);

        radioButtonTimeFrame = new QRadioButton(CurveDataConfigWidget);
        radioButtonTimeFrame->setObjectName(QString::fromUtf8("radioButtonTimeFrame"));

        gridLayout->addWidget(radioButtonTimeFrame, 0, 9, 1, 1);

        doubleSpinBoxTimeFrameLength = new QDoubleSpinBox(CurveDataConfigWidget);
        doubleSpinBoxTimeFrameLength->setObjectName(QString::fromUtf8("doubleSpinBoxTimeFrameLength"));
        doubleSpinBoxTimeFrameLength->setMinimum(0.100000000000000);
        doubleSpinBoxTimeFrameLength->setMaximum(500.000000000000000);

        gridLayout->addWidget(doubleSpinBoxTimeFrameLength, 0, 12, 1, 1);

        label_3 = new QLabel(CurveDataConfigWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 13, 1, 1);


        retranslateUi(CurveDataConfigWidget);

        QMetaObject::connectSlotsByName(CurveDataConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *CurveDataConfigWidget)
    {
        CurveDataConfigWidget->setWindowTitle(QApplication::translate("CurveDataConfigWidget", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButtonCircularBuffer->setToolTip(QApplication::translate("CurveDataConfigWidget", "Curve data is stored in a circular buffer with fixed capacity", nullptr));
#endif // QT_NO_TOOLTIP
        radioButtonCircularBuffer->setText(QApplication::translate("CurveDataConfigWidget", "Circular buffer", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButtonList->setToolTip(QApplication::translate("CurveDataConfigWidget", "Curve data is stored in a list with unbound capacity", nullptr));
#endif // QT_NO_TOOLTIP
        radioButtonList->setText(QApplication::translate("CurveDataConfigWidget", "List", nullptr));
        label->setText(QApplication::translate("CurveDataConfigWidget", "Capacity:", nullptr));
        label_2->setText(QApplication::translate("CurveDataConfigWidget", "Length:", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButtonVector->setToolTip(QApplication::translate("CurveDataConfigWidget", "Curve data is stored in a vector with unbound capacity", nullptr));
#endif // QT_NO_TOOLTIP
        radioButtonVector->setText(QApplication::translate("CurveDataConfigWidget", "Vector", nullptr));
        radioButtonTimeFrame->setText(QApplication::translate("CurveDataConfigWidget", "Time frame", nullptr));
        label_3->setText(QApplication::translate("CurveDataConfigWidget", "s", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CurveDataConfigWidget: public Ui_CurveDataConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURVEDATACONFIGWIDGET_H
