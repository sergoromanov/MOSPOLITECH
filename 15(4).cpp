#include <iostream>
using namespace std;
int Qarter(float X, float Y)
{
	if (X > 0 && Y > 0) {
		cout << "I четверть" << endl;
	}
	if (X < 0 && Y > 0) {
		cout << "II четверть" << endl;
	}
	if (X < 0 && Y < 0) {
		cout << "III четверть" << endl;
	}	
	if (X > 0 && Y < 0) {
		cout << "IV четверть" << endl;
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "rus");
	float X, Y;
	cout << "Task4: Описать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти, в которой находится точка с ненулевыми вещественными координатами (x, y). С помощью этой функции найти номера координатных четвертей для трех точек с данными ненулевыми координатами" << "\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Введите координату X:";
		cin >> X;
		cout << "Введите координату Y:";
		cin >> Y;

		Qarter(X, Y);

		cout << "\n";
	}
}
