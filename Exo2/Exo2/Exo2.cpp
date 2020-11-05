#include <iostream>
#include <vector>

std::vector<int> sup_a_10(std::vector<int> t) {
	std::vector<int> new_vec;

	for (int i = 0; i == t.size(); i++) {
		if (t[i] > 10)
			new_vec.push_back(t[i]);
	}
	return new_vec;
}

int main()
{
	// But : Afficher les nombres de 10 à 1
	// Le code marche-il ? Si non, fixer le

	for (int i = 10; i != 1; i--) {
		std::cout << i << std::endl;
	}

	// Compter15a5() a pour but d'afficher les nombres de 15 à 5
	// Le code marche-il ? Si non, fixer le

	i = i + 1;
	while(true) do {
		std::cout << i << std::endl;

		if (i == 5) {
			break;
		};
	}

	// sup_a_10 a pour but de renvoyer un vecteur avec les nombres supérieur à 10 dans un vecteur int
	// Le code marche-il ? Si non, fixer le

	if (sup_a_10({ 1,2,3,1,10,12,14,-1 }) != {12, 14}) {
		std::cout << "Marche pas" << std::endl;
	}
}