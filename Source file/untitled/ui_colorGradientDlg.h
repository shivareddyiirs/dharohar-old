/********************************************************************************
** Form generated from reading UI file 'colorGradientDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORGRADIENTDLG_H
#define UI_COLORGRADIENTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ColorGradientDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *defaultRampRadioButton;
    QRadioButton *customRampRadioButton;
    QFrame *customRampFrame;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QToolButton *firstColorButton;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QToolButton *secondColorButton;
    QRadioButton *bandingRadioButton;
    QFrame *bandingFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *bandingFreqSpinBox;
    QHBoxLayout *hboxLayout1;
    QLabel *label_3;
    QComboBox *directionComboBox;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColorGradientDialog)
    {
        if (ColorGradientDialog->objectName().isEmpty())
            ColorGradientDialog->setObjectName(QStringLiteral("ColorGradientDialog"));
        ColorGradientDialog->resize(240, 236);
        verticalLayout_2 = new QVBoxLayout(ColorGradientDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(ColorGradientDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        defaultRampRadioButton = new QRadioButton(groupBox);
        defaultRampRadioButton->setObjectName(QStringLiteral("defaultRampRadioButton"));
        defaultRampRadioButton->setChecked(true);

        verticalLayout->addWidget(defaultRampRadioButton);

        customRampRadioButton = new QRadioButton(groupBox);
        customRampRadioButton->setObjectName(QStringLiteral("customRampRadioButton"));

        verticalLayout->addWidget(customRampRadioButton);

        customRampFrame = new QFrame(groupBox);
        customRampFrame->setObjectName(QStringLiteral("customRampFrame"));
        customRampFrame->setEnabled(false);
        hboxLayout = new QHBoxLayout(customRampFrame);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(20, 0, 0, 0);
        label = new QLabel(customRampFrame);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout->addWidget(label);

        firstColorButton = new QToolButton(customRampFrame);
        firstColorButton->setObjectName(QStringLiteral("firstColorButton"));

        hboxLayout->addWidget(firstColorButton);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        label_2 = new QLabel(customRampFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        hboxLayout->addWidget(label_2);

        secondColorButton = new QToolButton(customRampFrame);
        secondColorButton->setObjectName(QStringLiteral("secondColorButton"));

        hboxLayout->addWidget(secondColorButton);


        verticalLayout->addWidget(customRampFrame);

        bandingRadioButton = new QRadioButton(groupBox);
        bandingRadioButton->setObjectName(QStringLiteral("bandingRadioButton"));

        verticalLayout->addWidget(bandingRadioButton);

        bandingFrame = new QFrame(groupBox);
        bandingFrame->setObjectName(QStringLiteral("bandingFrame"));
        bandingFrame->setEnabled(false);
        bandingFrame->setFrameShape(QFrame::StyledPanel);
        bandingFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(bandingFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, 0, 0, 0);
        label_4 = new QLabel(bandingFrame);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bandingFreqSpinBox = new QDoubleSpinBox(bandingFrame);
        bandingFreqSpinBox->setObjectName(QStringLiteral("bandingFreqSpinBox"));
        bandingFreqSpinBox->setDecimals(3);
        bandingFreqSpinBox->setMinimum(0);
        bandingFreqSpinBox->setMaximum(1e+07);
        bandingFreqSpinBox->setValue(5);

        horizontalLayout->addWidget(bandingFreqSpinBox);


        verticalLayout->addWidget(bandingFrame);


        verticalLayout_2->addWidget(groupBox);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        label_3 = new QLabel(ColorGradientDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        hboxLayout1->addWidget(label_3);

        directionComboBox = new QComboBox(ColorGradientDialog);
        directionComboBox->setObjectName(QStringLiteral("directionComboBox"));

        hboxLayout1->addWidget(directionComboBox);


        verticalLayout_2->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        buttonBox = new QDialogButtonBox(ColorGradientDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout2->addWidget(buttonBox);


        verticalLayout_2->addLayout(hboxLayout2);


        retranslateUi(ColorGradientDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ColorGradientDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ColorGradientDialog, SLOT(reject()));
        QObject::connect(bandingRadioButton, SIGNAL(toggled(bool)), bandingFrame, SLOT(setEnabled(bool)));
        QObject::connect(customRampRadioButton, SIGNAL(toggled(bool)), customRampFrame, SLOT(setEnabled(bool)));

        directionComboBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ColorGradientDialog);
    } // setupUi

    void retranslateUi(QDialog *ColorGradientDialog)
    {
        ColorGradientDialog->setWindowTitle(QApplication::translate("ColorGradientDialog", "Gradient color", 0));
        groupBox->setTitle(QApplication::translate("ColorGradientDialog", "Color ramp", 0));
        defaultRampRadioButton->setText(QApplication::translate("ColorGradientDialog", "Default", 0));
        customRampRadioButton->setText(QApplication::translate("ColorGradientDialog", "Custom", 0));
        label->setText(QApplication::translate("ColorGradientDialog", "First color", 0));
        firstColorButton->setText(QApplication::translate("ColorGradientDialog", "...", 0));
        label_2->setText(QApplication::translate("ColorGradientDialog", "Second color", 0));
        secondColorButton->setText(QApplication::translate("ColorGradientDialog", "...", 0));
        bandingRadioButton->setText(QApplication::translate("ColorGradientDialog", "Banding", 0));
        label_4->setText(QApplication::translate("ColorGradientDialog", "Period", 0));
        label_3->setText(QApplication::translate("ColorGradientDialog", "direction", 0));
        directionComboBox->clear();
        directionComboBox->insertItems(0, QStringList()
         << QApplication::translate("ColorGradientDialog", "X", 0)
         << QApplication::translate("ColorGradientDialog", "Y", 0)
         << QApplication::translate("ColorGradientDialog", "Z", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class ColorGradientDialog: public Ui_ColorGradientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORGRADIENTDLG_H
