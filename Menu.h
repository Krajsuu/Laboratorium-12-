#ifndef MENU_H
#define MENU_H

#include "LibCSortTablica.h"
#include "LibCTablica.h"
#include <iostream>
#include <string>

void f_displayMenuTable();

void f_displayMenuSort();

void f_MenuTable(std::ostream& resultFile);

void f_MenuSort(CSortTablica S, std::string type , std::ostream& resultFile);


#endif // !MENU_H
