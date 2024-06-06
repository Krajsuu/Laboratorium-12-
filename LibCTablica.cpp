#include "LibCTablica.h"

CTablica::CTablica()
{
	tab = nullptr;
	n = 0;
	f_ResetCounters();
}

void CTablica::f_ShakerSort()
{
	bool zamiana = true;
	int left = 0;
	int right = n - 1;

	while (zamiana)
	{
		zamiana = false;

		for (int i = left; i < right; ++i)
		{
			compareCounter++;
			if (tab[i] > tab[i + 1])
			{
				f_Swap(&tab[i], &tab[i + 1]);
				zamiana = true;
			}
		}
		right--;

		for (int i = right; i > left; --i)
		{
			compareCounter++;
			if (tab[i] < tab[i - 1])
			{
				f_Swap(&tab[i], &tab[i - 1]);
				zamiana = true;
			}
		}
		left++;
	}
}

void CTablica::f_QuickSortLomuto(int left, int right)
{
	if (left < right)
	{
		int podzial = f_PartitionLomuto(left, right);
		f_QuickSortLomuto(left, podzial - 1);
		f_QuickSortLomuto(podzial + 1, right);
	}

}

int CTablica::f_PartitionLomuto(int left, int right)
{
	int pivot = tab[right];
	int i = left - 1;
	for (int j = left; j < right; ++j)
	{
		compareCounter++;
		if (tab[j] <= pivot)
		{
			i++;
			f_Swap(&tab[i], &tab[j]);
		}
	}
	f_Swap(&tab[i + 1], &tab[right]);
	return i + 1;
}

void CTablica::f_HeapSort()
{
	f_BuildHeap();
	for (int i = n-1; i>=0; i--)
	{
		f_Swap(&tab[0], &tab[i]);
		f_Heapify(i);
	}
}

void CTablica::f_Heapify(int i)
{
	int najwiekszy = i;
	int l = 2 * i + 1;
	int r= 2 * i + 2;
	compareCounter++;
	if (l < n && tab[l] > tab[najwiekszy]){
		najwiekszy = l;
	}
	compareCounter++;
	if(r < n && tab[r] > tab[najwiekszy]){
		najwiekszy = r;
	}
	if(najwiekszy != i){
		f_Swap(&tab[i], &tab[najwiekszy]);
		f_Heapify(najwiekszy);
	}
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
		do
		{
			j--;
			compareCounter++;
		} while (tab[j] > pivot);
		if (i >= j)
		{
			return j;
		}
		f_Swap(&tab[i], &tab[j]);
	}
}



void CTablica::f_QuickSortHoare(int left, int right)
{
	if (left < right)
	{
		int p = f_PartitionHoare(left, right);
		f_QuickSortHoare(left, p);
		f_QuickSortHoare(p + 1, right);
	}
}

void CTablica::f_Swap(int* a, int* b)
{
	swapCounter++;
	int temp = *a;
	*a = *b;
	*b = temp;
}

CTablica::CTablica(CSortTablica& tab)
{
	this->n = tab.f_ReturnSize();
	this->tab = tab.f_getTab();
	f_ResetCounters();
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




