#include <iostream>      


unsigned int factorial(unsigned int zahl) {

    if (zahl <= 1) {
        return 1; 
    } else {
        return zahl * factorial(zahl - 1);
    }
}
int main (){
  
  std::cout << "factorial-Ergebnis ist : " << factorial(4);
  return 0;  
}