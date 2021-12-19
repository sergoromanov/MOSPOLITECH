#include <iostream>
using namespace std;
void task1() {
	int N;
	int a[100];
	cout << "Task1: Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, содержащий N первых положительных нечетных чисел: 1, 3, 5, . . . ." << "\n";
	cout << "N:";
	cin >> N;
	for (int i = 0; i < N; i++) {
		a[i] = 1 + i * 2;
	}
	for (int i = 0; i < N; i++)
		cout << a[i] << "\n";
}
void task2() {
	cout << "Task2: Дано целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии. Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии: A, A·D, A·D2 , A·D3 , . . ." << "\n";
	int N;
	int A, D;
	int arr[100];
	cout << "N:";
	cin >> N;
	cout << "A:";
	cin >> A;
	cout << "D:";
	cin >> D;
	cout << "Массив размера N, содержащий N первых членов данной прогрессии:" << "\n";
	for (int i = 0; i < N; i++)
	{
		arr[i] = A * pow(D, i);
	}
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\n";
	}
}
void task3() {
	cout << "Task3: Даны целые числа N (> 2), A и B. Сформировать и вывести целочисленный массив размера N, первый элемент которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих" << "\n";
	int N, A, B,sum;
	cout << "N:";
	cin >> N;
	cout << "A:";
	cin >> A;
	cout << "B:";
	cin >> B;
	int arr[100];
	arr[0] = A;
	arr[1] = B;
	for (int i = 2; i < N; i++) {
		arr[i] = 0;
		for (int j = 0; j < i; j++) {
			arr[i] = arr[i] + arr[j];
		}
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << "\n";
	}

}
void task4() {
	cout << "Task4: Дан массив A размера N. Вывести его элементы в следующем порядке: A1, AN , A2, AN−1, A3, AN−2," << "\n";
	int N;
	int arr[100];
	cout << "N:";
	cin >> N;
	for (int i = 0; i < N; i++) {
		arr[i]=1+i;
	}
	cout << "Вывод массива:" << "\n";
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "\n";
	}
	cout << "Преобразование:" << "\n";

	for (int i = 0; i < N / 2; i++)
	{
		cout << arr[i] << "\n";
		cout << arr[N - 1 - i] << "\n";

	}
	if (N % 2 != 0)
		cout << arr[N / 2] << "\n";
}
void task5() {
	cout << "Task5: Дан массив A размера N. Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров, а затем — элементы с четными номерами в порядке убывания номеров" << "\n";
	int N;
	int arr[100];
	cout << "N:";	
	cin >> N;
	cout << "Вывод массива;" << "\n";
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 90 + 10;
		cout << arr[i] << "\n";
	}
	cout << "Элементы с нечетными номерами в порядке возрастания номеров" << "\n";
	for (int i = 0; i < N; i += 2)
	{
		cout << arr[i] << "\n";
	}

	cout << "Элементы с четными номерами в порядке убывания номеров" << "\n";

	for (int i = N - (N % 2)-1; i >= 1; i -= 2)
	{
		cout << arr[i] << "\n";
	}
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
