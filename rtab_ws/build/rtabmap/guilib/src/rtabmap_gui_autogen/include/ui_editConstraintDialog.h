/********************************************************************************
** Form generated from reading UI file 'editConstraintDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCONSTRAINTDIALOG_H
#define UI_EDITCONSTRAINTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditConstraintDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_pose;
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *x;
    QLabel *label_4;
    QDoubleSpinBox *roll;
    QLabel *label_2;
    QDoubleSpinBox *y;
    QLabel *label_5;
    QDoubleSpinBox *pitch;
    QLabel *label_3;
    QDoubleSpinBox *z;
    QLabel *label_6;
    QDoubleSpinBox *yaw;
    QGroupBox *groupBox_covariance;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *angular_sigma_roll;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_8;
    QDoubleSpinBox *angular_sigma_pitch;
    QDoubleSpinBox *linear_sigma_x;
    QDoubleSpinBox *angular_sigma_yaw;
    QDoubleSpinBox *linear_sigma_y;
    QDoubleSpinBox *linear_sigma_z;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox_radians;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditConstraintDialog)
    {
        if (EditConstraintDialog->objectName().isEmpty())
            EditConstraintDialog->setObjectName(QString::fromUtf8("EditConstraintDialog"));
        EditConstraintDialog->resize(393, 360);
        verticalLayout = new QVBoxLayout(EditConstraintDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_pose = new QGroupBox(EditConstraintDialog);
        groupBox_pose->setObjectName(QString::fromUtf8("groupBox_pose"));
        gridLayout = new QGridLayout(groupBox_pose);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_pose);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        x = new QDoubleSpinBox(groupBox_pose);
        x->setObjectName(QString::fromUtf8("x"));
        x->setDecimals(6);
        x->setMinimum(-9999.000000000000000);
        x->setMaximum(9999.000000000000000);
        x->setSingleStep(0.001000000000000);

        gridLayout->addWidget(x, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_pose);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        roll = new QDoubleSpinBox(groupBox_pose);
        roll->setObjectName(QString::fromUtf8("roll"));
        roll->setDecimals(6);
        roll->setMinimum(-3.150000000000000);
        roll->setMaximum(3.150000000000000);
        roll->setSingleStep(0.001000000000000);

        gridLayout->addWidget(roll, 0, 3, 1, 1);

        label_2 = new QLabel(groupBox_pose);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        y = new QDoubleSpinBox(groupBox_pose);
        y->setObjectName(QString::fromUtf8("y"));
        y->setDecimals(6);
        y->setMinimum(-9999.000000000000000);
        y->setMaximum(9999.000000000000000);
        y->setSingleStep(0.001000000000000);

        gridLayout->addWidget(y, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox_pose);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 2, 1, 1);

        pitch = new QDoubleSpinBox(groupBox_pose);
        pitch->setObjectName(QString::fromUtf8("pitch"));
        pitch->setDecimals(6);
        pitch->setMinimum(-3.150000000000000);
        pitch->setMaximum(3.150000000000000);
        pitch->setSingleStep(0.001000000000000);

        gridLayout->addWidget(pitch, 1, 3, 1, 1);

        label_3 = new QLabel(groupBox_pose);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        z = new QDoubleSpinBox(groupBox_pose);
        z->setObjectName(QString::fromUtf8("z"));
        z->setDecimals(6);
        z->setMinimum(-9999.000000000000000);
        z->setMaximum(9999.000000000000000);
        z->setSingleStep(0.001000000000000);

        gridLayout->addWidget(z, 2, 1, 1, 1);

        label_6 = new QLabel(groupBox_pose);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 2, 1, 1);

        yaw = new QDoubleSpinBox(groupBox_pose);
        yaw->setObjectName(QString::fromUtf8("yaw"));
        yaw->setDecimals(6);
        yaw->setMinimum(-3.150000000000000);
        yaw->setMaximum(3.150000000000000);
        yaw->setSingleStep(0.001000000000000);

        gridLayout->addWidget(yaw, 2, 3, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(3, 1);

        verticalLayout->addWidget(groupBox_pose);

        groupBox_covariance = new QGroupBox(EditConstraintDialog);
        groupBox_covariance->setObjectName(QString::fromUtf8("groupBox_covariance"));
        gridLayout_2 = new QGridLayout(groupBox_covariance);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        angular_sigma_roll = new QDoubleSpinBox(groupBox_covariance);
        angular_sigma_roll->setObjectName(QString::fromUtf8("angular_sigma_roll"));
        angular_sigma_roll->setDecimals(6);
        angular_sigma_roll->setMinimum(0.000000000000000);
        angular_sigma_roll->setMaximum(3.150000000000000);
        angular_sigma_roll->setSingleStep(0.001000000000000);
        angular_sigma_roll->setValue(0.000000000000000);

        gridLayout_2->addWidget(angular_sigma_roll, 0, 3, 1, 1);

        label_10 = new QLabel(groupBox_covariance);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 1, 2, 1, 1);

        label_7 = new QLabel(groupBox_covariance);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        label_8 = new QLabel(groupBox_covariance);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 2, 1, 1);

        angular_sigma_pitch = new QDoubleSpinBox(groupBox_covariance);
        angular_sigma_pitch->setObjectName(QString::fromUtf8("angular_sigma_pitch"));
        angular_sigma_pitch->setDecimals(6);
        angular_sigma_pitch->setMinimum(0.000000000000000);
        angular_sigma_pitch->setMaximum(3.150000000000000);
        angular_sigma_pitch->setSingleStep(0.001000000000000);
        angular_sigma_pitch->setValue(0.000000000000000);

        gridLayout_2->addWidget(angular_sigma_pitch, 1, 3, 1, 1);

        linear_sigma_x = new QDoubleSpinBox(groupBox_covariance);
        linear_sigma_x->setObjectName(QString::fromUtf8("linear_sigma_x"));
        linear_sigma_x->setDecimals(6);
        linear_sigma_x->setMinimum(0.000000000000000);
        linear_sigma_x->setMaximum(9999.000000000000000);
        linear_sigma_x->setSingleStep(0.001000000000000);
        linear_sigma_x->setValue(0.000000000000000);

        gridLayout_2->addWidget(linear_sigma_x, 0, 1, 1, 1);

        angular_sigma_yaw = new QDoubleSpinBox(groupBox_covariance);
        angular_sigma_yaw->setObjectName(QString::fromUtf8("angular_sigma_yaw"));
        angular_sigma_yaw->setDecimals(6);
        angular_sigma_yaw->setMinimum(0.000000000000000);
        angular_sigma_yaw->setMaximum(3.150000000000000);
        angular_sigma_yaw->setSingleStep(0.001000000000000);
        angular_sigma_yaw->setValue(0.000000000000000);

        gridLayout_2->addWidget(angular_sigma_yaw, 2, 3, 1, 1);

        linear_sigma_y = new QDoubleSpinBox(groupBox_covariance);
        linear_sigma_y->setObjectName(QString::fromUtf8("linear_sigma_y"));
        linear_sigma_y->setDecimals(6);
        linear_sigma_y->setMinimum(0.000000000000000);
        linear_sigma_y->setMaximum(9999.000000000000000);
        linear_sigma_y->setSingleStep(0.001000000000000);
        linear_sigma_y->setValue(0.000000000000000);

        gridLayout_2->addWidget(linear_sigma_y, 1, 1, 1, 1);

        linear_sigma_z = new QDoubleSpinBox(groupBox_covariance);
        linear_sigma_z->setObjectName(QString::fromUtf8("linear_sigma_z"));
        linear_sigma_z->setDecimals(6);
        linear_sigma_z->setMinimum(0.000000000000000);
        linear_sigma_z->setMaximum(9999.000000000000000);
        linear_sigma_z->setSingleStep(0.001000000000000);
        linear_sigma_z->setValue(0.000000000000000);

        gridLayout_2->addWidget(linear_sigma_z, 2, 1, 1, 1);

        label_11 = new QLabel(groupBox_covariance);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 2, 2, 1, 1);

        label_12 = new QLabel(groupBox_covariance);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        label_13 = new QLabel(groupBox_covariance);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 2, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);
        gridLayout_2->setColumnStretch(3, 1);

        verticalLayout->addWidget(groupBox_covariance);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_9 = new QLabel(EditConstraintDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBox_radians = new QCheckBox(EditConstraintDialog);
        checkBox_radians->setObjectName(QString::fromUtf8("checkBox_radians"));
        checkBox_radians->setChecked(true);

        horizontalLayout->addWidget(checkBox_radians);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(EditConstraintDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EditConstraintDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditConstraintDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditConstraintDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditConstraintDialog);
    } // setupUi

    void retranslateUi(QDialog *EditConstraintDialog)
    {
        EditConstraintDialog->setWindowTitle(QCoreApplication::translate("EditConstraintDialog", "Edit Constraint", nullptr));
        groupBox_pose->setTitle(QCoreApplication::translate("EditConstraintDialog", "Pose", nullptr));
        label->setText(QCoreApplication::translate("EditConstraintDialog", "x", nullptr));
        x->setSuffix(QCoreApplication::translate("EditConstraintDialog", " m", nullptr));
        label_4->setText(QCoreApplication::translate("EditConstraintDialog", "roll", nullptr));
        roll->setSuffix(QCoreApplication::translate("EditConstraintDialog", " rad", nullptr));
        label_2->setText(QCoreApplication::translate("EditConstraintDialog", "y", nullptr));
        y->setSuffix(QCoreApplication::translate("EditConstraintDialog", " m", nullptr));
        label_5->setText(QCoreApplication::translate("EditConstraintDialog", "pitch", nullptr));
        pitch->setSuffix(QCoreApplication::translate("EditConstraintDialog", " rad", nullptr));
        label_3->setText(QCoreApplication::translate("EditConstraintDialog", "z", nullptr));
        z->setSuffix(QCoreApplication::translate("EditConstraintDialog", " m", nullptr));
        label_6->setText(QCoreApplication::translate("EditConstraintDialog", "yaw", nullptr));
        yaw->setSuffix(QCoreApplication::translate("EditConstraintDialog", " rad", nullptr));
        groupBox_covariance->setTitle(QCoreApplication::translate("EditConstraintDialog", "Covariance", nullptr));
        angular_sigma_roll->setSuffix(QCoreApplication::translate("EditConstraintDialog", " rad", nullptr));
        label_10->setText(QCoreApplication::translate("EditConstraintDialog", "<html><head/><body><p>\317\203 pitch</p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("EditConstraintDialog", "<html><head/><body><p>\317\203  x</p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("EditConstraintDialog", "<html><head/><body><p>\317\203 roll</p></body></html>", nullptr));
        angular_sigma_pitch->setSuffix(QCoreApplication::translate("EditConstraintDialog", " rad", nullptr));
        linear_sigma_x->setSuffix(QCoreApplication::translate("EditConstraintDialog", " m", nullptr));
        angular_sigma_yaw->setSuffix(QCoreApplication::translate("EditConstraintDialog", " rad", nullptr));
        linear_sigma_y->setSuffix(QCoreApplication::translate("EditConstraintDialog", " m", nullptr));
        linear_sigma_z->setSuffix(QCoreApplication::translate("EditConstraintDialog", " m", nullptr));
        label_11->setText(QCoreApplication::translate("EditConstraintDialog", "<html><head/><body><p>\317\203 yaw</p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("EditConstraintDialog", "<html><head/><body><p>\317\203 y</p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("EditConstraintDialog", "<html><head/><body><p>\317\203 z</p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("EditConstraintDialog", "<html><head/><body><p>Setting \317\203 to 0 will set 9999 covariance.</p></body></html>", nullptr));
        checkBox_radians->setText(QCoreApplication::translate("EditConstraintDialog", "Radians", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditConstraintDialog: public Ui_EditConstraintDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCONSTRAINTDIALOG_H
