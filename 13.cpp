#include <iostream>
using namespace std;
void task1() {
	cout << "Task1: Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет." << "\n";
	float p, m;
	cout << "Введите стоимость конфет:";
	cin >> p;
	cout << "Цена конфет:";
	for (m = 0.1; m < 1.1; m += 0.1) {
		cout << m << "кг = "<< p*m << "\n";
	}
	cout << "\n";
}
void task2() {
	cout << "Task2: Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей)." << "\n";
	int N;
	float m = 1 ;
	cout << "Введите число: ";
	cin >> N;
	for (int i = 1; i <= N; i++) {
		m = m * (1 + 0.1 * i);
	}
	cout << "Вывод: " << m << "\n";
}
void task3() {
	cout << "Task3: Дано целое число N (> 0). Найти квадрат данного числа, используя для его вычисления следующую формулу: N2 = 1 + 3 + 5 + . . . + (2·N − 1). После добавления к сумме каждого слагаемого выводить текущее значение суммы" << "\n";
	int n;
	int x = 0;
	cout << "Введите число:";
	cin >> n;
	for (int i = 1; i <= (2 * n - 1); i += 2) {
		x += i;
		cout << x << "\n";
	}
}
void task4() {
	cout << "Task4: Дано вещественное число A и целое число N (> 0). Используя один цикл, найти сумму 1 + A + A2 + A3 + . . . + A**N" << "\n";
	float A, a = 1, m = 0;
	int N;
	cout << "A:";
	cin >> A;
	cout << "N: ";
	cin >> N;
	for (int i = 1; i <= N; i++) {
		a *=A;
		m += a;
	}
	cout << m+1 << "\n";
}
void task5() {
	cout << "Task5: Дано вещественное число A и целое число N (> 0). Используя один цикл, найти значение выражения .1 − A + A2 − A3 + . ..± AN ." << "\n";
	float A, a = 1, m = 0;
	int N;
	cout << "A:";
	cin >> A;
	cout << "N:";
	cin >> N;
	for (int i = 1; i <= N; i++) {
		a *= -A;
		m += a;
	}
	cout << m+1 << "\n";
}
int main()
{
	setlocale(LC_ALL, "rus");
	task1();
	cout << "\n";
	task2();
	cout << "\n";
	task3();
	cout << "\n";
	task4();
	cout << "\n";
	task5();
}
