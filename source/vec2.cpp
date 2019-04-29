# ifndef VEC2_HPP
# define VEC2_HPP
// Vec2 data type definition
struct Vec2
{
  float x = 0.0;
  float y = 0.0;
/* TODO add member variables with
default member initialisation */
};
# endif // VEC2_HPP

int main (){
  
  Vec2 a;
   std::cout << a.x << a.y;

  return 0;
}
