#ifndef LIBCSORTTABLICA_H
#define LIBCSORTTABLICA_H

#include <random>
#include <iostream>

class CSortTablica
{
private:
	int tab;
	int n;
public :
	int f_SetSize();
	int* f_getTab();

	int f_ReturnSize();

	CSortTablica();

	/* @brief Konstruktor klasy CSortTablica
	 * @param m - rozmiar tablicy
	 */
	CSortTablica(int m);
	/* @brief Destruktor klasy CSortTablica
	 */
	~CSortTablica();
	/* @brief Funkcja FillRandom() wype�nia tablic� losowymi warto�ciami z zakresu <min, max>
	 * @param min - minimalna warto��
	 * @param max - maksymalna warto��
	 */
	void FillRandom(int min, int max);
	void FillPartiallySorted(int m);
	/* @brief Funkcja FillAlone() wype�nia tablic� warto�ciami wprowadzonymi przez u�ytkownika
	 */
	void FillAlone();
	/* @brief Funkcja Print() wypisuje tablic�
	 */
	void Print();
};

#endif // !LIBCSORTTABLICA_H

