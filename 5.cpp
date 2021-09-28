#include <iostream>
#include <cmath>
#include <stdio.h>
#include <math.h>
void task1() {
	int x1, x2, y1, y2;
	std::cout << "Task1" << "\n";
	std::cin >> x1;
	std::cin >> y1;
	std::cin >> x2;
	std::cin >> y2;
	std::cout << "Rasstoyanie mezhu tochkami " << sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
void task2() {
	float A, B, C;
	std::cout << "Task2" << "\n";
	std::cout << "A:";
	std::cin >> A;
	std::cout << "\n";
	std::cout << "B:";
	std::cin >> B;
	std::cout << "\n";
	std::cout << "C:";
	std::cin >> C;
	std::cout << "\n";
	float AC = abs(A - C);
	std::cout << "AC:" << AC << "\n";
	float BC = abs(B - C);
	std::cout << "BC:" << BC << "\n";
	std::cout << "AC+BC: " << AC + BC;
}
void task3() {
	float A, B, C;
	std::cout << "Task3" << "\n";
	std::cout << "A:";
	std::cin >> A;
	std::cout << "\n";
	std::cout << "B:";
	std::cin >> B;
	std::cout << "\n";
	std::cout << "C:";
	std::cin >> C;
	std::cout << "\n";
	float AC = abs(A - C);
	std::cout << "AC:" << AC << "\n";
	float BC = abs(B - C);
	std::cout << "BC:" << BC << "\n";
	std::cout << "AC*BC: " << AC * BC;
}
void task4() {
	float x1, y1, x2, y2;
	std::cout << "x1:";
	std::cin >> x1;
	std::cout << "y1:";
	std::cin >> y1;
	std::cout << "x2:";
	std::cin >> x2;
	std::cout << "y2:";
	std::cin >> y2;
	std::cout << "P:" << 2 * (abs(x1 - x2) + abs(y1 - y2)) << "\n";
	std::cout << "S:" << abs(x1 - x2) * abs(y1 - y2);

}
void task5() {
	float x1, y1, x2, y2,x3,y3;
	std::cout << "x1:";
	std::cin >> x1;
	std::cout << "y1:";
	std::cin >> y1;
	std::cout << "x2:";
	std::cin >> x2;
	std::cout << "y2:";
	std::cin >> y2;
	std::cout << "x3:";
	std::cin >> x3;
	std::cout << "y3:";
	std::cin >> y3;
	float a, b, c;
	a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	float S, p, P;
	P = a + b + c;
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	std::cout << "P:" << P <<"\n";
	std::cout << "S:" << S;
	

}

int main() {
	task1();
	std::cout << "\n";
	task2();
	std::cout <<"\n";
	task3();
	std::cout << "\n";
	task4();
	std::cout << "\n";
	task5();
}


