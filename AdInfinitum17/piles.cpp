/*
#include<iostream>

int compare(const void * a, const void * b)
{
	return (*(long int*)a - *(long int*)b);
}

int main()
{
	unsigned int n;
	long int hf;
	unsigned int ways = 0;
	std::cin >> n;
	long int *pile = new long int[n];
	unsigned int i = 0;

	while (i < n)
	{
		std::cin >> pile[i++];
	}

	if (n == 1)
	{
		hf = pile[0] * 2;
		ways = 1;
	}
	else
	{
		qsort(pile, n, sizeof(long int), compare);

		if (pile[0] == pile[1])
		{
			hf = pile[0];
			ways = n;
		}
		else if ((pile[0] * 2) <= pile[1])
		{
			hf = pile[0] * 2;
			ways = 1;
		}
		else
		{
			hf = pile[1];
			ways = 1;
		}
	}
		std::cout << hf << " " << ways;
	
	return 0;
}
*/