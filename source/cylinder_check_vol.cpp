#include <iostream>
#include <cmath>

float cylinder_check_vol(float h, float r)

{
	float vol;
	vol = M_PI * (r * r) * h;
	return vol;
}

int main()
{
	float r = 5;
    float h = 6;

    std::cout << "Volumen: " << (cylinder_check_vol(h, r));

	return 0;
}