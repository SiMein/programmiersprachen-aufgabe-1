#ifndef STACK_HPP
#define STACK_HPP

template <typename T>  
class Stack{
  
    public:
 /*   
   	  Stack() :
		str_vec{}{}
*/ 
  	  
	  void push(T const& indata){
		str_vec.push_back(indata);
 	    std::cout << "\npush-methode\n";
 	  }

	  void pop(){
		str_vec.pop_back();
   	    std::cout << "\npop-methode\n";		
  	  }

 	  void top()const{
		std::cout << str_vec.at(str_vec.size()-1) << std::endl;
 	    std::cout << "\ntop-methode\n";
 	  }
/*    
  	
  	std::cout << str_vec.size()<< std::endl;
  
    std::string eins = "one";
 	str_vec.push_back("two");
 	std::cout << str_vec.size() << std::endl;
  	std::cout << str_vec.capacity() << std::endl;
  	//
  	std::cout << str_vec.size() << std::endl;
  	
  
  	std::string word = *str_vec.data();
  	std::cout << word << std::endl;
 */   
    private:
   
	std::vector<T> str_vec;
    
};

#endif 