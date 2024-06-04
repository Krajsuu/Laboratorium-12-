#include "LibCTablica.h"

void cTablica::f_ShakerSort(CSortTablica &tab)
{
	bool zamiana = true;
	int n = tab.f_ReturnSize;
	int lewy = 0;
	int prawy = n - 1;

	while (zamiana)
	{
		zamiana = false;

		for (int i = lewy; i < prawy; ++i)
		{
			if (tab[i] > tab[i + 1])
			{
				f_Swap[i], tab[i + 1]);
				zamiana = true;
			}
		}
		prawy--;

		for (int i = prawy; i > lewy; --i)
		{
			if (tab[i] < tab[i - 1])
			{
				f_Swap(tab[i], tab[i - 1]);
				zamiana = true;
			}
		}
		lewy++;
	}
}

void cTablica::f_QuickSortLomuto(CSortTablica& tab,int lewy, int prawy)
{
	if (lewy < prawy)
	{
		int podzial = f_PartitionLomuto(lewy, prawy);
		f_QuickSortLomuto(lewy, podzial - 1);
		f_QuickSortLomuto(podzial + 1, prawy);
	}

}

int cTablica::f_PartitionLomuto(CSortTablica& tab,int lewy, int prawy)
{
	int pivot = tablica[prawy];
	int i = lewy - 1;
	for (int j = lewy; j < prawy; ++j)
	{
		if (tablica[j] <= pivot)
		{
			i++;
			f_zamien(tablica[i], tablica[j]);
		}
	}
	f_zamien(tablica[i + 1], tablica[prawy]);
	return i + 1;
}

void CTablica::f_Heapify(CSortTablica &tab , int i)
{
	int najwiekszy = i;
	int l = 2 * i + 1;
	int r= 2 * i + 2;
	if (l < n && tab[l] > tab[i]){
		compareCounter++;
		najwiekszy = l;
	}
	if(r < n && tab[r] > tab[i]){
		compareCounter++;
		najwiekszy = r;
	}
	if(najwiekszy != i){
		compareCounter++; //?
		Swap(&tab[i], &tab[najwiekszy]);
		Heapify(tab, n, najwiekszy);
	}
}

void CTablica::f_Swap(int* a, int* b)
{
	swapCounter++;
	int temp = *a;
	*a = *b;
	*b = temp;
}

void CTablica::f_BuildHeap(CSortTablica &tab )
{
	for (int i = (n / 2) - 1; i >= 0; i--)
	{
		Heapify(tab, n, i);
	}
}

int CTablica::f_PartitionHoare(CSortTablica &tab, int left, int right)
{
	int i = left - 1;
	int j = right + 1;
	int pivot = tab[left];
	while (true)
	{
		do
		{
			i++;
			compareCounter++;
		} while (tab[i] < pivot);
		compareCounter--;
		do
		{
			j--;
			compareCounter++;
		} while (tab[j] > pivot);
		compareCounter--;
		if (i >= j)
		{
			compareCounter++;
			return j;
		}
		Swap(&tab[i], &tab[j]);
	}
}

void CTablica::f_ResetCounters()
{
	compareCounter = 0;
	swapCounter = 0;
}

int CTablica::f_ReturnCompareCounter()
{
	return compareCounter;
}

int CTablica::f_ReturnSwapCounter()
{
	return swapCounter;
}

CTablica::CTablica()
{
	ResetCounters();
}

void CTablica::f_HeapSort(CSortTablica &tab )
{
	BuildHeap(tab, n);
	for (int i = n - 1; i > 0; i--)
	{
		Swap(&tab[0], &tab[i]);
		Heapify(tab, i, 0);
	}
}

void CTablica::f_QuickSortHoare(CSortTablica &tab, int left, int right)
{
	if (left < right)
	{
		compareCounter++;
		int p = Partition(tab, left, right);
		QuickSortHoare(tab, left, p);
		QuickSortHoare(tab, p + 1, right);
	}
}

