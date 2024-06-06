#include "LibCSortTablica.h"

void CSortTablica::f_shuffe()
{
	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(tab, tab + n, g);

}

void CSortTablica::f_SetSize()
{
	std::cout << "Podaj liczbe elementow tablicy: ";
	std::cin >> this -> n;;
}

int* CSortTablica::f_getTab()
{
	return tab;
}

int CSortTablica::f_ReturnSize()
{
	return n;
}

CSortTablica::CSortTablica()
{
	n = 0;
	tab = nullptr;
}

CSortTablica::~CSortTablica()
{
		delete[] tab;

}

CSortTablica::CSortTablica(int m)
{
	this->n = m;
	tab = new int[m];
}

void CSortTablica::FillRandom(int min, int max)
{
	this->tab = new int[n];
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dist(min, max);
	for (int i = 0; i < n; i++)
	{
		tab[i] = dist(gen);
	}
}

void CSortTablica::FillPartiallySorted()
{
	this->tab = new int[n];
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dist(0, n*54);
	int m = n * 0.1;
	int y = sqrt(n);
	for (int i = 0; i < n; i++)
	{
		if (i % y == 0 && m > 0 && i != 0)
		{
			tab[i] = dist(gen);
			m--;
		}
		else
		{
			tab[i] = i;
		}
	}

}

void CSortTablica::FillAlone()
{
	this->tab = new int[n];
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

void CSortTablica::operator=(CSortTablica& t)
{
	this->n = t.n;
	this -> tab = new int[n];
	for (int i = 0, g; i < n; i++)
	{
		g = t.tab[i];
		this -> tab[i] = g;
	}
}

