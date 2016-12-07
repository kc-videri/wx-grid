/* -*- Mode: C; indent-tabs-mode: nil; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * wx-grid-grid.cpp
 * Copyright (C) 2016 K-C Videri <kc.videri@gmail.com>
 *
 * source is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * source is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "wx-grid-grid.h"

WXGridGrid::WXGridGrid(WXGridFrame * parent):
    wxGrid(parent, wxID_ANY)
{
    int columns = 6;
    int rows = 10;

    CreateGrid(rows, columns);
    SetRowLabelSize(50);
    SetColLabelSize(25);
    SetRowLabelAlignment(wxALIGN_RIGHT, wxALIGN_CENTRE);
    SetLabelFont(wxFont(9, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD));

    for (int i = 0; i < columns; i++) {
        this->SetRowSize(i, 25);
    }
}
