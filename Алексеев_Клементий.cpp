#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	// 1 задание
	cout << "1) 1 13 49" << endl;
	// 2 задание
	char a;
	cout << "2) Введите символ: ";
	cin >> a;
	cout << "Ответ: " << "1" << a << "13" << a << "49" << endl;
	// 3 задание
	int q, w, e;
	cout << "3) Введите первое число: ";
	cin >> q;
	cout << "Введите второе число: ";
	cin >> w;
	cout << "Введите третье число: ";
	cin >> e;
	cout << "Ответ: " << q << "  " << w << "  " << e << endl;
	// 4 задание
	float r, res;
	cout << "4) Введите значение а: ";
	cin >> r;
	res = 12 * pow(r,2) + 7 * r - 12;
	cout << "Ответ: " << res << endl;
	// 5 задание
	float n, m, res2 ;
	cout << "5) Введите объём тела: ";
	cin >> n;
	cout << "Введите массу тела: ";
	cin >> m;
	res2 = m / n;
	cout << "Ответ: Плотность равна " << res2 << endl;
	// 6 задание
	int k, l, res3;
	cout << "6) Введите число a: ";
	cin >> k;
	cout << "Введите число b: ";
	cin >> l;
	res3 = -1 * l / k;
	cout << "Ответ: " << res3 << endl;
	// Задание 7
	float x1, x2, y1, y2, res4;
	cout << "7) Введите x первой точки: ";
	cin >> x1;
	cout << "Введите y первой точки: ";
	cin >> y1;
	cout << "Введите x второй точки: ";
	cin >> x2;
	cout << "Введите y второй точки: ";
	cin >> y2;
	res4 = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5);
	cout << "Ответ: Расстояние между ними равно " << res4 << endl;
	// Задание 8
	float P, a1, b1, c1;
	cout << "8) Введите высоту трапеции: H = ";
	cin >> a1;
	cout << "Введите меньшее основание: А = ";
	cin >> b1;
	cout << "Введите большее основание: С = ";
	cin >> c1;
	P = b1 + c1 + pow(pow((c1 - b1), 2) / 4 + pow(a1, 2), 0.5) * 2;
	cout << "Ответ: Периметр трапеции равен " << P << endl;
	// Задание 9
	int a3, res5, res6;
	cout << "9) Введите длину ребра куба: ";
	cin >> a3;
	cout << "Ответ: Объём равен " << pow(a3, 3) << ", а S боковой поверхности равна " << pow(a3,2) << endl;
	// Задание 10
	int a4;
	cout << "10) Введите сторону квадрата: ";
	cin >> a4;
	cout << "Ответ: Периметр равен " << pow(a4, 2) * 6 << endl;
	// Задание 11
	int a5;
	cout << "11) Введите радиус окружности: ";
	cin >> a5;
	cout << "Ответ: Диаметр равен " << a5 * 2 << endl;
	// Задание 12
	string name;
	cout << "Write your name: "; cin >> name;
	cout << "Hello, " << name << "! My name is C++";

	return 0;
}




