#include "ggT.hpp"
#include <iostream>

int ggT(int a, int b){
  
    if (a == 0)                          
    {
    	return b;
    }
    while(b != 0)                       
    {
    	if (a > b)
    	{
    		a = a - b;               
    	}
        else
    	{
    		b = b - a;              
    	}
    }
    return a;                           
}

int main(){
  
  std::cout << "Der ggT ist : " << ggT(20,5);
  return 0;
}