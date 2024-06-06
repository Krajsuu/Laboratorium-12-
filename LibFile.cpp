#include "LibFile.h"

bool f_ExtensionCheck(const std::string& nameFile, const std::string& extention)
{
    return nameFile.size() >= extention.size() && nameFile.substr(nameFile.size() - extention.size()) == extention;
}
