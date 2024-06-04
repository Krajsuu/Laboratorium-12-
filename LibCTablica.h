#ifndef LIBCTABLICA_H
#define LIBCTABLICA_H

class CTablica
{
private:
	static int compareCounter;
	static int swapCounter;
	/* @brief Funkcja Heapify() przywraca w�asno�� kopca dla w�z�a i
	 * @param tab - tablica
	 * @param n - rozmiar kopca
	 * @param i - indeks w�z�a
	 */
	void Heapify(int* tab, int n, int i);
	/* @brief Funkcja Swap() zamienia miejscami warto�ci wskazywane przez wska�niki a i b
	 * @param a - wska�nik na pierwsz� warto��
	 * @param b - wska�nik na drug� warto��
	 */
	void Swap(int* a, int* b);
	/* @brief Funkcja BuildHeap() buduje kopiec
	 * @param tab - tablica
	 * @param n - rozmiar kopca
	 */
	void BuildHeap(int* tab, int n);
	/* @brief Funkcja Partition() dokonuje podzia�u tablicy na dwie cz�ci
	 * @param tab - tablica
	 * @param left - indeks lewego kra�ca
	 * @param right - indeks prawego kra�ca
	 * @return Indeks elementu, kt�ry jest na swoim miejscu
	*/
	int Partition(int* tab, int left, int right);
public:
	/* @brief Funkcja ResetCounters() zeruje liczniki por�wna� i zamian
	 */
	void static ResetCounters();
	/* @brief Funkcja ReturnCompareCounter() zwraca warto�� licznika por�wna�
	 * @return Liczba por�wna�
	 */
	int static ReturnCompareCounter();
	/* @brief Funkcja ReturnSwapCounter() zwraca warto�� licznika zamian
	 * @return Liczba zamian
	 */
	int static ReturnSwapCounter();
	/* @brief Konstruktor klasy CTablica
	 */
	CTablica();
	/* @brief Funkcja HeapSort() sortuje tablic� algorytmem sortowania przez kopcowanie
	 * @param tab - tablica
	 * @param n - rozmiar tablicy
	 */
	void HeapSort(int* tab, int n);
	/* @brief Funkcja QuickSortHoare sortuje tablic� algorytmem sortowania szybkiego
	 * @param tab - tablica
	 * @param left - indeks lewego kra�ca
	 * @param right - indeks prawego kra�ca
	*/
	void QuickSortHoare(int* tab, int left, int right);
};

#endif // !LIBCTABLICA_H


