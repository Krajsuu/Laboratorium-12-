#ifndef LIBCTABLICA_H
#define LIBCTABLICA_H

#include "LibCSortTablica.h"

class CTablica : public CSortTablica
{
private:
	int compareCounter;
	int swapCounter;
	
	int f_podzielLomuto(CSortTablica& tab, int lewy, int prawy);
	/* @brief Funkcja Heapify() przywraca w³asnoœæ kopca dla wêz³a i
	 * @param tab - tablica
	 * @param n - rozmiar kopca
	 * @param i - indeks wêz³a
	 */
	void f_Heapify(CSortTablica &tab, int i);
	/* @brief Funkcja Swap() zamienia miejscami wartoœci wskazywane przez wskaŸniki a i b
	 * @param a - wskaŸnik na pierwsz¹ wartoœæ
	 * @param b - wskaŸnik na drug¹ wartoœæ
	 */
	void f_Swap(int* a, int* b);
	/* @brief Funkcja BuildHeap() buduje kopiec
	 * @param tab - tablica
	 * @param n - rozmiar kopca
	 */
	void f_BuildHeap(CSortTablica &tab);
	/* @brief Funkcja Partition() dokonuje podzia³u tablicy na dwie czêœci
	 * @param tab - tablica
	 * @param left - indeks lewego krañca
	 * @param right - indeks prawego krañca
	 * @return Indeks elementu, który jest na swoim miejscu
	*/
	int f_PartitionHoare(CSortTablica &tab, int left, int right);
public:
	/* @brief Funkcja ResetCounters() zeruje liczniki porównañ i zamian
	 */
	void f_ResetCounters();
	/* @brief Funkcja ReturnCompareCounter() zwraca wartoœæ licznika porównañ
	 * @return Liczba porównañ
	 */
	int f_ReturnCompareCounter();
	/* @brief Funkcja ReturnSwapCounter() zwraca wartoœæ licznika zamian
	 * @return Liczba zamian
	 */
	int f_ReturnSwapCounter();
	/* @brief Konstruktor klasy CTablica
	 */
	CTablica();
	/* @brief Funkcja HeapSort() sortuje tablicê algorytmem sortowania przez kopcowanie
	 * @param tab - tablica
	 * @param n - rozmiar tablicy
	 */

	void f_ShaherSort(CSortTablica &tab);

	void f_QuickSortLomuto(CSortTablica& tab,int lewy, int prawy);

	void f_HeapSort(CSortTablica &tab);
	/* @brief Funkcja QuickSortHoare sortuje tablicê algorytmem sortowania szybkiego
	 * @param tab - tablica
	 * @param left - indeks lewego krañca
	 * @param right - indeks prawego krañca
	*/
	void f_QuickSortHoare(CSortTablica &tab, int left, int right);

};

#endif // !LIBCTABLICA_H


