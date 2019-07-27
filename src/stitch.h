#ifndef STITCH_H
#define STITCH_H

#include <string>

class Stitch {

  std::string name;
  int offset;

public:
  Stitch(std::string name) : name(name), offset(1) {}
  Stitch(std::string name, int offset) : name(name), offset(offset) {}

  void print();
};

#endif // STITCH_H
