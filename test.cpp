#include <iostream>

int main() {
  std::cout << "Enter a number: ";
  int x{};
  int y{};
  std::cin >> x >> y;
  std::cout << "Number chosen was: " << x << y;
  return 0;
}
