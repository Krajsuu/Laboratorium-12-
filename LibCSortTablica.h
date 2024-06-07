#ifndef LIBCSORTTABLICA_H
#define LIBCSORTTABLICA_H

#include <random>
#include <iostream>

class CSortTablica
{
private:
	int* tab;
	int n;
	void f_shuffe();
public:
	void f_SetSize();
	int* f_getTab();

	int f_ReturnSize();

	CSortTablica();
	~CSortTablica();
	/* @brief Konstruktor klasy CSortTablica
	 * @param m - rozmiar tablicy
	 */
	CSortTablica(int m);
	/* @brief Funkcja FillRandom() wype�nia tablic� losowymi warto�ciami z zakresu <min, max>
	 * @param min - minimalna warto��
	 * @param max - maksymalna warto��
	 */
	void FillRandom(int min, int max);

	void FillSorted(bool asc = 1);

	void FillPartiallySorted();
	/* @brief Funkcja FillAlone() wype�nia tablic� warto�ciami wprowadzonymi przez u�ytkownika
	 */
	void FillAlone();
	/* @brief Funkcja Print() wypisuje tablic�
	 */
	void Print();

	void operator=(CSortTablica& t);
};

#endif // !LIBCSORTTABLICA_H

