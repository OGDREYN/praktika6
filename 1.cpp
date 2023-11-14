using namespace std;
#include <iostream>

int main()
{
	setlocale(0, "");
	int sum = 0;
	for (int i = 1; i <= 150; ++i) 
	{
		if (i % 5 == 0 || i % 7 == 0) 
		{
			sum += i;
		}
	}

	cout << "сумма чисел кратных 5 илил 7 от 1 до 150 : " << sum;

	return 0;
}
