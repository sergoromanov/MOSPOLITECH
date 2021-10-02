#include <iostream>
void task1() {
	std::cout << "Task1: Определить значение этого же угла в радианах" << "\n";
	std::cout << "Градусы a:";
	float a;
	std::cin >> a;
	float p = a/ 180;
	std::cout <<"Радианы:" << p<<"пи" <<"\n";
}
void task2() {
	std::cout << "Task2: Определить значение этого же угла в градусах" << "\n";
	std::cout << "Радианы a: ";
	float a;
	std::cin >> a;
	float p = a * 180;
	std::cout << "Градусы: " << p << "\n";

}
void task3() {
	std::cout << "Task3: Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет." << "\n";
	float A, Y, X, price;
	std::cout << "X:";
	std::cin >> X;
	std::cout << "A:";
	std::cin >> A;
	std::cout << "Y:";
	std::cin >> Y;
	price = A / X;
	std::cout << "Стоимость 1 кг и Y кг конфет:" << price * Y << "\n";
}
void task4() {
	std::cout << "Task4: Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км. Определить расстояние между ними через T часов, если автомобили удаляются друг от друга. " << "\n";
	float V1, V2, S, T;
	std::cout << "V1:";
	std::cin >> V1;
	std::cout << "V2:";
	std::cin >> V2;
	std::cout << "S:";
	std::cin >> S;
	std::cout << "T:";
	std::cin >> T;
	std::cout << "расстояние между ними через T часов:" << V1 * T + S + V2 * T << "\n";
}
void task5() {
	std::cout << "Task5: Решить линейное уравнение A•x + B = 0, заданное своими коэффициентами A и B" << "\n";
	float A, x, B;
	std::cout << "A:";
	std::cin >> A;
	std::cout << "B:";
	std::cin >> B;
	std::cout << A << "*x" << "+" << B << "=0" << "\n";
	x = -B / A;
	std::cout << "x=" << x << "\n";
}
void task6() {
	std::cout << "Task6: Найти решение системы линейных уравнений вида " << "\n";
	float a1, b1, a2, b2, c1, c2, del, del1, del2, x, y;
	std::cout << "A1*x+B1*y=C1" << "\n";
	std::cout << "A1: ";
	std::cin >> a1;
	std::cout << "B1: ";
	std::cin >> b1;
	std::cout << "C1: ";
	std::cin >> c1;
	std::cout << "A2*x + B2*y = C2" << "\n";
	std::cout << "A2: ";
	std::cin >> a2;
	std::cout << "B2: ";
	std::cin >> b2;
	std::cout << "C2: ";
	std::cin >> c2;
	del = a1 * b2 - a2 * b1;
	del1 = c1 * b2 - b1 * c2;
	del2 = a1 * c2 - c1 * a2;
	x = del1 / del;
	y = del2 / del;
	std::cout << "x: " << x << "\n";
	std::cout << "y: " << y << "\n";
}
int main() {
	setlocale(LC_ALL, "rus");
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
}	
