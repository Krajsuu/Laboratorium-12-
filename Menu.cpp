#include "Menu.h"

void f_displayMenuTable()
{
	system("cls");
	std::cout << "Wybierz opcje z Menu!" << std::endl;
	std::cout << "[1] Tablica uzupe�niona losowymi liczbami." << std::endl;
	std::cout << "[2] Tablica uzupe�niona liczbami posortowanymi rosn�co." << std::endl;
	std::cout << "[3] Tablica uzupe�niona liczbami posortowanymi malej�co." << std::endl;
	std::cout << "[4] Tablica cz�ciowo uporz�dkowana (10 % element�w jest na z�ej pozycji)." << std::endl;
	std::cout << "[5] Wroc do menu." << std::endl << std::endl << std::endl << std::endl << std::endl;
	std::cout << "[0] Wyjdz" << std::endl;
}

void f_displayMenuSort()
{
	system("cls");
	std::cout << "Wybierz opcje z Menu!" << std::endl;
	std::cout << "[1] Sortowanie B�belkowe." << std::endl;
	std::cout << "[2] Szybkie sortowanie Lomuto." << std::endl;
	std::cout << "[3] Szybkie sortowanie Hoare'a." << std::endl;
	std::cout << "[4] Sortowanie przez kopcowanie." << std::endl ;
	std::cout << "[5] Wr�� do menu." << std::endl << std::endl << std::endl << std::endl << std::endl;
	std::cout << "[0] Wyjdz z programu" << std::endl;
}


