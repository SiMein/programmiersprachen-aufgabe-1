#include <iostream> 

int main (){
  
 // int sum_multiples() {
  
    int sum = 0;
  
    for (int i = 1; i <= 9; i++) {
      if (( i % 3 == 0) || ( i % 5 == 0)) {
        sum = sum + i;   
      }      
    }
  std::cout << "Die Summe ist : " << sum;
 
  return 0;
}