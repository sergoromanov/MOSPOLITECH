#include <iostream>
using namespace std;
float Rings(float R1, float R2) {
    return 3.14 * (R1 * R1 - R2 * R2);
}
int main(){
    float R1,R2;
    setlocale(LC_ALL, "rus");
    cout << "Task3: Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, заключенного между двумя окружностями с общим центром и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2). С ее помощью найти площади трех колец, для которых даны внешние и внутренние радиусы." << "\n";
	  for (int i = 0; i < 3; i++){
		  cout << "Введите радиус R1:";
		  cin >> R1;
		  cout << "Введите радиус R2 (R2 < R1):";
		  cin >> R2;
		  cout << "Площадь кольца = " << Rings(R1, R2) << "\n";
	}
}

