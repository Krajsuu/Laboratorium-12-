#ifndef MENU_H
#define MENU_H

#include "LibCSortTablica.h"
#include "LibCTablica.h"
#include <iostream>
#include <string>
#include <iomanip>

void f_displayMenuTable();

void f_displayMenuSort();

void f_MenuTable(std::ostream& resultFile, CSortTablica& S);

void f_MenuSort(CSortTablica S, std::string type, std::ostream& resultFile);


#endif // !MENU_H
