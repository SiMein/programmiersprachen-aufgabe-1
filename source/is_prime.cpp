#include <iostream>      

bool is_prime(int p) {
    for (int i = p - 1; i > 1; i--) {
        if ((p % i) == 0)
            return false;
    }
    return true;
}

int main (){
  
  if (is_prime(4)) {std::cout << "is a prime-number" << std::endl;}
  else {std::cout << "is not a prime number";}
  return 0;  
}