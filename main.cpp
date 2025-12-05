#include <iostream>

namespace topit {
  struct p_t {
    int x, y;
  };
  struct f_t {
    p_t aa, bb;
  }; // pod
  bool operator==(p_t, p_t);
  bool operator!=(p_t, p_t);
} // namespace topit

int main() {
  using topit::p_t;
  p_t a{1,0}, b{1,0};
  std::cout << (a == b) << "\n";
}
bool topit::operator==(p_t a, p_t b) {
  return a.x == b.x && a.y == b.y;
}
bool topit::operator!=(p_t a, p_t b) {
  return !(a==b);
}
