	#include<iostream>

	int main() {
		
		int lauf = 20;
		bool teilbar = false;
		
		while (!teilbar) {				
			
			int modsumme = 0;
			for (int j = 1; j <= 20; j++ ) {
				modsumme = modsumme + (lauf % j);
			}
			if (modsumme == 0) {
				teilbar = true;
			};
			modsumme = 0;
			lauf++;
		}
			lauf = lauf-1;
			std::cout << "Die kleinste gemeinsame Zahl ist:" << lauf << "\n";
		return 0;
	}


