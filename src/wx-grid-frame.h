/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * wx-grid-frame.h
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

#ifndef _WX_GRID_FRAME_H_
#define _WX_GRID_FRAME_H_

#include "wx-grid.h"

class WXGridFrame:public wxFrame {
 public:
    WXGridFrame(const wxString & title, const wxPoint & pos, const wxSize & size);

 protected:

 private:
    void OnHello(wxCommandEvent & event);
    void OnExit(wxCommandEvent & event);
    void OnAbout(wxCommandEvent & event);
     wxDECLARE_EVENT_TABLE();
};

#endif                          // _WX_GRID_FRAME_H_
