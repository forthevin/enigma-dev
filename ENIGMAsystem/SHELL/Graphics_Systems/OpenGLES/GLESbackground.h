/** Copyright (C) 2008-2013 Josh Ventura, Alasdair Morrison
***
*** This file is a part of the ENIGMA Development Environment.
***
*** ENIGMA is free software: you can redistribute it and/or modify it under the
*** terms of the GNU General Public License as published by the Free Software
*** Foundation, version 3 of the license or any later version.
***
*** This application and its source code is distributed AS-IS, WITHOUT ANY
*** WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
*** FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
*** details.
***
*** You should have received a copy of the GNU General Public License along
*** with this code. If not, see <http://www.gnu.org/licenses/>
**/

int draw_background(int back, double x, double y);
int draw_background_stretched(int back, double x, double y, double w, double h);
int draw_background_part(int back,double left,double top,double width,double height,double x,double y);
int draw_background_tiled(int back,double x,double y);
int draw_background_tiled_area(int back,double x,double y,double x1,double y1,double x2,double y2);
int draw_background_ext(int back,double x,double y,double xscale,double yscale,double rot,int color,double alpha);
int draw_background_stretched_ext(int back,double x,double y,double w,double h,int color,double alpha);
int draw_background_part_ext(int back,double left,double top,double width,double height,double x,double y,double xscale,double yscale,int color,double alpha);
int draw_background_tiled_ext(int back,double x,double y,double xscale,double yscale,int color,double alpha);
int draw_background_tiled_area_ext(int back,double x,double y,double x1,double y1,double x2,double y2, double xscale, double yscale, int color, double alpha);
int draw_background_general(int back,double left,double top,double width,double height,double x,double y,double xscale,double yscale,double rot,int c1,int c2,int c3,int c4,double a1,double a2,double a3,double a4);

