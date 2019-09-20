#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "utility.hpp"
#include "stack.hpp"
#include <vector>
#include <string>

int main(int argc, char* argv[]){

  std::cout << "this is test  begin \n" << std::endl;

  Stack<int> st1;
  //st1.top();  // core dump   weil noch leer -hier wäre abfrage size >0 gut
  st1.push(7);
  st1.top();
  st1.push(14);
  st1.top();
  st1.push(21);
  st1.top();
  st1.pop();
  st1.top();

  Stack<std::string> st2;
  //st1.top();  // core dump   weil noch leer -hier wäre abfrage size >0 gut
  st2.push("sieben");
  st2.top();
  st2.push("vierzehn");
  st2.top();
  st2.push("einundzwanzig");
  st2.top();
  st2.pop();
  st2.top();



  
  std::vector<int> v{5,5,5};      // v = {5,5,5}
  // print(v);

  v.insert(v.begin()+1, 9);       // v = {5,9,5,5}
  //print(v);

  v.insert(v.begin()+2, 2, 8);    // v = {5,9,8,8,5,5}
  //print(v);

  v.erase(v.end()-3);             // v = {5,9,8,5,5}
  //print(v);

  v.erase(v.begin()+1, v.end());  // v = {5}
  //print(v);

  std::cout << "this is test  end  \n" << std::endl;


  //return Catch::Session().run(argc, argv);

  return 0;
}
