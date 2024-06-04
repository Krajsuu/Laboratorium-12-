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
	/* @brief Funkcja FillRandom() wype³nia tablicê losowymi wartoœciami z zakresu <min, max>
	 * @param min - minimalna wartoœæ
	 * @param max - maksymalna wartoœæ
	 */
	void FillRandom(int min, int max);
	void FillPartiallySorted(int m);
	/* @brief Funkcja FillAlone() wype³nia tablicê wartoœciami wprowadzonymi przez u¿ytkownika
	 */
	void FillAlone();
	/* @brief Funkcja Print() wypisuje tablicê
	 */
	void Print();
};

#endif // !LIBCSORTTABLICA_H

