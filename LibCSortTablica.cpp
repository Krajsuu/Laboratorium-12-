#include "LibCSortTablica.h"

CSortTablica::CSortTablica(int m)
{
	this->n = n;
	tab = new int[n];
}

CSortTablica::~CSortTablica()
{
	delete[] tab;
}

void CSortTablica::FillRandom(int min, int max)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dist(min, max);
	for (int i = 0; i < n; i++)
	{
		tab[i] = dist(gen);
	}
}

void CSortTablica::FillPartiallySorted(int m)
{
}

void CSortTablica::FillAlone()
{
	for (int i = 0; i < n; i++)
	{
		std::cin>>tab[i];
	}
}

void CSortTablica::Print()
{
	for (int i = 0; i < n; i++)
	{
		std::cout << tab[i] << " ";
	}
	std::cout << std::endl;
}
