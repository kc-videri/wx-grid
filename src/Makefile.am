## Process this file with automake to produce Makefile.in

## Created by Anjuta

AM_CPPFLAGS = \
	$(WX_CXXFLAGS) \
	-I../include \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS =\
	 -Wall \
	 -g \
	 -I../include \
	 $(WX_CPPFLAGS)

bin_PROGRAMS = wx_grid

wx_grid_SOURCES = \
	main.cpp \
	wx-grid-app.h \
	wx-grid.h \
	wx-grid-frame.cpp \
	wx-grid-frame.h

wx_grid_LDFLAGS = 

wx_grid_LDADD = \
	 \
	$(WX_LIBS)

