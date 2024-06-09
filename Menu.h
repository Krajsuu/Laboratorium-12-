#ifndef MENU_H
#define MENU_H

#include "LibCSortTablica.h"
#include "LibCTablica.h"
#include <iostream>
#include <string>
#include <iomanip>
/*@brief Funkcja f_displayMenuTable() wypisuje menu wyboru rodzaju wypelnienia tablicy
*/
void f_displayMenuTable();
/*@brief Funckja f_displayMenuSort() wypisuje menu wyboru metody sortowania
*/
void f_displayMenuSort();
/*@brief Funkcja f_MenuTable() odpowiada za wybor rodzaju wypelnienia tablicy
* @param resultFile - plik wyjsciowy
* @param S - obiekt klasy CSortTablica
*/
void f_MenuTable(std::ostream& resultFile, CSortTablica& S);
/*@brief Funkcja f_MenuSort() odpowiada za wybor metody sortowania
* @param S - obiekt klasy CSortTablica
* @param type - rodzaj wypelnienia tablicy 
* @param resultFile - plik wyjsciowy
*/
void f_MenuSort(CSortTablica S, std::string type, std::ostream& resultFile);


#endif // !MENU_H
