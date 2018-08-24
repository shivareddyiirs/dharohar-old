/********************************************************************************
** Form generated from reading UI file 'graphicalSegmentationDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICALSEGMENTATIONDLG_H
#define UI_GRAPHICALSEGMENTATIONDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_GraphicalSegmentationDlg
{
public:
    QAction *actionSetRectangularSelection;
    QAction *actionSetPolylineSelection;
    QAction *actionUseExistingPolyline;
    QAction *actionExportSegmentationPolyline;
    QHBoxLayout *hboxLayout;
    QToolButton *pauseButton;
    QToolButton *selectionModelButton;
    QToolButton *inButton;
    QToolButton *outButton;
    QToolButton *razButton;
    QToolButton *validButton;
    QToolButton *validAndDeleteButton;
    QToolButton *cancelButton;

    void setupUi(QDialog *GraphicalSegmentationDlg)
    {
        if (GraphicalSegmentationDlg->objectName().isEmpty())
            GraphicalSegmentationDlg->setObjectName(QStringLiteral("GraphicalSegmentationDlg"));
        GraphicalSegmentationDlg->resize(251, 26);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GraphicalSegmentationDlg->sizePolicy().hasHeightForWidth());
        GraphicalSegmentationDlg->setSizePolicy(sizePolicy);
        GraphicalSegmentationDlg->setAutoFillBackground(true);
        GraphicalSegmentationDlg->setStyleSheet(QLatin1String("background-image:url(./images/kb.png);\n"
"background-attachment: fixed;\n"
"color: rgb(70, 0, 0);"));
        actionSetRectangularSelection = new QAction(GraphicalSegmentationDlg);
        actionSetRectangularSelection->setObjectName(QStringLiteral("actionSetRectangularSelection"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/images/smallRectangleSelect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetRectangularSelection->setIcon(icon);
        actionSetPolylineSelection = new QAction(GraphicalSegmentationDlg);
        actionSetPolylineSelection->setObjectName(QStringLiteral("actionSetPolylineSelection"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/CC/images/smallPolygonSelect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPolylineSelection->setIcon(icon1);
        actionUseExistingPolyline = new QAction(GraphicalSegmentationDlg);
        actionUseExistingPolyline->setObjectName(QStringLiteral("actionUseExistingPolyline"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/CC/images/dbPolylineSymbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUseExistingPolyline->setIcon(icon2);
        actionExportSegmentationPolyline = new QAction(GraphicalSegmentationDlg);
        actionExportSegmentationPolyline->setObjectName(QStringLiteral("actionExportSegmentationPolyline"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/CC/images/ccSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExportSegmentationPolyline->setIcon(icon3);
        hboxLayout = new QHBoxLayout(GraphicalSegmentationDlg);
        hboxLayout->setSpacing(2);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(2, 2, 2, 2);
        pauseButton = new QToolButton(GraphicalSegmentationDlg);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/CC/images/smallPause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pauseButton->setIcon(icon4);
        pauseButton->setCheckable(true);
        pauseButton->setChecked(false);

        hboxLayout->addWidget(pauseButton);

        selectionModelButton = new QToolButton(GraphicalSegmentationDlg);
        selectionModelButton->setObjectName(QStringLiteral("selectionModelButton"));
        selectionModelButton->setIcon(icon1);
        selectionModelButton->setPopupMode(QToolButton::MenuButtonPopup);

        hboxLayout->addWidget(selectionModelButton);

        inButton = new QToolButton(GraphicalSegmentationDlg);
        inButton->setObjectName(QStringLiteral("inButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/CC/images/smallSegmentIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        inButton->setIcon(icon5);

        hboxLayout->addWidget(inButton);

        outButton = new QToolButton(GraphicalSegmentationDlg);
        outButton->setObjectName(QStringLiteral("outButton"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/CC/images/smallSegmentOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        outButton->setIcon(icon6);

        hboxLayout->addWidget(outButton);

        razButton = new QToolButton(GraphicalSegmentationDlg);
        razButton->setObjectName(QStringLiteral("razButton"));
        razButton->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/CC/images/smallReset.png"), QSize(), QIcon::Normal, QIcon::Off);
        razButton->setIcon(icon7);

        hboxLayout->addWidget(razButton);

        validButton = new QToolButton(GraphicalSegmentationDlg);
        validButton->setObjectName(QStringLiteral("validButton"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/CC/images/smallValidate.png"), QSize(), QIcon::Normal, QIcon::Off);
        validButton->setIcon(icon8);

        hboxLayout->addWidget(validButton);

        validAndDeleteButton = new QToolButton(GraphicalSegmentationDlg);
        validAndDeleteButton->setObjectName(QStringLiteral("validAndDeleteButton"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/CC/images/smallTrash.png"), QSize(), QIcon::Normal, QIcon::Off);
        validAndDeleteButton->setIcon(icon9);

        hboxLayout->addWidget(validAndDeleteButton);

        cancelButton = new QToolButton(GraphicalSegmentationDlg);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/CC/images/smallCancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon10);

        hboxLayout->addWidget(cancelButton);


        retranslateUi(GraphicalSegmentationDlg);

        QMetaObject::connectSlotsByName(GraphicalSegmentationDlg);
    } // setupUi

    void retranslateUi(QDialog *GraphicalSegmentationDlg)
    {
        GraphicalSegmentationDlg->setWindowTitle(QApplication::translate("GraphicalSegmentationDlg", "Segmentation", 0));
        actionSetRectangularSelection->setText(QApplication::translate("GraphicalSegmentationDlg", "Rectangular selection", 0));
#ifndef QT_NO_TOOLTIP
        actionSetRectangularSelection->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Activates rectangular selection", 0));
#endif // QT_NO_TOOLTIP
        actionSetPolylineSelection->setText(QApplication::translate("GraphicalSegmentationDlg", "Polygonal selection", 0));
#ifndef QT_NO_TOOLTIP
        actionSetPolylineSelection->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Activaites polyline selection", 0));
#endif // QT_NO_TOOLTIP
        actionUseExistingPolyline->setText(QApplication::translate("GraphicalSegmentationDlg", "Use existing polyline", 0));
#ifndef QT_NO_TOOLTIP
        actionUseExistingPolyline->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Import polyline from DB for segmentation", 0));
#endif // QT_NO_TOOLTIP
        actionExportSegmentationPolyline->setText(QApplication::translate("GraphicalSegmentationDlg", "Export segmentation polyline", 0));
#ifndef QT_NO_TOOLTIP
        actionExportSegmentationPolyline->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Export segmentation polyline as new entity", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pauseButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Pause segmentation", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pauseButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Pause segmentation  (allow rotation/panning of 3D view)", 0));
#endif // QT_NO_STATUSTIP
        pauseButton->setText(QApplication::translate("GraphicalSegmentationDlg", "pause", 0));
#ifndef QT_NO_TOOLTIP
        selectionModelButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Polyline selection mode", 0));
#endif // QT_NO_TOOLTIP
        selectionModelButton->setText(QApplication::translate("GraphicalSegmentationDlg", "polyline selection", 0));
#ifndef QT_NO_TOOLTIP
        inButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Segment In", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        inButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Segment (keep points inside)", 0));
#endif // QT_NO_STATUSTIP
        inButton->setText(QApplication::translate("GraphicalSegmentationDlg", "in", 0));
#ifndef QT_NO_TOOLTIP
        outButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Segment Out", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        outButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Segment (keep points outside)", 0));
#endif // QT_NO_STATUSTIP
        outButton->setText(QApplication::translate("GraphicalSegmentationDlg", "out", 0));
#ifndef QT_NO_TOOLTIP
        razButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Clear segmentation", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        razButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Clear segmentation", 0));
#endif // QT_NO_STATUSTIP
        razButton->setText(QApplication::translate("GraphicalSegmentationDlg", "raz", 0));
#ifndef QT_NO_TOOLTIP
        validButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Confirm segmentation", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        validButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Confirm segmentation", 0));
#endif // QT_NO_STATUSTIP
        validButton->setText(QApplication::translate("GraphicalSegmentationDlg", "OK", 0));
#ifndef QT_NO_TOOLTIP
        validAndDeleteButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Confirm and delete hidden points", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        validAndDeleteButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Confirm and delete hidden points", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        cancelButton->setToolTip(QApplication::translate("GraphicalSegmentationDlg", "Cancel", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cancelButton->setStatusTip(QApplication::translate("GraphicalSegmentationDlg", "Cancel segentation", 0));
#endif // QT_NO_STATUSTIP
        cancelButton->setText(QApplication::translate("GraphicalSegmentationDlg", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class GraphicalSegmentationDlg: public Ui_GraphicalSegmentationDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICALSEGMENTATIONDLG_H
