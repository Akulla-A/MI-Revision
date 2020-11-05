#include <iostream>

bool IsPositif(int num) {
	return(num >= 0);
}

bool IsMod(int num) {
	return((num % 3) == 0);
}

int main()
{
    // Faire une fonction IsPositif 
	// prenant un nombre en entrée et renvoie si le chiffre est négatif ou positif

	if (IsPositif(2) && !IsPositif(-1) && IsPositif(0)) {
		std::cout << "Reussi" << std::endl;
		std::cout << "============" << std::endl;
	};

	// Faire une fonction IsMod
	// Paramètres : Int
	// Retour : Bool
	// Utilité : Permet de savoir si un nombre est un multiple de trois

	if (IsMod(3) && !IsMod(2) && !IsMod(10) && IsMod(9)) {
		std::cout << "Reussi" << std::endl;
		std::cout << "============" << std::endl;
	};
}