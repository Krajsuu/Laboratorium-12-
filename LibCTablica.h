#ifndef LIBCTABLICA_H
#define LIBCTABLICA_H

#include "LibCSortTablica.h"

/* @brief CTablica - klasa zawieraj¹ca algorytmy sortowania
 */
class CTablica
{
private:
	// Liczniki porównañ i zamian
	int compareCounter;
	int swapCounter;

	// Inicjalizacja tablicy dynamicznej i jej rozmiaru
	int* tab = nullptr;
	int n = 0;

	/* @brief Funkcja PartitionLomuto() dokonuje podzia³u tablicy na dwie czêœci
	 * @param tab - tablica
	 * @param left - indeks lewego krañca
	 * @param right - indeks prawego krañca
	 * @return Indeks elementu, który jest na swoim miejscu
	 */
	int f_PartitionLomuto(int left, int right);

	/* @brief Funkcja Heapify() przywraca w³asnoœæ kopca dla wêz³a i
	 * @param tab - tablica
	 * @param n - rozmiar kopca
	 * @param i - indeks wêz³a
	 */
	void f_Heapify(int i);
	/* @brief Funkcja Swap() zamienia miejscami wartoœci wskazywane przez wskaŸniki a i b
	 * @param a - wskaŸnik na pierwsz¹ wartoœæ
	 * @param b - wskaŸnik na drug¹ wartoœæ
	 */
	void f_Swap(int* a, int* b);
	/* @brief Funkcja BuildHeap() buduje kopiec
	 * @param tab - tablica
	 * @param n - rozmiar kopca
	 */
	void f_BuildHeap();
	/* @brief Funkcja Partition() dokonuje podzia³u tablicy na dwie czêœci
	 * @param tab - tablica
	 * @param left - indeks lewego krañca
	 * @param right - indeks prawego krañca
	 * @return Indeks elementu, który jest na swoim miejscu
	*/
	int f_PartitionHoare(int left, int right);
public:
	CTablica();
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
	CTablica(CSortTablica& tab);
	/* @brief Funkcja HeapSort() sortuje tablicê algorytmem sortowania przez kopcowanie
	 * @param tab - tablica
	 * @param n - rozmiar tablicy
	 */

	/* @brief Funkcja BubbleSort() sortuje tablicê algorytmem sortowania b¹belkowego
	 */
	void f_ShakerSort();

	/* @brief Funkcja InsertionSort() sortuje tablicê algorytmem sortowania przez wstawianie
	* @param left - indeks lewego krañca
	* @param right - indeks prawego krañca
	 */
	void f_QuickSortLomuto(int left, int right);

	/* @brief funkcja HeapSort() sortuje tablicê algorytmem sortowania przez kopcowanie
	*/
	void f_HeapSort();
	/* @brief Funkcja QuickSortHoare sortuje tablicê algorytmem sortowania szybkiego
	 * @param tab - tablica
	 * @param left - indeks lewego krañca
	 * @param right - indeks prawego krañca
	*/
	void f_QuickSortHoare(int left, int right);
};

#endif // !LIBCTABLICA_H


