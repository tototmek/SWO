#include "Moung.h"
#include <iostream>

void Moung::A() { ++count; }

int Moung::moung(int a) {
  for (int i = 0; i < a; ++i) {
    A();
  }
  std::cout << "Moung " << count << "\n";
  return count;
}
