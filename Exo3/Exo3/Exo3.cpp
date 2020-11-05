#include <iostream>
#include <vector>

int main()
{
	// Faire une fonction Gen_12
	// Paramètres : int num_cases
	// Sortir : Vector<int> composé de num_cases cases, chaque case contient le nombre 12;

	std::vector<int> test_vec = { 12, 12, 12, 12, 12 };
	
	if (Gen_12(5) != test_vec) {
		std::cout << "1) Faux" << std::endl;
	};

	// Faire une fonction Gen_Matrice
	// Paramètres : int num, int carre
	// Sortir : Vector<int> composé de num_cases Vector<int>, chaque sous-vecteur est composé de num_cases cases contenant num;

	std::vector<std::vector<int>> test2 = { {4, 4, 4}, { 4, 4, 4 }, { 4, 4, 4 } };
	std::vector<std::vector<int>> test1 = Gen_Matrice(4, 3);

	if (test1 != test2) {
		std::cout << "1) Faux" << std::endl;
	};
}