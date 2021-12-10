#include <iostream>

using namespace std;

int Sign(float X)
{
	if (X < 0)
		return -1;
	else if (X > 0)
		return 1;
	else
		return 0;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Task2: Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения:−1, если X < 0; 0, если X = 0; 1, если X > 0.С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B." << "\n";
	float A, B;

	cout << "Введите число A:";
	cin >> A;
	cout << "Введите число B:";
	cin >> B;

	cout << "Sign(A) + Sign(B) = " << Sign(A) + Sign(B) <<"\n";

}
