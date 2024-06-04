#include "LibCTablica.h"

void CTablica::Heapify(int* tab, int n, int i)
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

void CTablica::Swap(int* a, int* b)
{
	swapCounter++;
	int temp = *a;
	*a = *b;
	*b = temp;
}

void CTablica::BuildHeap(int* tab, int n)
{
	for (int i = (n / 2) - 1; i >= 0; i--)
	{
		Heapify(tab, n, i);
	}
}

int CTablica::Partition(int* tab, int left, int right)
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

void CTablica::ResetCounters()
{
	compareCounter = 0;
	swapCounter = 0;
}

int CTablica::ReturnCompareCounter()
{
	return compareCounter;
}

int CTablica::ReturnSwapCounter()
{
	return swapCounter;
}

CTablica::CTablica()
{
	ResetCounters();
}

void CTablica::HeapSort(int* tab, int n)
{
	BuildHeap(tab, n);
	for (int i = n - 1; i > 0; i--)
	{
		Swap(&tab[0], &tab[i]);
		Heapify(tab, i, 0);
	}
}

void CTablica::QuickSortHoare(int* tab, int left, int right)
{
	if (left < right)
	{
		compareCounter++;
		int p = Partition(tab, left, right);
		QuickSortHoare(tab, left, p);
		QuickSortHoare(tab, p + 1, right);
	}
}
