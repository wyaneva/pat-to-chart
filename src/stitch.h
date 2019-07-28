#ifndef STITCH_H
#define STITCH_H

#include <string>

enum StitchTypeUK { ch, chsp, dc, tr, dtr };

class Stitch {

  StitchTypeUK type;
  int offset;

public:
  Stitch(StitchTypeUK type) : type(type), offset(1) {}
  Stitch(StitchTypeUK type, int offset) : type(type), offset(offset) {}

  void print();
};

#endif // STITCH_H
