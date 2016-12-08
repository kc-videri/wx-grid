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

#ifndef _WX_GRID_GRID_PRIVATE_H_
#define _WX_GRID_GRID_PRIVATE_H_

#if 0
enum {
    ID_Hello = 1
};
#endif

wxBEGIN_EVENT_TABLE(WXGridGrid, wxGrid)
    EVT_GRID_EDITOR_HIDDEN(WXGridGrid::editorHiddenEvent)
    EVT_GRID_EDITOR_SHOWN(WXGridGrid::editorShownEvent)
    EVT_GRID_EDITOR_CREATED(WXGridGrid::editorCreatedEvent)

    EVT_GRID_CELL_LEFT_CLICK(WXGridGrid::cellLeftClickEvent)
    EVT_GRID_CELL_RIGHT_CLICK(WXGridGrid::cellRightClickEvent)
    EVT_GRID_CELL_LEFT_DCLICK(WXGridGrid::cellLeftCclickEvent)
    EVT_GRID_CELL_RIGHT_DCLICK(WXGridGrid::cellRightDclickEvent)
    EVT_GRID_LABEL_LEFT_CLICK(WXGridGrid::labelLeftClickEvent)
    EVT_GRID_LABEL_RIGHT_CLICK(WXGridGrid::labelRightClickEvent)
    EVT_GRID_LABEL_LEFT_DCLICK(WXGridGrid::labelLeftDclickEvent)
    EVT_GRID_LABEL_RIGHT_DCLICK(WXGridGrid::labelRightDclickEvent)
    EVT_GRID_CELL_CHANGE(WXGridGrid::cellChangeEvent)
    EVT_GRID_SELECT_CELL(WXGridGrid::selectCellEvent)
    EVT_GRID_CELL_CHANGING(WXGridGrid::cellChangingEvent)
    EVT_GRID_COL_SIZE(WXGridGrid::colSizeEvent)
    EVT_GRID_ROW_SIZE(WXGridGrid::rowSizeEvent)
    EVT_GRID_RANGE_SELECT(WXGridGrid::rangeSelectEvent)
    EVT_GRID_CELL_CHANGED(WXGridGrid::cellChangedEvent)
    EVT_GRID_CELL_BEGIN_DRAG(WXGridGrid::cellBeginDragEvent)
    EVT_GRID_COL_MOVE(WXGridGrid::colMoveEvent)
    EVT_GRID_COL_SORT(WXGridGrid::colSortEvent)
    EVT_GRID_TABBING(WXGridGrid::tabbingEvent)
wxEND_EVENT_TABLE()

#endif                          // _WX_GRID_GRID_PRIVATE_H_
