#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "LibCSortTablica.h"
#include "LibCTablica.h"
#include "Menu.h"
#include "LibFile.h"
#include "LibExceptions.h"

int main()
{
	try {
		std::cout << "Nazwa pliku wyjsciowego: ";
		std::string fileResult;
		std::cin >> fileResult;
		if (!f_ExtensionCheck(fileResult, ".txt"))
			throw InvalidFileExtention();
		std::ofstream resultFile(fileResult);
		if (!resultFile.is_open())
			throw FileOpenError();
		resultFile << std::setw(30) << std::left << "Nazwa metody sortowania"
			<< std::setw(20) << std::left << "Długość tablicy"
			<< std::setw(75) << std::left << "Rodzaj tablicy"
			<< std::setw(30) << std::left << "Liczba porównań"
			<< std::setw(30) << std::left << "Liczba przestawień"
			<< std::endl;

		f_MenuTable(resultFile);
	}
	catch(MyExceptions& e)
	{
		std::cerr << e.what();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what();
	}
	catch (...)
	{
		std::cout << "Niezidentyfikowany wyjatek";
	}
}
