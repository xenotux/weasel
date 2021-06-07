/**
 *  Weasel  -   Gui Process Explorer
 *  Copyright (C) 2021  Julian Zampiccoli
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef WEASEL_MAINWINDOW_HPP
#define WEASEL_MAINWINDOW_HPP

#include <QMainWindow>

#include "os/scheduler.hpp"

#include "widgets/processtreewidget.hpp"
#include "widgets/toolbarwidget.hpp"

class MainWindow : public QMainWindow {
Q_OBJECT
public:
    MainWindow();

    ~MainWindow() override;

private:
    void setupMenuBar();

    Scheduler sched;

    ToolbarWidget *toolbar;
    ProcessTreeWidget *procTree;
};

#endif //WEASEL_MAINWINDOW_HPP
