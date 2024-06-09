#ifndef LIBCSORTTABLICA_H
#define LIBCSORTTABLICA_H

#include <random>
#include <iostream>

/* @brief Klasa CSortTablica zawiera tablicê liczb ca³kowitych oraz metody do wype³niania tablicy losowymi wartoœciami, wypisywania tablicy oraz zwracania rozmiaru tablicy
 */
class CSortTablica
{
private:
	// Inicjalizacja tablicy dynamicznej oraz rozmiaru tablicy
	int* tab;
	int n;
public:
	/* @brief Funkcja f_SetSize() ustawia rozmiar tablicy
	 */
	void f_SetSize();
	/* @brief Funkcja f_getTab() zwraca wskaŸnik na tablicê
	* @return wskaŸnik na tablicê
	 */
	int* f_getTab();


	/* @brief Funkcja f_ReturnSize() zwraca rozmiar tablicy
	* @return rozmiar tablicy
	 */
	int f_ReturnSize();

	/* @brief Konstruktor klasy CSortTablica
	 */
	CSortTablica();
	~CSortTablica();
	/* @brief Konstruktor klasy CSortTablica
	 * @param m - rozmiar tablicy
	 */
	CSortTablica(int m);
	/* @brief Funkcja FillRandom() wype³nia tablicê losowymi wartoœciami z zakresu <min, max>
	 * @param min - minimalna wartoœæ
	 * @param max - maksymalna wartoœæ
	 */
	void FillRandom(int min, int max);
	/* @brief Funkcja FillSorted() wype³nia tablicê posortowanymi wartoœciami
	 * @param asc - wartoœæ logiczna okreœlaj¹ca, czy tablica ma byæ posortowana rosn¹co (1) czy malej¹co (0)
	 */
	void FillSorted(bool asc = 1);
	/* @brief Funkcja FillPartiallySorted() wype³nia tablicê pokolei wartosciami od 
	*/
	void FillPartiallySorted();
	/* @brief Funkcja FillAlone() wype³nia tablicê wartoœciami wprowadzonymi przez u¿ytkownika
	 */
	void FillAlone();
	/* @brief Funkcja Print() wypisuje tablicê
	 */
	void Print();
	/* @brief Funkcja operator= przypisuje tablicê oraz jeje wielkosc z jednego obiektu do drugiego
	 * @param t - obiekt klasy CSortTablica
	 */
	void operator=(CSortTablica& t);
};

#endif // !LIBCSORTTABLICA_H

