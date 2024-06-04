#include "LibCTablica.h"

void CTablica::f_ShakerSort()
{
	bool zamiana = true;
	int lewy = 0;
	int prawy = n - 1;

	while (zamiana)
	{
		zamiana = false;

		for (int i = lewy; i < prawy; ++i)
		{
			if (tab[i] > tab[i + 1])
			{
				f_Swap(&tab[i], &tab[i + 1]);
				zamiana = true;
			}
		}
		prawy--;

		for (int i = prawy; i > lewy; --i)
		{
			if (tab[i] < tab[i - 1])
			{
				f_Swap(&tab[i], &tab[i - 1]);
				zamiana = true;
			}
		}
		lewy++;
	}
}

void CTablica::f_QuickSortLomuto(int lewy, int prawy)
{
	if (lewy < prawy)
	{
		int podzial = f_PartitionLomuto(lewy, prawy);
		f_QuickSortLomuto(lewy, podzial - 1);
		f_QuickSortLomuto(podzial + 1, prawy);
	}

}

int CTablica::f_PartitionLomuto(int lewy, int prawy)
{
	int pivot = tab[prawy];
	int i = lewy - 1;
	for (int j = lewy; j < prawy; ++j)
	{
		if (tab[j] <= pivot)
		{
			i++;
			f_Swap(&tab[i], &tab[j]);
		}
	}
	f_Swap(&tab[i + 1], &tab[prawy]);
	return i + 1;
}

void CTablica::f_Heapify(int i)
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
		f_Swap(&tab[i], &tab[najwiekszy]);
		f_Heapify(najwiekszy);
	}
}

void CTablica::f_Swap(int* a, int* b)
{
	swapCounter++;
	int temp = *a;
	*a = *b;
	*b = temp;
}

void CTablica::f_BuildHeap()
{
	for (int i = (n / 2) - 1; i >= 0; i--)
	{
		f_Heapify(i);
	}
}

int CTablica::f_PartitionHoare(int left, int right)
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
		f_Swap(&tab[i], &tab[j]);
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

CTablica::CTablica(CSortTablica &tab)
{
	this->n = tab.f_ReturnSize();
	this->tab = tab.f_getTab();
	f_ResetCounters();
}

void CTablica::f_HeapSort()
{
	f_BuildHeap();
	for (int i = n - 1; i > 0; i--)
	{
		f_Swap(&tab[0], &tab[i]);
		f_Heapify(i);
	}
}

void CTablica::f_QuickSortHoare(int left, int right)
{
	if (left < right)
	{
		compareCounter++;
		int p = f_PartitionHoare(left, right);
		f_QuickSortHoare(left, p);
		f_QuickSortHoare(p + 1, right);
	}
}

