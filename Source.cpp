﻿//Используя структуры данных необходимо сложить и умножить два комплексных числа.
#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, A, B, sd, sm, pd, pm;
	char i, I;
	cout << "Введите первое комп.число: ";			//считываем комплексное число в две переменные а-действительная часть
	cin >> a >> b >> i;						//b-мнимая часть;i,I-маркер мнимой части;
	cout << "Введите второе комп.число: ";
	cin >> A >> B >> I;
	if (i != 'i' || I != 'i') {					//защита от дурака
		cout << "Ошибка!" << endl;
		system("pause");
		return 0;
	}
	sd = a + A;							//считаем сумму действительной части
	sm = b + B;							//считаем сумму мнимой части
	pd = a*A + b*B*(-1);					//считаем произведение действит. части
	pm = a*B + A*b;						//считаем произведение мнимой части
	if (sm>0) {
		cout << "Сумма: " << sd << "+" << sm << i << endl;		//эти условия предусмотренны для вывода нужных знаков 
		if (pm>0) {
			cout << "Произведение: " << pd << "+" << pm << i << endl;
		}
		else {
			cout << "Произведение: " << pd << pm << i << endl;
		}
		system("pause");
		return 0;
	}
	cout << "Сумма: " << sd << sm << i << endl;
	cout << "Произведение: " << pd << pm << i << endl;
}