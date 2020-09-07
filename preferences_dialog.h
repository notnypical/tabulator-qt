/**
 * Copyright 2020 NotNypical, <https://notnypical.github.io>.
 *
 * This file is part of qTabulator.
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

#ifndef PREFERENCES_DIALOG_H
#define PREFERENCES_DIALOG_H

#include <QCheckBox>
#include <QCloseEvent>
#include <QDialog>
#include <QPushButton>


class PreferencesDialog : public QDialog
{
public:
    PreferencesDialog();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void onSettingsChanged();

    void onButtonDefaultsClicked();
    void onButtonOkClicked();
    void onButtonApplyClicked();
    void onButtonCancelClicked();

private:
    void setupUI();

    QWidget *stackApplication;
    void stackApplicationPage();
    QCheckBox *checkboxGeometryWindowRestore;
    QCheckBox *checkboxGeometryDialogRestore;

    QPushButton *buttonApply;

    void readSettings();
    void writeSettings();
    bool saveSettings;
};

#endif // PREFERENCES_DIALOG_H