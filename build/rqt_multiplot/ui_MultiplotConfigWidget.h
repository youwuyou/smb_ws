/********************************************************************************
** Form generated from reading UI file 'MultiplotConfigWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIPLOTCONFIGWIDGET_H
#define UI_MULTIPLOTCONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <rqt_multiplot/ConfigComboBox.h>

QT_BEGIN_NAMESPACE

class Ui_MultiplotConfigWidget
{
public:
    QGridLayout *gridLayout;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonNew;
    QPushButton *pushButtonOpen;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonSaveAs;
    rqt_multiplot::ConfigComboBox *configComboBox;
    QPushButton *pushButtonClearHistory;

    void setupUi(QWidget *MultiplotConfigWidget)
    {
        if (MultiplotConfigWidget->objectName().isEmpty())
            MultiplotConfigWidget->setObjectName(QString::fromUtf8("MultiplotConfigWidget"));
        MultiplotConfigWidget->resize(706, 24);
        gridLayout = new QGridLayout(MultiplotConfigWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        line = new QFrame(MultiplotConfigWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonNew = new QPushButton(MultiplotConfigWidget);
        pushButtonNew->setObjectName(QString::fromUtf8("pushButtonNew"));
        pushButtonNew->setMinimumSize(QSize(22, 22));
        pushButtonNew->setMaximumSize(QSize(22, 22));
        pushButtonNew->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../resource/16x16/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNew->setIcon(icon);
        pushButtonNew->setIconSize(QSize(16, 16));
        pushButtonNew->setFlat(true);

        horizontalLayout->addWidget(pushButtonNew);

        pushButtonOpen = new QPushButton(MultiplotConfigWidget);
        pushButtonOpen->setObjectName(QString::fromUtf8("pushButtonOpen"));
        pushButtonOpen->setMinimumSize(QSize(22, 22));
        pushButtonOpen->setMaximumSize(QSize(22, 22));
        pushButtonOpen->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../resource/16x16/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonOpen->setIcon(icon1);
        pushButtonOpen->setIconSize(QSize(16, 16));
        pushButtonOpen->setFlat(true);

        horizontalLayout->addWidget(pushButtonOpen);

        pushButtonSave = new QPushButton(MultiplotConfigWidget);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(22, 22));
        pushButtonSave->setMaximumSize(QSize(22, 22));
        pushButtonSave->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../resource/16x16/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSave->setIcon(icon2);
        pushButtonSave->setIconSize(QSize(16, 16));
        pushButtonSave->setFlat(true);

        horizontalLayout->addWidget(pushButtonSave);

        pushButtonSaveAs = new QPushButton(MultiplotConfigWidget);
        pushButtonSaveAs->setObjectName(QString::fromUtf8("pushButtonSaveAs"));
        pushButtonSaveAs->setMinimumSize(QSize(22, 22));
        pushButtonSaveAs->setMaximumSize(QSize(22, 22));
        pushButtonSaveAs->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../resource/16x16/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSaveAs->setIcon(icon3);
        pushButtonSaveAs->setIconSize(QSize(16, 16));
        pushButtonSaveAs->setFlat(true);

        horizontalLayout->addWidget(pushButtonSaveAs);


        gridLayout->addLayout(horizontalLayout, 0, 3, 1, 1);

        configComboBox = new rqt_multiplot::ConfigComboBox(MultiplotConfigWidget);
        configComboBox->setObjectName(QString::fromUtf8("configComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(configComboBox->sizePolicy().hasHeightForWidth());
        configComboBox->setSizePolicy(sizePolicy);
        configComboBox->setEditable(true);
        configComboBox->setInsertPolicy(QComboBox::NoInsert);

        gridLayout->addWidget(configComboBox, 0, 0, 1, 1);

        pushButtonClearHistory = new QPushButton(MultiplotConfigWidget);
        pushButtonClearHistory->setObjectName(QString::fromUtf8("pushButtonClearHistory"));
        pushButtonClearHistory->setMinimumSize(QSize(22, 22));
        pushButtonClearHistory->setMaximumSize(QSize(22, 22));
        pushButtonClearHistory->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../resource/16x16/clear_history.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonClearHistory->setIcon(icon4);
        pushButtonClearHistory->setIconSize(QSize(16, 16));
        pushButtonClearHistory->setFlat(true);

        gridLayout->addWidget(pushButtonClearHistory, 0, 1, 1, 1);


        retranslateUi(MultiplotConfigWidget);

        QMetaObject::connectSlotsByName(MultiplotConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *MultiplotConfigWidget)
    {
        MultiplotConfigWidget->setWindowTitle(QApplication::translate("MultiplotConfigWidget", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonNew->setToolTip(QApplication::translate("MultiplotConfigWidget", "New configuration", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonNew->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonOpen->setToolTip(QApplication::translate("MultiplotConfigWidget", "Open configuration", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonOpen->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonSave->setToolTip(QApplication::translate("MultiplotConfigWidget", "Save configuration", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonSave->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonSaveAs->setToolTip(QApplication::translate("MultiplotConfigWidget", "Save configuration as...", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonSaveAs->setText(QString());
#ifndef QT_NO_TOOLTIP
        configComboBox->setToolTip(QApplication::translate("MultiplotConfigWidget", "URL of the configuration file (supported schemes are file://, home://, and package://)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButtonClearHistory->setToolTip(QApplication::translate("MultiplotConfigWidget", "Clear configuration file history", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonClearHistory->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MultiplotConfigWidget: public Ui_MultiplotConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPLOTCONFIGWIDGET_H
