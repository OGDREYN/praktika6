using namespace std;
#include <iostream>

int main()
{
	setlocale(0, "");
	int number;
	int d;
	int sum = 0;
	int product = 1;

	cout << "введите целое число: ";
	cin >> number;

	int originalNumber = number; // сохраняем исходное число

	while (number != 0) 
	{
		d = number % 10; // получаем последнюю цифру числа
		sum += d; // добавляем цифру к сумме
		product *= d; // умножаем цифру на произведение
		number /= 10; // удаляем последнюю цифру из числа
	}

	cout << "сумма цифр числа " << originalNumber << " = " << sum << endl;
	cout << "произведение цифр числа " << originalNumber << " = " << product << endl;

	return 0;
}
