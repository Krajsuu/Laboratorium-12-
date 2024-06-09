#pragma once
#ifndef LIBFILE_H
#define LIBFILE_H
#include <string>
#include <iostream>
#include <fstream>
/* f_ExtensionCheck() - funkcja sprawdzaj¹ca, czy plik ma odpowiednie rozszerzenie
* @param nameFile - nazwa pliku
* @param extension - rozszerzenie pliku
* @return true - jeœli plik ma odpowiednie rozszerzenie, false - w przeciwnym wypadku
*/
bool f_ExtensionCheck(const std::string& nameFile, const std::string& extension);

#endif // !LIBFILE_H
