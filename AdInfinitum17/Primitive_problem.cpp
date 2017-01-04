/*

#include<iostream>
#include<vector>

#define uint64 unsigned __int64
#define int64 __int64


unsigned __int64 GCD(unsigned __int64 a, uint64 b)
{
	uint64 c = a%b;
	if (c == 0)
		return b;
	return GCD(b, c);
}


int main() {
	unsigned long long int d;
	std::cin >> d;
	unsigned long long const int p = d;

	unsigned long long int firstPrimitiveRoot;
	bool gotfirst = false;
	unsigned int totalPrimitiveRoots = 0;
	for (unsigned long long int i = 2; i < p - 1; i++) {
		bool primitive = true;
		unsigned long long int start = 1;
		for (unsigned long long int j = 1; j <= p / 2; j++) {
			start = (start * i) % p;
			if (j == p - 1) {
				if (start != 1) {
					primitive = false;
					break;
				}
			}
			else if (start == 1) {
				primitive = false;
				break;
			}
		}
		if (primitive)
		{
			if (!gotfirst)
			{
				firstPrimitiveRoot = i;
				gotfirst = true;
			}
			totalPrimitiveRoots++;

		}
	}
	std::cout << firstPrimitiveRoot << " " << totalPrimitiveRoots << "\n";

	return 0;
}



*/ 
