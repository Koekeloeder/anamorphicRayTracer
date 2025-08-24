#ifndef VERTEX_H_
#define VERTEX_H_

struct Vertex {
  double x;   // x coordinate
  double y;   // y coordinate
  double z;   // z coordinate
  double nx;  // x component of normal
  double ny;  // y component of normal
  double nz;  // z component of normal
  double u;   // u (or s) coordinate of texture
  double v;   // v (or t) coordinate of texture
};

#endif
