#include "Menu.h"

void f_displayMenuTable()
{
    system("cls");
    std::cout << "Wybierz opcje z Menu!" << std::endl;
    std::cout << "[1] Tablica uzupelniona losowymi liczbami." << std::endl;
    std::cout << "[2] Tablica uzupelniona liczbami posortowanymi rosnaco." << std::endl;
    std::cout << "[3] Tablica uzupelniona liczbami posortowanymi malejaco." << std::endl;
    std::cout << "[4] Tablica czesciowo uporzadkowana (10 % elementow jest na zlej pozycji)." << std::endl;
    std::cout << "[5] Zmien ilosc liczb do losowania" << std::endl;
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

void f_MenuTable(std::ostream& resultFile, CSortTablica& S)
{
    int min, max;
    std::string type;
    int choice = -1;
    f_displayMenuTable();
    std::cin >> choice;
    switch (choice)
    {
    case 1:
    {
        system("cls");
        std::cout << "Wybrales opcje : Tablica uzupelniona losowymi liczbami." << std::endl;
        type = "Tablica uzupelniona losowymi liczbami";
        std::cout << "Podaj przedzial liczb do losowania ";
        std::cin >> min >> max;
        S.FillRandom(min, max);
        f_MenuSort(S, type, resultFile);
        break;
    }
    case 2:
    {
        system("cls");
        std::cout << "Wybrales opcje : Tablica uzupelniona liczbami posortowanymi rosnaco." << std::endl;
        type = "Tablica uzupelniona liczbami posortowanymi rosnaco";
        S.FillSorted(1);
        f_MenuSort(S, type, resultFile);
        break;
    }
    case 3:
    {
        system("cls");
        std::cout << "Wybrales opcje : Tablica uzupelniona liczbami posortowanymi malejaco." << std::endl;
        type = "Tablica uzupelniona liczbami posortowanymi malejaco";
        S.FillSorted(0);
        f_MenuSort(S, type, resultFile);
        break;
    }
    case 4:
    {
        system("cls");
        std::cout << "Wybrales opcje : Tablica czesciowo uporzadkowana (10 % elementow jest na zlej pozycji)." << std::endl;
        type = "Tablica czesciowo uporzadkowana (10 % elementow jest na zlej pozycji)";
        S.FillPartiallySorted();
        f_MenuSort(S, type, resultFile);
        break;
    }
    case 5:
    {
        system("cls");
        S.f_SetSize();
        f_MenuTable(resultFile, S);
        break;
    }
    case 0:
    {
        system("cls");
        std::cout << "Wybrales opcje : Wyjdz z programu" << std::endl;
        exit(0);
    }
    default:
    {
        system("cls");
        std::cout << "Podany numer nie ma odzwierciedlenia w menu. Prosze wybierz numer w przedziale 1-5." << std::endl;
        break;
    }
    }
};

void f_MenuSort(CSortTablica S, std::string type, std::ostream& resultFile)
{
    CSortTablica S2;
    int choice = -1;
    system("cls");
    S2 = S;
    do {
        CTablica T(S);
        f_displayMenuSort();
        std::cin >> choice;
        T.f_ResetCounters();
        switch (choice)
        {
        case 1:
        {
            system("cls");
            std::cout << "Wybrales opcje : Sortowanie Bubelkowe." << std::endl;
            S.Print();
            T.f_ShakerSort();
            S.Print();
            resultFile << std::setw(30) << std::left << "Sortowanie B¹belkowe"
                << std::setw(20) << std::left << S.f_ReturnSize()
                << std::setw(75) << std::left << type
                << std::setw(30) << std::left << T.f_ReturnCompareCounter()
                << std::setw(30) << std::left << T.f_ReturnSwapCounter()
                << std::endl;
            break;
        }
        case 2:
        {
            system("cls");
            std::cout << "Wybrales opcje : Szybkie sortowanie Lomuto." << std::endl;
            S.Print();
            T.f_QuickSortLomuto(0, S.f_ReturnSize() - 1);
            S.Print();
            resultFile << std::setw(30) << std::left << "Szybkie sortowanie Lomuto"
                << std::setw(20) << std::left << S.f_ReturnSize()
                << std::setw(75) << std::left << type
                << std::setw(30) << std::left << T.f_ReturnCompareCounter()
                << std::setw(30) << std::left << T.f_ReturnSwapCounter()
                << std::endl;
            break;
        }
        case 3:
        {
            system("cls");
            std::cout << "Wybrales opcje : Szybkie sortowanie Hoare'a." << std::endl;
            S.Print();
            T.f_QuickSortHoare(0, S.f_ReturnSize() - 1);
            S.Print();
            resultFile << std::setw(30) << std::left << "Szybkie sortowanie Hoare'a"
                << std::setw(20) << std::left << S.f_ReturnSize()
                << std::setw(75) << std::left << type
                << std::setw(30) << std::left << T.f_ReturnCompareCounter()
                << std::setw(30) << std::left << T.f_ReturnSwapCounter()
                << std::endl;
            break;
        }
        case 4:
        {
            system("cls");
            std::cout << "Wybrales opcje : Sortowanie przez kopcowanie." << std::endl;
            S.Print();
            T.f_HeapSort();
            S.Print();
            resultFile << std::setw(30) << std::left << "Sortowanie przez kopcowanie."
                << std::setw(20) << std::left << S.f_ReturnSize()
                << std::setw(75) << std::left << type
                << std::setw(30) << std::left << T.f_ReturnCompareCounter()
                << std::setw(30) << std::left << T.f_ReturnSwapCounter()
                << std::endl;
            break;
        }
        case 5:
        {
            system("cls");
            std::cout << "Wybrales opcje :  Wroc do menu." << std::endl;
            f_MenuTable(resultFile, S);
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
