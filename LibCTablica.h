#ifndef LIBCTABLICA_H
#define LIBCTABLICA_H

#include "LibCSortTablica.h"

class CTablica : public CSortTablica
{
private:
	int compareCounter;
	int swapCounter;
	
	int* tab = nullptr;
	int n = 0;
	
	int f_PartitionLomuto(int lewy, int prawy);

	/* @brief Funkcja Heapify() przywraca w�asno�� kopca dla w�z�a i
	 * @param tab - tablica
	 * @param n - rozmiar kopca
	 * @param i - indeks w�z�a
	 */
	void f_Heapify(int i);
	/* @brief Funkcja Swap() zamienia miejscami warto�ci wskazywane przez wska�niki a i b
	 * @param a - wska�nik na pierwsz� warto��
	 * @param b - wska�nik na drug� warto��
	 */
	void f_Swap(int* a, int* b);
	/* @brief Funkcja BuildHeap() buduje kopiec
	 * @param tab - tablica
	 * @param n - rozmiar kopca
	 */
	void f_BuildHeap();
	/* @brief Funkcja Partition() dokonuje podzia�u tablicy na dwie cz�ci
	 * @param tab - tablica
	 * @param left - indeks lewego kra�ca
	 * @param right - indeks prawego kra�ca
	 * @return Indeks elementu, kt�ry jest na swoim miejscu
	*/
	int f_PartitionHoare(int left, int right);
public:
	/* @brief Funkcja ResetCounters() zeruje liczniki por�wna� i zamian
	 */
	void f_ResetCounters();
	/* @brief Funkcja ReturnCompareCounter() zwraca warto�� licznika por�wna�
	 * @return Liczba por�wna�
	 */
	int f_ReturnCompareCounter();
	/* @brief Funkcja ReturnSwapCounter() zwraca warto�� licznika zamian
	 * @return Liczba zamian
	 */
	int f_ReturnSwapCounter();
	/* @brief Konstruktor klasy CTablica
	 */
	CTablica(CSortTablica &tab);
	/* @brief Funkcja HeapSort() sortuje tablic� algorytmem sortowania przez kopcowanie
	 * @param tab - tablica
	 * @param n - rozmiar tablicy
	 */

	void f_ShakerSort();

	void f_QuickSortLomuto(int lewy, int prawy);

	void f_HeapSort();
	/* @brief Funkcja QuickSortHoare sortuje tablic� algorytmem sortowania szybkiego
	 * @param tab - tablica
	 * @param left - indeks lewego kra�ca
	 * @param right - indeks prawego kra�ca
	*/
	void f_QuickSortHoare(int left, int right);

};

#endif // !LIBCTABLICA_H


