#include <iostream>
#include "stitch.h"

void Stitch::print() {

  std::cout << "Stitch:\t";
  switch (type) {
  case ch:
    std::cout << "chain\t";
  case chsp:
    std::cout << "chain space\t";
  case dc:
    std::cout << "double crochet\t";
  case tr:
    std::cout << "treble\t";
  case dtr:
    std::cout << "double treble\t";
  }

  std::cout << offset << std::endl;
}
