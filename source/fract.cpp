#include <iostream>

float fract(float in_float_number){
  float result = in_float_number - int(in_float_number);
  return in_float_number - int(in_float_number);
}

int main() {
  
  float zahl = 5.123f;
  std::cout << "Der Nachkomaanteil der Floating-Point Zahl " << zahl
            << " ist " << fract(zahl) << "\n";

  return 0;
}