/**
 * Copyright 2020-2021 NotNypical, <https://notnypical.github.io>.
 *
 * This file is part of Tabulator-Qt, <https://github.com/notnypical/tabulator-qt>.
 *
 * Tabulator-Qt is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Tabulator-Qt is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Tabulator-Qt.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef PREFERENCES_DOCUMENT_PRESETS_PAGE_H
#define PREFERENCES_DOCUMENT_PRESETS_PAGE_H

#include <QButtonGroup>
#include <QSpinBox>
#include <QVBoxLayout>
#include <QWidget>

#include "preferences.h"


class PreferencesDocumentPresetsPage : public QWidget
{
    Q_OBJECT

public:
    explicit PreferencesDocumentPresetsPage(QWidget *parent = nullptr);

    void setZeroMargins();

    QString title() const;

    void setDefaultHeaderLabelHorizontal(const Preferences::HeaderLabel type);
    Preferences::HeaderLabel defaultHeaderLabelHorizontal() const;

    void setDefaultHeaderLabelVertical(const Preferences::HeaderLabel type);
    Preferences::HeaderLabel defaultHeaderLabelVertical() const;

    void setDefaultCellCountColumn(const int val);
    int defaultCellCountColumn() const;

    void setDefaultCellCountRow(const int val);
    int defaultCellCountRow() const;

signals:
    void preferencesChanged();

private slots:
    void onPreferencesChanged();

private:
    QVBoxLayout *m_layout;

    QButtonGroup *m_grpDefaultHeaderLabelHorizontal;
    QButtonGroup *m_grpDefaultHeaderLabelVertical;

    QSpinBox *m_spbDefaultCellCountColumn;
    QSpinBox *m_spbDefaultCellCountRow;
};

#endif // PREFERENCES_DOCUMENT_PRESETS_PAGE_H
