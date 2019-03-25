#include "image.h"

#ifndef DRAW_H
#define DRAW_H

#include "matrix.h"

/*
 * curve types
 */
#define HERMITE 0
#define BEZIER 1

void add_torus(struct matrix *polygons, double cx, double cy, double cz, double r, double R, int step);
void add_sphere(struct matrix *polygons, double cx, double cy, double cz, double r, int step);
void add_box(struct matrix *polygons, double x, double y, double z, double dx, double dy, double dz);
void add_cubic_curve(struct matrix *edges, double ax, double bx, double cx, double dx,
                                            double ay, double by, double cy, double dy, double step);
void add_bezier(struct matrix *edges, double x0, double y0, double x1, double y1,
                                       double x2, double y2, double x3, double y3, double step);
void add_hermite(struct matrix *edges, double x0, double y0, double x1, double y1,
                                        double x2, double y2, double x3, double y3, double step);

void add_circle(struct matrix *edges, double cx, double cy, double cz, double r, double step);

void add_column(struct matrix *m, double a, double b, double c, double d);
void add_point(struct matrix *edges, double x, double y, double z);
void add_edge(struct matrix *edges,
              double x0, double y0, double z0,
              double x1, double y1, double z1);
void add_polygon(struct matrix *polygons,
                 double x0, double y0, double z0,
                 double x1, double y1, double z1,
                 double x2, double y2, double z2);
void draw_edges(struct matrix *edges, Image s, color c);
void draw_polygons(struct matrix *polygons, Image s, color c);

void plot(int x, int y, Image s, color c);
void draw_line(int x0, int y0, int x1, int y1, Image s, color c);

#endif
