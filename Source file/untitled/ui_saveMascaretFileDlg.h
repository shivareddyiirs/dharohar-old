/********************************************************************************
** Form generated from reading UI file 'saveMascaretFileDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEMASCARETFILEDLG_H
#define UI_SAVEMASCARETFILEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SaveMascaretFileDlg
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *biefNameLineEdit;
    QLabel *label_2;
    QComboBox *typeComboBox;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SaveMascaretFileDlg)
    {
        if (SaveMascaretFileDlg->objectName().isEmpty())
            SaveMascaretFileDlg->setObjectName(QStringLiteral("SaveMascaretFileDlg"));
        SaveMascaretFileDlg->resize(400, 99);
        formLayout = new QFormLayout(SaveMascaretFileDlg);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(SaveMascaretFileDlg);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        biefNameLineEdit = new QLineEdit(SaveMascaretFileDlg);
        biefNameLineEdit->setObjectName(QStringLiteral("biefNameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, biefNameLineEdit);

        label_2 = new QLabel(SaveMascaretFileDlg);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        typeComboBox = new QComboBox(SaveMascaretFileDlg);
        typeComboBox->setObjectName(QStringLiteral("typeComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, typeComboBox);

        buttonBox = new QDialogButtonBox(SaveMascaretFileDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(3, QFormLayout::SpanningRole, buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer);


        retranslateUi(SaveMascaretFileDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), SaveMascaretFileDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SaveMascaretFileDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(SaveMascaretFileDlg);
    } // setupUi

    void retranslateUi(QDialog *SaveMascaretFileDlg)
    {
        SaveMascaretFileDlg->setWindowTitle(QApplication::translate("SaveMascaretFileDlg", "Save Mascaret profile", 0));
        label->setText(QApplication::translate("SaveMascaretFileDlg", "Reach/bief name", 0));
        biefNameLineEdit->setText(QApplication::translate("SaveMascaretFileDlg", "Profile", 0));
        label_2->setText(QApplication::translate("SaveMascaretFileDlg", "Bed type", 0));
        typeComboBox->clear();
        typeComboBox->insertItems(0, QStringList()
         << QApplication::translate("SaveMascaretFileDlg", "B (bathy)", 0)
         << QApplication::translate("SaveMascaretFileDlg", "T (topo)", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class SaveMascaretFileDlg: public Ui_SaveMascaretFileDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEMASCARETFILEDLG_H
