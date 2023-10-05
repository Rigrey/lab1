#include <iostream>
#include <math.h>
#include <Windows.h>
#include <string>
using namespace std;

int main()
{
	char n;
	double b=0, c=0, d=0, a=0, x=0, p=0, V=0, m=0, x1=0, x2=0, y1=0, y2=0, z1=0, z2=0, h=0, S=0, R=0;
	setlocale(LC_ALL, "Rus");
	cout <<"1) " << "1 " <<"13 "<<"49 "<< endl << endl;
	cout << "Введите любой символ: ";
	cin >> n;
	cout <<"\n2) " << "1" << n << "13" << n << "49" << endl << endl;
	cout << "Введите 3 любые числа через пробел: ";
	cin >> b >> c >> d;
	cout << "\n3) " << b <<"  " << c << "  " << d << endl << endl;
	cout << "Введите значение a для функции x = 12a^2 + 7a - 12: ";
	cin >> a;
	cout << "\n4) а) x = " << 12*pow(a,2) + 7*a - 12 << endl << endl;
	cout << "Введите значение x для функции y = 3x^3 + 4x^2 - 11x + 1: ";
	cin >> x; 
	cout << "   \nб) y = " << 3 * pow(x, 3) + 4 * pow(x, 2) - 11 * x + 1 << endl << endl;
	cout << "Введите объём V (м^3) и массу тела m (кг) через пробел: ";
	cin >> V >> m;
	cout << "\n5) Плотность тела p = " << (double)m / V << " (кг/м^3)" << endl << endl;
	cout << "Введите числа a и b для решения линейного уравнения ax+b=0 через пробел: ";
	cin >> a >> b;
	cout << "\n6) x = " << (double)-b / a << endl << endl;
	cout << "Для нахождения расстояния d между точками A и B введите по 3 координаты (x,y,z) для каждой точки через пробел" << endl << endl;
	cout << "Координаты точки A: ";
	cin >> x1 >> y1 >> z1;
	cout << "Координаты точки B: ";
	cin >> x2 >> y2 >> z2;
	cout << "\n7) Расстояние между точками A и B: d = " << (double)sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2)) << endl << endl;
	cout << "Введите через пробел значения верхнего и нижнего основания и высоты равнобедренной трапеции для нахождения её периметра: ";
	cin >> a >> b >> h;
	double x3 = (double)(b - a) / 2, c1 = (double)sqrt(pow(h, 2) + pow(x3, 2)), P = (double)(a + b + 2 * c1);
	cout << "\n8) Периметр равнобедренной трапеции P = " << (double)P << endl << endl;
	cout << "Введите a (длину ребра куба) для нахождения его V (объёма) и S (площади боковой поверхности): ";
	cin >> a;
	cout << "\n9) а) Объём куба V = " << pow(a, 3) << endl << endl;
	cout << "   \nб) Площадь боковой поверхности куба S = " << 4 * pow(a, 2) << endl << endl;
	cout << "Введите значение для a (стороны квадрата): ";
	cin >> a;
	cout << "\n10) Периметр квадрата P = " << 4 * a << endl << endl;
	cout << "Введите значение для R (радиуса окружности): ";
	cin >> R;
	cout << "\n11) Диаметр окружности D = " << 2 * R << endl << endl;
	string name;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите своё имя: ";
	cin >> name;
	cout << "\n12) Hello, " << name << "! My name is C++." << endl << endl;
	return 0;
}