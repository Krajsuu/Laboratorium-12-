#include "Menu.h"

void f_displayMenuTable()
{
    system("cls");
    std::cout << "Wybierz opcje z Menu!" << std::endl;
    std::cout << "[1] Tablica uzupelniona losowymi liczbami." << std::endl;
    std::cout << "[2] Tablica uzupelniona liczbami posortowanymi rosnaco." << std::endl;
    std::cout << "[3] Tablica uzupelniona liczbami posortowanymi malejaco." << std::endl;
    std::cout << "[4] Tablica czesciowo uporzadkowana (10 % elementow jest na zlej pozycji)." << std::endl;
    std::cout << "[0] Wyjdz z programu" << std::endl;
}

void f_displayMenuSort()
{
    std::cout << "Wybierz opcje z Menu!" << std::endl;
    std::cout << "[1] Sortowanie Bubelkowe." << std::endl;
    std::cout << "[2] Szybkie sortowanie Lomuto." << std::endl;
    std::cout << "[3] Szybkie sortowanie Hoare'a." << std::endl;
    std::cout << "[4] Sortowanie przez kopcowanie." << std::endl;
    std::cout << "[5] Wroc do menu." << std::endl;
    std::cout << "[0] Wyjdz z programu" << std::endl;
}

void f_MenuTable(std::ostream& resultFile)
{
    CSortTablica S;
    S.f_SetSize();
    int min, max;
    std::string type;
    int choice = -1;
    f_displayMenuTable();
    std::cin >> choice;
    switch (choice)
    {
    case 1:
    {
        std::cout << "Wybrales opcje : Tablica uzupelniona losowymi liczbami." << std::endl;
        type = "Tablica uzupelniona losowymi liczbami";
        std::cin >> min;
        std::cin >> max;
        S.FillRandom(min, max);
        f_MenuSort(S,type,resultFile);
        break;
    }
    case 2:
    {
        std::cout << "Wybrales opcje : Tablica uzupelniona liczbami posortowanymi rosnaco." << std::endl;
        type = "Tablica uzupelniona liczbami posortowanymi rosnaco";
        S.FillAlone();
        f_MenuSort(S,type,resultFile);
        break;
    }
    case 3:
    {
        std::cout << "Wybrales opcje : Tablica uzupelniona liczbami posortowanymi malejaco." << std::endl;
        type = "Tablica uzupelniona liczbami posortowanymi malejaco";
        S.FillAlone();
        f_MenuSort(S,type,resultFile);
        break;
    }
    case 4:
    {
        std::cout << "Wybrales opcje : Tablica czesciowo uporzadkowana (10 % elementow jest na zlej pozycji)." << std::endl;
        type = "Tablica czesciowo uporzadkowana (10 % elementow jest na zlej pozycji)";
        S.FillPartiallySorted();
        f_MenuSort(S,type,resultFile);
        break;
    }
    case 0:
    {
        std::cout << "Wybrales opcje : Wyjdz z programu" << std::endl;
        exit(0);
    }
    default:
        std::cout << "Podany numer nie ma odzwierciedlenia w menu. Prosze wybierz numer w przedziale 1-5." << std::endl;
        break;
    }
};

void f_MenuSort(CSortTablica S,std::string type, std::ostream& resultFile)
{
    CSortTablica S2;
    int choice = -1;
    system("cls");
    S2 = S;
    do{
        CTablica T(S);
        f_displayMenuSort();
        std::cin >> choice;
        switch (choice)
        {
        case 1:
        {
            system("cls");
            std::cout << "Wybrales opcje : Sortowanie Bubelkowe." << std::endl;
            S.Print();
            T.f_ShakerSort();
            S.Print();
            resultFile << "Sortowanie Bubelkowe" <<"\t" << S.f_ReturnSize() << "\t" << type << "\t" << T.f_ReturnCompareCounter() << "\t" << T.f_ReturnSwapCounter();
            break;
        }
        case 2:
        {
            system("cls");
            std::cout << "Wybrales opcje : Szybkie sortowanie Lomuto." << std::endl;
            S.Print();
            T.f_QuickSortLomuto(0, S.f_ReturnSize() - 1);
            S.Print();
            break;
        }
        case 3:
        {
            system("cls");
            std::cout << "Wybrales opcje : Szybkie sortowanie Hoare'a." << std::endl;
            S.Print();
            T.f_QuickSortHoare(0, S.f_ReturnSize() - 1);
            S.Print();
            break;
        }
        case 4:
        {
            system("cls");
            std::cout << "Wybrales opcje : Sortowanie przez kopcowanie." << std::endl;
            S.Print();
            T.f_HeapSort();
            S.Print();
            break;
        }
        case 5:
        {
            system("cls");
            std::cout << "Wybrales opcje :  Wroc do menu." << std::endl;
            f_MenuTable(resultFile);
            break;
        }
        case 0:
        {
            system("cls");
            std::cout << "Wybrales opcje : Wyjdz z programu" << std::endl;
            exit(0);
        }
        default:
            system("cls");
            std::cout << "Podany numer nie ma odzwierciedlenia w menu. Prosze wybierz numer w przedziale 1-5." << std::endl;
            break;
        }
        S = S2;
    } while (choice != 0);
};
