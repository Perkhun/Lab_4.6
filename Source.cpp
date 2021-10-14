#include <iostream>
#include <cmath>

using namespace std;
int main()

{
	double S1, S2;
	int k, i;
	S1 = 0;
	k = 1;
	while (k <= 20)

	{
		S2 = 0;
		i = 1;
		while (i <= k)

		{
			S2 += cos(i + k);
			i++;

		}
		S1 += sqrt(sin(1. * k) * sin(1. * k)) + abs(S2);
		k++;

	}
	cout << S1 << endl;
	S1 = 0;
	k = 1;
	do
	{
		S2 = 0;
		i = 1;
		do
		{
			S2 += cos(i + k);
			i++;
		} while (i <= k);
		S1 += sqrt(sin(1. * k) * sin(1. * k)) + abs(S2);
		k++;
	} while (k <= 20);
	cout << S1 << endl;

	S1 = 0;
	for (k = 1; k <= 20; k++)

	{
		S2 = 0;
		for (i = 1; i <= k; i++)

		{
			S2 += cos(i + k);

		}
		S1 += sqrt(sin(1. * k) * sin(1. * k)) + abs(S2);

	}
	cout << S1 << endl;

	S1 = 0;
	for (k = 20; k >= 1; k--)

	{
		S2 = 0;
		for (i = k; i >= 1; i--)

		{
			S2 += cos(i + k);

		}
		S1 += sqrt(sin(1. * k) * sin(1. * k)) + abs(S2);
	}
	cout << S1 << endl;

	
	return 0;
}



