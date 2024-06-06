// Labki.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <string>
#include "LibCSortTablica.h"
#include "LibCTablica.h"
#include "Menu.h"
#include "LibFile.h"
#include "LibExceptions.h"

int main()
{
	std::cout << "Nazwa pliku wyjsciowego: ";
	std::string fileResult;
	std::cin >> fileResult;
	if (!f_ExtensionCheck(fileResult, ".txt"))
		throw MyExceptions("Nie udalo sie odczytac rozszerzenia pliku");
	std::ofstream resultFile(fileResult);
	if (!resultFile.is_open())
		throw MyExceptions("Nie udalo sie otworzyc pliku");
	resultFile << "Nazwa metody sortowania" << "\t Dlugosc tablicy" << "\t Rodzaj tablicy" << "\Liczba porownan" << "\t Liczba przestawien";
	f_MenuTable(resultFile);
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
