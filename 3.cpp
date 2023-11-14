using namespace std;
#include <iostream>

int main()
{
	setlocale(0, "");
	int num;

	cout << "введите целое число: ";
	cin >> num;

	cout << "делители числа " << num << ": ";
	for (int i = 1; i <= num; ++i)
	{
		if (num % i == 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}
