#include <iostream>

using namespace std;

float PowerA3(float A, float B=0)
{
	B = A * A * A;
	return B;

}

int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "Task1: Описать функцию PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной B (A — входной, B — выходной параметр; оба параметра являются вещественными). С помощью этой функции найти третьи степени пяти данных чисел." << "\n";

	float A, B;

	for (int i = 0; i < 5; i++)
	{

		cout << "Введите число:";
		cin >> A;
		cout << A << "^3 = " << PowerA3(A) << "\n";
	}

}
