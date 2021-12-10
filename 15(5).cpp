#include <iostream>
using namespace std;
float Fact2(int N)
{
	float a = 1;

	for (int i = 1; i <= N; i++)
	{
		if ((N % 2 == 0) && (i % 2 == 0)) {
			a = a * (float)i;
		}
		if ((N % 2 != 0) && (i % 2 != 0)) {
			a = a * (float)i;
		}	
	}
	return a;
}
int main()
{
	setlocale(LC_ALL, "rus");
	int N;
	cout << "Введите N:";
	cin >> N;
	cout << "Двойной факториал = " << Fact2(N);
}

