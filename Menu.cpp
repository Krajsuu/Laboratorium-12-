#include "Menu.h"
#include "LibCSortTablica.h"
#include "LibCTablica.h"

void f_displayMenuTable()
{
	system("cls");
	std::cout << "Wybierz opcje z Menu!" << std::endl;
	std::cout << "[1] Tablica uzupe�niona losowymi liczbami." << std::endl;
	std::cout << "[2] Tablica uzupe�niona liczbami posortowanymi rosn�co." << std::endl;
	std::cout << "[3] Tablica uzupe�niona liczbami posortowanymi malej�co." << std::endl;
	std::cout << "[4] Tablica cz�ciowo uporz�dkowana (10 % element�w jest na z�ej pozycji)." << std::endl;
	std::cout << "[0] Wyjdz z programu" << std::endl;
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

void f_MenuTable(int choice)
{
	CSortTablica S;
	int min, max;
	switch (choice)
	{
	case 1:
	{
		std::cout << "Wybra�e� opcj� : Tablica uzupe�niona losowymi liczbami." << std::endl;
		std::cin >> min;
		std::cin >> max;
		S.FillRandom(min, max);
		f_displayMenuSort();
		int choice = -1;
		std::cin >> choice;
		f_MenuSort(choice);
		break;
	}
	case 2:
	{
		std::cout << "Wybra�e� opcj� : Tablica uzupe�niona liczbami posortowanymi rosn�co." << std::endl;
		S.FillAlone();
		f_displayMenuSort();
		int choice = -1;
		std::cin >> choice;
		f_MenuSort(choice);
		break;
	}
	case 3:
	{
		std::cout << "Wybra�e� opcj� : Tablica uzupe�niona liczbami posortowanymi malej�co." << std::endl;
		S.FillAlone();
		f_displayMenuSort();
		int choice = -1;
		std::cin >> choice;
		f_MenuSort(choice);
		break;
	}
	case 4:
	{
		std::cout << "Wybra�e� opcj� : Tablica cz�ciowo uporz�dkowana (10 % element�w jest na z�ej pozycji)." << std::endl;

		f_displayMenuSort();
		int choice = -1;
		std::cin >> choice;
		f_MenuSort(choice);
		break;
	}
	case 0:
	{
		std::cout << "Wybra�e� opcj� : Wyjdz z programu" << std::endl;
		exit(0);
	}
	default:
		std::cout << "Podany numer nie ma odzwierciedlenia w menu. Prosz� wybierz numer w przedziale 1-5." << std::endl;
		break;
	}
};

void f_MenuSort(int choice)
{
	CSortTablica S;
	CTablica T;
	switch (choice)
	{
	case 1:
	{
		std::cout << "Wybra�e� opcj� : Sortowanie B�belkowe." << std::endl;
		T.f_ShakerSort();
		S.Print();
		break;
	}
	case 2:
	{
		std::cout << "Wybra�e� opcj� : Szybkie sortowanie Lomuto." << std::endl;
		T.f_QuickSortLomuto(0, S.f_ReturnSize()-1);
		S.Print();
		break;
	}
	case 3:
	{
		std::cout << "Wybra�e� opcj� : Szybkie sortowanie Hoare'a." << std::endl;
		T.f_QuickSortHoare(0, S.f_ReturnSize() - 1);
		S.Print();
		break;
	}
	case 4:
	{
		std::cout << "Wybra�e� opcj� : Sortowanie przez kopcowanie." << std::endl;
		T.f_HeapSort();
		S.Print();
		break;
	}
	case 5:
	{
		std::cout << "Wybra�e� opcj� :  Wr�� do menu." << std::endl;
		break;
	}
	case 0:
	{
		std::cout << "Wybra�e� opcj� : Wyjdz z programu" << std::endl;
		exit(0);
	}
	default:
		std::cout << "Podany numer nie ma odzwierciedlenia w menu. Prosz� wybierz numer w przedziale 1-5." << std::endl;
		break;
	}
};


