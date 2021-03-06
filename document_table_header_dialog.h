/**
 * Copyright 2020-2021 NotNypical, <https://notnypical.github.io>.
 *
 * This file is part of qTabulator, <https://github.com/notnypical/tabulator-qt>.
 *
 * qTabulator is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * qTabulator is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with qTabulator.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef DOCUMENT_TABLE_HEADER_DIALOG_H
#define DOCUMENT_TABLE_HEADER_DIALOG_H

#include "preferences.h"

#include <QButtonGroup>
#include <QCheckBox>
#include <QDialog>
#include <QLineEdit>
#include <QPushButton>


class DocumentTableHeaderDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DocumentTableHeaderDialog(const QString type, const int index, QWidget *parent = nullptr);

    Preferences::HeaderLabel headerLabelType() const;
    QString headerLabelParameter() const;

private slots:
    void onSettingChanged();

private:
    QPushButton *buttonOk;

    QButtonGroup *grpHeaderLabel;
    QCheckBox *chkBinary;
    QCheckBox *chkOctal;
    QCheckBox *chkDecimal;
    QCheckBox *chkHexadecimal;
    QCheckBox *chkLetter;
    QLineEdit *ledCustom;
};

#endif // DOCUMENT_TABLE_HEADER_DIALOG_H
