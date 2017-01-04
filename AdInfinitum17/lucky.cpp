#include<iostream>

int main()
{
	unsigned int q;
	std::cin >> q;
	while (q--)
	{
		unsigned long long int n;
		std::cin >> n;

		if (n % 4 == 0 || n % 7 == 0)
		{
			std::cout << "Yes\n";
		}
		else if (n % 4 == 3 && n > 3)
		{
			std::cout << "Yes\n";
		}
		else if (n % 4 == 2 && n > 12)
		{
			std::cout << "Yes\n";
		}
		else if (n % 4 == 1 && n > 20)
		{	
			std::cout << "Yes\n";
		}
		else
			std::cout << "No\n";
	}
	return 0;
}