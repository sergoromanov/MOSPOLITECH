#include <iostream>
#include <cmath>
#include <stdio.h>
#include <math.h>
void task1() {
	std::cout << "Task1";
	float A, B;
	std::cin >> A;
	std::cin >> B;
	A = A+B;
	B = A-B;
	A = A - B;
	std::cout << A << "\n";
	std::cout << B;
}
void task2() {
	std::cout << "Task2"<< "\n";
	float A, B, C;
	std::cout << "A:";
	std::cin >> A;
	std::cout << "B:";
	std::cin >> B;
	std::cout << "C:";
	std::cin >> C;
	A = A + B + C;
	B = A - B - C;
	C = A - B - C;
	A = A - B - C;
	std::cout << "A:" << A << "\n" << "B:" << B << "\n" << "C:" << C;
}
void task3() {
	std::cout << "Task3" << "\n";
	float A, B, C;
	std::cout << "A:";
	std::cin >> A;
	std::cout << "B:";
	std::cin >> B;
	std::cout << "C:";
	std::cin >> C;
	float D = A + B + C;
	B = D - B - A;
	A = D - B - A;
	C = D - B - A;
	std::cout << "A:" << A << "\n" << "B:" << B << "\n" << "C:" << C;
}
void task4() {
	std::cout << "Task4" << "\n";
	float x;
	std::cin >> x;
	float y = y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	std::cout << "y:" << y;
}
void task5(){
	std::cout << "Task5" << "\n";
	float x;
	std::cin >> x;
	float y = 4 * (x - 3) * (x - 3) * (x - 3) * (x - 3) * (x - 3) * (x - 3) - 7 * (x - 3) * (x - 3) * (x - 3) + 2;
	std::cout << "y:" << y;
}
void task6() {
	std::cout << "Task6" << "\n";
	float A, A1;
	std::cout << "A:";
	std::cin >> A;
	A1 = A * A;
	A1 = A1 * A1;
	A1 = A1 * A1;
	std::cout << "A^8:" << A1 <<"\n";

}
void task7() {
	std::cout << "Task7" << "\n";
	float A, a1, a2;
	std::cout << "A:";
	std::cin >> A;
	a1 = A * A;
	a2 = a1 * A;
	a1 = a2 * a1;
	a2 = a1 * a1;
	a1 = a2 * a1;
	std::cout << "A^15:" << a1;
}
int main() {
	task1();
	std::cout << "\n";
	task2();
	std::cout << "\n";
	task3();
	std::cout << "\n";
	task4();
	std::cout << "\n";
	task5();
	std::cout << "\n";
	task6();
	std::cout << "\n";
	task7();

}
