/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.cpp
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

#include "wx-grid-app.h"
#include "wx-grid-frame.h"

bool MyApp::OnInit()
{
	WXGridFrame *frame = new WXGridFrame("Hello World", wxPoint(50, 50), wxSize(450, 340));
	frame->Show(TRUE);

	return TRUE;
}

IMPLEMENT_APP(MyApp)

