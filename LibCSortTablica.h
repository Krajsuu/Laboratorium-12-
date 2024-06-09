#ifndef LIBCSORTTABLICA_H
#define LIBCSORTTABLICA_H

#include <random>
#include <iostream>

/* @brief Klasa CSortTablica zawiera tablic� liczb ca�kowitych oraz metody do wype�niania tablicy losowymi warto�ciami, wypisywania tablicy oraz zwracania rozmiaru tablicy
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
	/* @brief Funkcja f_getTab() zwraca wska�nik na tablic�
	* @return wska�nik na tablic�
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
	/* @brief Funkcja FillRandom() wype�nia tablic� losowymi warto�ciami z zakresu <min, max>
	 * @param min - minimalna warto��
	 * @param max - maksymalna warto��
	 */
	void FillRandom(int min, int max);
	/* @brief Funkcja FillSorted() wype�nia tablic� posortowanymi warto�ciami
	 * @param asc - warto�� logiczna okre�laj�ca, czy tablica ma by� posortowana rosn�co (1) czy malej�co (0)
	 */
	void FillSorted(bool asc = 1);
	/* @brief Funkcja FillPartiallySorted() wype�nia tablic� pokolei wartosciami od 
	*/
	void FillPartiallySorted();
	/* @brief Funkcja FillAlone() wype�nia tablic� warto�ciami wprowadzonymi przez u�ytkownika
	 */
	void FillAlone();
	/* @brief Funkcja Print() wypisuje tablic�
	 */
	void Print();
	/* @brief Funkcja operator= przypisuje tablic� oraz jeje wielkosc z jednego obiektu do drugiego
	 * @param t - obiekt klasy CSortTablica
	 */
	void operator=(CSortTablica& t);
};

#endif // !LIBCSORTTABLICA_H

