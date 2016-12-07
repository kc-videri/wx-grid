/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * wx-grid-frame.cpp
 * Copyright (C) 2016 K-C Videri <kc.videri@gmail.com>
 *
 * wx-grid is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * wx-grid is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "wx-grid-frame.h"
#include "wx-grid-frame_private.h"
#include "wx-grid-grid.h"

WXGridFrame::WXGridFrame(const wxString & title, const wxPoint & pos, const wxSize & size):
    wxFrame(NULL, wxID_ANY, title, pos, size)
{
    wxMenu *menuFile;
    wxMenu *menuHelp;
    wxMenuBar *menuBar;
    WXGridGrid *grid;

    menuFile = new wxMenu;
    //menuFile->Append(ID_Hello, "&Hello...\tCtrl-H", "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);

    menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);

    // menu bar
    menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");
    SetMenuBar(menuBar);

		grid = new WXGridGrid(this);

    // status bar
    CreateStatusBar();
    SetStatusText("Welcome to wxwidget grid sample!");
}

void WXGridFrame::OnExit(wxCommandEvent & event)
{
    Close(true);
}

void WXGridFrame::OnAbout(wxCommandEvent & event)
{
    wxMessageBox("This is a wxGrid test sample", "About wxGrid", wxOK | wxICON_INFORMATION);
}
