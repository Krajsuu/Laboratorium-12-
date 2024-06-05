// Labki.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <locale>
#include "LibCSortTablica.h"
#include "LibCTablica.h"
#include "Menu.h"

int main()
{
    int choice = -1;
    while(choice != 0)
	{
		std::cout<<"Wybierz jedno z menu: "<<std::endl;
		std::cout<<"[1] Tworzenie tablicy"<<std::endl;
		std::cout<<"[2] Sortowanie tablicy"<<std::endl;
		std::cout<<"[0] Wyjdz"<<std::endl;
		std::cin>>choice;
		switch (choice)
		{
			case 1:
			f_displayMenuTable();
			std::cin >> choice;
			switch (choice)
			{
			case
			}
			break;
			case 2:
				f_displayMenuSort();

		}
	}
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
