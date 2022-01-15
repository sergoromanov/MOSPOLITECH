#include <iostream>
#include <stdio.h>
using namespace std;
void task1() {
	cout << "Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N). Найти среднее арифметическое элементов массива с номерами от K до L включительно." << "\n";
	int N, K, L;
	cout << "Введите N: ";
	cin >> N;
	cout << "Введите K: ";
	cin >> K;
	cout << "Введите L: ";
	cin >> L;
	int* arr = new int[N];
	cout << "Заполните массив: ";
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int sum = 0;
	for (int i = K; i <= L; i++) {
		sum += arr[i];
	}
	cout << "Среднее значение" << (float)sum / (float)(L-K+1);
}
void task2() {
	cout << "Дан целочисленный массив размера N, не содержащий одинаковых чисел. Проверить, образуют ли его элементы арифметическую прогрессию. Если образуют, то вывести разность прогрессии, если нет — вывести 0." << "\n";
	int a[100];
	int n;
	cout << "N:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 90 + 10;
		cout << a[i] << "\n";
	}
	int r = a[1] - a[0];
	for (int i = 1; i < n; ++i) {
		if (r != a[i] - a[i - 1]) {
			r = 0;
		}
	}
	cout << r;
}
void task3() {
	cout << "Дан массив A размера N. Найти минимальный элемент из его элементов с четными номерами: A2, A4, A6," << "\n";
	int a[100];
	int n;
	cout << "N:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 90 + 10;
		cout << a[i] << "\n";
	}
	int min = a[1];
	for (int i = 1; i < n; i += 2) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	cout << min;
}
void task4() {
	cout << "Дан массив размера N. Найти номер его последнего локального максимума (локальный максимум — это элемент, который больше любого из своих соседей)." << "\n";
	int arr[100];
	int n;
	cout << "N:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 90 + 10;
		cout << arr[i] << "\n";
	}
	int tmp = arr[1];
	for (int i = 1; i < n - 1; i++) {
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
			tmp = arr[i];
	}
	cout << tmp;
}
void task5() {
	cout << "Дан целочисленный массив размера N, содержащий ровно два одинаковых элемента. Найти номера одинаковых элементов и вывести эти номера в порядке возрастания" << "\n";
	int arr[100];
	int n;
	cout << "N:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int i2;
	for (int i = 0; i < n - 1; ++i) {
		for (i2 = i + 1; i2 < n; ++i2) {
			if (arr[i] == arr[i2]) {
				cout << i + 1 << "\n"<<  i2 + 1;
			}
		}
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
