#ifndef LIBCTABLICA_H
#define LIBCTABLICA_H

class CTablica
{
private:
	static int compareCounter;
	static int swapCounter;
	/* @brief Funkcja Heapify() przywraca w³asnoœæ kopca dla wêz³a i
	 * @param tab - tablica
	 * @param n - rozmiar kopca
	 * @param i - indeks wêz³a
	 */
	void Heapify(int* tab, int n, int i);
	/* @brief Funkcja Swap() zamienia miejscami wartoœci wskazywane przez wskaŸniki a i b
	 * @param a - wskaŸnik na pierwsz¹ wartoœæ
	 * @param b - wskaŸnik na drug¹ wartoœæ
	 */
	void Swap(int* a, int* b);
	/* @brief Funkcja BuildHeap() buduje kopiec
	 * @param tab - tablica
	 * @param n - rozmiar kopca
	 */
	void BuildHeap(int* tab, int n);
	/* @brief Funkcja Partition() dokonuje podzia³u tablicy na dwie czêœci
	 * @param tab - tablica
	 * @param left - indeks lewego krañca
	 * @param right - indeks prawego krañca
	 * @return Indeks elementu, który jest na swoim miejscu
	*/
	int Partition(int* tab, int left, int right);
public:
	/* @brief Funkcja ResetCounters() zeruje liczniki porównañ i zamian
	 */
	void static ResetCounters();
	/* @brief Funkcja ReturnCompareCounter() zwraca wartoœæ licznika porównañ
	 * @return Liczba porównañ
	 */
	int static ReturnCompareCounter();
	/* @brief Funkcja ReturnSwapCounter() zwraca wartoœæ licznika zamian
	 * @return Liczba zamian
	 */
	int static ReturnSwapCounter();
	/* @brief Konstruktor klasy CTablica
	 */
	CTablica();
	/* @brief Funkcja HeapSort() sortuje tablicê algorytmem sortowania przez kopcowanie
	 * @param tab - tablica
	 * @param n - rozmiar tablicy
	 */
	void HeapSort(int* tab, int n);
	/* @brief Funkcja QuickSortHoare sortuje tablicê algorytmem sortowania szybkiego
	 * @param tab - tablica
	 * @param left - indeks lewego krañca
	 * @param right - indeks prawego krañca
	*/
	void QuickSortHoare(int* tab, int left, int right);
};

#endif // !LIBCTABLICA_H


