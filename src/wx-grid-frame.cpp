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

enum {
    ID_Hello = 1
};

wxBEGIN_EVENT_TABLE (WXGridFrame, wxFrame)
    EVT_MENU (ID_Hello, WXGridFrame::OnHello)
    EVT_MENU (wxID_EXIT, WXGridFrame::OnExit)
    EVT_MENU (wxID_ABOUT, WXGridFrame::OnAbout)
wxEND_EVENT_TABLE ()

WXGridFrame::WXGridFrame(const wxString & title, const wxPoint & pos, const wxSize & size):
    wxFrame(NULL, wxID_ANY, title, pos, size)
{
    wxMenu *menuFile;
    wxMenu *menuHelp;
    wxMenuBar *menuBar;
    
    menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H", "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);

    menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);

    // menu bar
    menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");
    SetMenuBar(menuBar);

    // status bar
    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");
}

void WXGridFrame::OnHello(wxCommandEvent & event)
{
    wxLogMessage("Hello world from wxWidgets!");
}

void WXGridFrame::OnExit(wxCommandEvent & event)
{
    wxMessageBox("This is a wxWidgets' Hello world sample", "About Hello World", wxOK | wxICON_INFORMATION);
}

void WXGridFrame::OnAbout(wxCommandEvent & event)
{
    Close(true);
}
