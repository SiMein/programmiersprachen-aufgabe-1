#include <iostream>
#include <cmath>

float cylinder_check_flaeche(float h, float r)

{
	float oberfl;
	oberfl = 2 * M_PI * r * (r + h);
	return oberfl;
}

int main()
{
	float r = 5;
    float h = 6;

    std::cout << "Oberfläche: " << (cylinder_check_flaeche(h, r));

	return 0;
}