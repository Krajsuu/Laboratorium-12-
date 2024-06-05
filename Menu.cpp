#include "Menu.h"

void f_displayMenuTable()
{
	system("cls");
	std::cout << "Wybierz opcje z Menu!" << std::endl;
	std::cout << "[1] Tablica uzupe³niona losowymi liczbami." << std::endl;
	std::cout << "[2] Tablica uzupe³niona liczbami posortowanymi rosn¹co." << std::endl;
	std::cout << "[3] Tablica uzupe³niona liczbami posortowanymi malej¹co." << std::endl;
	std::cout << "[4] Tablica czêœciowo uporz¹dkowana (10 % elementów jest na z³ej pozycji)." << std::endl;
	std::cout << "[5] Wroc do menu." << std::endl << std::endl << std::endl << std::endl << std::endl;
	std::cout << "[0] Wyjdz" << std::endl;
}

void f_displayMenuSort()
{
	system("cls");
	std::cout << "Wybierz opcje z Menu!" << std::endl;
	std::cout << "[1] Sortowanie B¹belkowe." << std::endl;
	std::cout << "[2] Szybkie sortowanie Lomuto." << std::endl;
	std::cout << "[3] Szybkie sortowanie Hoare'a." << std::endl;
	std::cout << "[4] Sortowanie przez kopcowanie." << std::endl ;
	std::cout << "[5] Wróæ do menu." << std::endl << std::endl << std::endl << std::endl << std::endl;
	std::cout << "[0] Wyjdz z programu" << std::endl;
}


