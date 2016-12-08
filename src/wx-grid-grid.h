/* -*- Mode: C; indent-tabs-mode: nil; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * wx-grid-grid.h
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

#ifndef _WX_GRID_GRID_H_
#define _WX_GRID_GRID_H_

#include <wx/grid.h>

#include "wx-grid-frame.h"

class WXGridGrid:public wxGrid {
 public:
    WXGridGrid(WXGridFrame * parent);

 protected:

 private:
    void cellChangeEvent(wxGridEvent& event);
    void cellChangingEvent(wxGridEvent& event);

    void editorHiddenEvent(wxGridEvent& event);
    void editorShownEvent(wxGridEvent& event);
    void editorCreatedEvent(wxGridEditorCreatedEvent& event);

    void cellLeftClickEvent(wxGridEvent& event);
    void cellRightClickEvent(wxGridEvent& event);
    void cellLeftCclickEvent(wxGridEvent& event);
    void cellRightDclickEvent(wxGridEvent& event);
    void labelLeftClickEvent(wxGridEvent& event);
    void labelRightClickEvent(wxGridEvent& event);
    void labelLeftDclickEvent(wxGridEvent& event);
    void labelRightDclickEvent(wxGridEvent& event);
    void selectCellEvent(wxGridEvent& event);
    void colSizeEvent(wxGridSizeEvent& event);
    void rowSizeEvent(wxGridSizeEvent& event);
    void rangeSelectEvent(wxGridRangeSelectEvent& event);
    void cellChangedEvent(wxGridEvent& event);
    void cellBeginDragEvent(wxGridEvent& event);
    void colMoveEvent(wxGridEvent& event);
    void colSortEvent(wxGridEvent& event);
    void tabbingEvent(wxGridEvent& event);
     wxDECLARE_EVENT_TABLE();
};

#endif                          // _WX_GRID_GRID_H_
