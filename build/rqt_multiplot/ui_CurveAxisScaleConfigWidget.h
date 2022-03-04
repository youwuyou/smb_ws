/********************************************************************************
** Form generated from reading UI file 'CurveAxisScaleConfigWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURVEAXISSCALECONFIGWIDGET_H
#define UI_CURVEAXISSCALECONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurveAxisScaleConfigWidget
{
public:
    QGridLayout *gridLayout;
    QRadioButton *radioButtonAbsolute;
    QRadioButton *radioButtonAuto;
    QRadioButton *radioButtonRelative;
    QLabel *label;
    QLineEdit *lineEditAbsoluteMinimum;
    QLineEdit *lineEditAbsoluteMaximum;
    QLineEdit *lineEditRelativeMinimum;
    QLineEdit *lineEditRelativeMaximum;
    QLabel *label_2;

    void setupUi(QWidget *CurveAxisScaleConfigWidget)
    {
        if (CurveAxisScaleConfigWidget->objectName().isEmpty())
            CurveAxisScaleConfigWidget->setObjectName(QString::fromUtf8("CurveAxisScaleConfigWidget"));
        CurveAxisScaleConfigWidget->resize(427, 75);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CurveAxisScaleConfigWidget->sizePolicy().hasHeightForWidth());
        CurveAxisScaleConfigWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(CurveAxisScaleConfigWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        radioButtonAbsolute = new QRadioButton(CurveAxisScaleConfigWidget);
        radioButtonAbsolute->setObjectName(QString::fromUtf8("radioButtonAbsolute"));

        gridLayout->addWidget(radioButtonAbsolute, 0, 0, 1, 1);

        radioButtonAuto = new QRadioButton(CurveAxisScaleConfigWidget);
        radioButtonAuto->setObjectName(QString::fromUtf8("radioButtonAuto"));

        gridLayout->addWidget(radioButtonAuto, 2, 0, 1, 1);

        radioButtonRelative = new QRadioButton(CurveAxisScaleConfigWidget);
        radioButtonRelative->setObjectName(QString::fromUtf8("radioButtonRelative"));

        gridLayout->addWidget(radioButtonRelative, 1, 0, 1, 1);

        label = new QLabel(CurveAxisScaleConfigWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 2, 1, 1);

        lineEditAbsoluteMinimum = new QLineEdit(CurveAxisScaleConfigWidget);
        lineEditAbsoluteMinimum->setObjectName(QString::fromUtf8("lineEditAbsoluteMinimum"));

        gridLayout->addWidget(lineEditAbsoluteMinimum, 0, 1, 1, 1);

        lineEditAbsoluteMaximum = new QLineEdit(CurveAxisScaleConfigWidget);
        lineEditAbsoluteMaximum->setObjectName(QString::fromUtf8("lineEditAbsoluteMaximum"));

        gridLayout->addWidget(lineEditAbsoluteMaximum, 0, 3, 1, 1);

        lineEditRelativeMinimum = new QLineEdit(CurveAxisScaleConfigWidget);
        lineEditRelativeMinimum->setObjectName(QString::fromUtf8("lineEditRelativeMinimum"));

        gridLayout->addWidget(lineEditRelativeMinimum, 1, 1, 1, 1);

        lineEditRelativeMaximum = new QLineEdit(CurveAxisScaleConfigWidget);
        lineEditRelativeMaximum->setObjectName(QString::fromUtf8("lineEditRelativeMaximum"));

        gridLayout->addWidget(lineEditRelativeMaximum, 1, 3, 1, 1);

        label_2 = new QLabel(CurveAxisScaleConfigWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 2, 1, 1);


        retranslateUi(CurveAxisScaleConfigWidget);

        QMetaObject::connectSlotsByName(CurveAxisScaleConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *CurveAxisScaleConfigWidget)
    {
        CurveAxisScaleConfigWidget->setWindowTitle(QApplication::translate("CurveAxisScaleConfigWidget", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButtonAbsolute->setToolTip(QApplication::translate("CurveAxisScaleConfigWidget", "Absolute axis scale", nullptr));
#endif // QT_NO_TOOLTIP
        radioButtonAbsolute->setText(QApplication::translate("CurveAxisScaleConfigWidget", "Absolute", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButtonAuto->setToolTip(QApplication::translate("CurveAxisScaleConfigWidget", "Automatic axis scale", nullptr));
#endif // QT_NO_TOOLTIP
        radioButtonAuto->setText(QApplication::translate("CurveAxisScaleConfigWidget", "Automatic", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButtonRelative->setToolTip(QApplication::translate("CurveAxisScaleConfigWidget", "Relative axis scale", nullptr));
#endif // QT_NO_TOOLTIP
        radioButtonRelative->setText(QApplication::translate("CurveAxisScaleConfigWidget", "Relative", nullptr));
        label->setText(QApplication::translate("CurveAxisScaleConfigWidget", "-", nullptr));
        label_2->setText(QApplication::translate("CurveAxisScaleConfigWidget", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CurveAxisScaleConfigWidget: public Ui_CurveAxisScaleConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURVEAXISSCALECONFIGWIDGET_H
