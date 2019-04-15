
#include <iostream>

int checksum (int in_zahl){
   
  int quersumme = 0;
  
  while (in_zahl > 0) {
    quersumme += in_zahl % 10;
    in_zahl /= 10;
  }
  return quersumme;

}

int main (){
  
  std::cout << "Die Quersumme ist : " << checksum(120617);
  return 0;
}
