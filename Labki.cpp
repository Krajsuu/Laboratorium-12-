// Labki.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

class cTablica
{
private:
    std::vector<int> tablica = { 1, 4, 6, 1, 5, 3, 6, 8 };
    void f_sortowanieBabelkowe();
    void f_zamien(int& a, int& b);
    void f_sortowanieSzybkieLomuto(int lewy, int prawy);
    int f_podzielLomuto(int lewy, int prawy);
public:
    cTablica() {}
    void f_wyswietlTablice();
    void f_sortujKoktajlowo() {
        f_sortowanieBabelkowe();
    }
    void f_sortujSzybkoLomuto() {
        f_sortowanieSzybkieLomuto(0, tablica.size() - 1);
    }
};

class cSortTablica {
public:
    int f_podajLiczbeElementow();
};

int main()
{
    cTablica tablica;

    tablica.f_wyswietlTablice();
    tablica.f_sortujSzybkoLomuto();
    tablica.f_wyswietlTablice();

    tablica.f_sortujKoktajlowo();
    tablica.f_wyswietlTablice();

    return 0;
}

void cTablica::f_wyswietlTablice()
{
    std::cout << "Tablica:" << std::endl;
    for (int i = 0; i < tablica.size(); ++i)
    {
        std::cout << tablica[i] << " ";
    }
    std::cout << std::endl;
}

void cTablica::f_sortowanieBabelkowe()
{
    bool zamiana = true;
    int n = tablica.size();
    int lewy = 0;
    int prawy = n - 1;

    while (zamiana)
    {
        zamiana = false;

        for (int i = lewy; i < prawy; ++i)
        {
            if (tablica[i] > tablica[i + 1])
            {
                f_zamien(tablica[i], tablica[i + 1]);
                zamiana = true;
            }
        }
        prawy--;

        for (int i = prawy; i > lewy; --i)
        {
            if (tablica[i] < tablica[i - 1])
            {
                f_zamien(tablica[i], tablica[i - 1]);
                zamiana = true;
            }
        }
        lewy++;
    }
}

void cTablica::f_sortowanieSzybkieLomuto(int lewy, int prawy)
{
    if (lewy < prawy)
    {
        int podzial = f_podzielLomuto(lewy, prawy);
        f_sortowanieSzybkieLomuto(lewy, podzial - 1);
        f_sortowanieSzybkieLomuto(podzial + 1, prawy);
    }
}

int cTablica::f_podzielLomuto(int lewy, int prawy)
{
    int pivot = tablica[prawy];
    int i = lewy - 1;
    for (int j = lewy; j < prawy; ++j)
    {
        if (tablica[j] <= pivot)
        {
            i++;
            f_zamien(tablica[i], tablica[j]);
        }
    }
    f_zamien(tablica[i + 1], tablica[prawy]);
    return i + 1;
}

void cTablica::f_zamien(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int cSortTablica::f_podajLiczbeElementow()
{
    int liczba;
    std::cout << "Podaj liczbe elementow tablicy: ";
    std::cin >> liczba;
    return liczba;
}
