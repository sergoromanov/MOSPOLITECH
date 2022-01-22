#include <iostream>
#include <iostream>
#include <stdio.h>
using namespace std;
void task1() {
	cout << "Даны массивы A и B одинакового размера N. Поменять местами их содержимое и вывести вначале элементы преобразованного массива A, а затем — элементы преобразованного массива B." << "\n";
	int a[10], b[10];
	int n;
	cout << "N:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i + 1 << "]:";
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		cout << "b[" << i + 1 << "]:";
		cin >> b[i];
	}
	for (int i = 0; i < n; ++i) {
		a[i] += b[i];
		b[i] = a[i] - b[i];
		a[i] = a[i] - b[i];
	}
	cout << "A:" << "\n";
	for (int i = 0; i < n; ++i) {
		cout << i + 1 << ":";
		cout << a[i] << "\n";
	}
	cout << " B:" << "\n";
	for (int i = 0; i < n; ++i) {
		cout << i + 1 << ":";
		cout << b[i] << "\n";
	}
}
void task2() {
	cout << "Дан массив A размера N. Сформировать новый массив B того же размера по следующему правилу: элемент BK равен среднему арифметическому элементов массива A с номерами от 1 до K." << "\n";
	float a[10], b[10];
	int n;
	cout << "N:";
	cin >> n;
	for (int k = 0; k < n; k++) {
		cout << "a[" << k + 1 << "]:";
		cin >> a[k];
	}
	for (int k = 0; k < n; k++) {
		b[k] = 0;
		for (int i = 0; i <= k; i++) {
			b[k] += a[i];
		}
		b[k] /= k + 1;
	}
	cout << "B:" << "\n";
	for (int k = 0; k < n; ++k) {
		cout << k + 1 << ":";
		cout << b[k] << "\n";
	}

}
void task3() {
	cout << "Дан целочисленный массив размера N. Увеличить все нечетные числа, содержащиеся в массиве, на исходное значение последнего нечетного числа. Если нечетные числа в массиве отсутствуют, то оставить массив без изменений" << "\n";
	int a[10];
	int n;
	cout << "N:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i + 1 << "]:";
		cin >> a[i];
	}
	int odd = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] % 2 != 0) {
			odd = a[i];
			break;
		}
	}
	for (int i = n-1; i >= 0; --i) {
		if (a[i] % 2 != 0) {
			a[i] += odd;
		}
	}
	cout << "A:" << "\n";
	for (int i = 0; i < n; ++i) {
		cout << i + 1 << ":";
		cout << a[i] << "\n";
	}
}
void task4() {
	cout << "Дан массив размера N. Обнулить элементы массива, расположенные между его минимальным и максимальным элементами (не включая минимальный и максимальный элементы)." << "\n";
	int a[10];
	int n;
	cout << "N:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i + 1 << "]:";
		cin >> a[i];
	}
	int min = 0, max = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] > a[max]) {
			max = i;
		}
		if (a[i] < a[min]) {
			min = i;
		}
	}
	if (max < min) {
		max += min;
		min = max - min;
		max = max - min;
	}
	for (int i = min + 1; i < min + (max - min); ++i) a[i] = 0;
	cout << "A:" << "\n";
	for (int i = 0; i < n; ++i) {
		cout << i + 1 << ":";
		cout << a[i] << "\n";
	}
}
int swap(float* f1, float* f2) {
	*f1 += *f2;
	*f2 = *f1 - *f2;
	*f1 = *f1 - *f2;
	return 0;
}
void task5() {
	cout << "Дан массив размера N, все элементы которого, кроме первого, упорядочены по возрастанию. Сделать массив упорядоченным, переместив первый элемент на новую позицию." << "\n";
	float a[10];
	int n;
	cout << "N:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i + 1 << "]:";
		cin >> a[i];
	}
	for (int i = 0; i < n-1; ++i) {
		if (a[i+1] < a[i]) {
			swap(a[i], a[i+1]);
		}
	}
	cout << "A:" << "\n";
	for (int i = 0; i < n; ++i) {
		cout << i + 1 << ":";
		cout << a[i] << "\n";
	}

}
int main() {
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
