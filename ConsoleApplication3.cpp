#include <iostream> 
void task1()
{
	std::cout << "Task1"<<"\n";
	int a, b;
	std::cout << "Dlina:";
	std::cin >> a;
	std::cout << "Shirina:";
	std::cin >> b;
	int s = a * b;
	int p = (a + b) * 2;
	std::cout << "Ploshad:" << s;
	std::cout << "\n";
	std::cout << "Perimetr:" << p;
}
void task2() {
	std::cout << "Task2"<<"\n";
	float d;
	std::cout << "Diametr:";
	std::cin >> d;
	float L = 3.14 * d;
	std::cout << "Dlina okruzhnosti:" << L;
}
void task3() {
	std::cout << "Task3" << "\n";
	float a, b;
	std::cin >> a;
	std::cin >> b;
	float e = (a + b) / 2;
	std::cout << "Srednee:" << e;
}
void task4() {
	std::cout << "Task4" << "\n";
	int a, b;
	std::cin >> a;
	std::cin >> b;
	int A = a * a;
	int B = b * b;
	int s = A + B;
	std::cout << "Summa:" << s;
	std::cout << "\n";
	int r = A - B;
	std::cout << "Raznost:"<< r;
	std::cout << "\n";
	int p = A * B;
	std::cout << "Proizved:"<< p;
	std::cout << "\n";
	int c = A / B;
	std::cout << "Chastnoe:"<< c;
	std::cout << "\n";

}
void task5() {
	std::cout << "Taks5"<<"\n";
	float a, b;
	std::cin >> a;
	std::cin >> b;
	float s = abs(a + b);
	std::cout <<"Summa:" <<s;
	std::cout << "\n";
	float r = abs(a - b);
	std::cout << "Raznost:" << r;
	std::cout << "\n";
	float p = abs(a * b);
	std::cout << "Proived:" << p;
	std::cout << "\n";
	float c = abs(a / b);
	std::cout << "Chastnoe:" << c;
	std::cout << "\n";
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
}