
#include <cmath>
#include <iostream>
using namespace std;

void zadanie2();
void zadanie3();
void zadanie4a();
void zadanie4b();
void zadanie5();
void zadanie6();
void zadanie7();
void zadanie8();
void zadanie9();
void zadanie10();
void zadanie11();
void zadanie12();

int main()// 1 задание
{
	cout << "1 ""13 ""49" << endl;

	zadanie2();
	zadanie3();
	zadanie4a();
	zadanie4b();
	zadanie5();
	zadanie6();
	zadanie7();
	zadanie8();
	zadanie9();
	zadanie10();
	zadanie11();
	zadanie12();
	return 0;
}
void zadanie2()// 2 zadanie
{
	cout << "1," "13," "49" << endl;
}
void zadanie3()// 3 zadanie
{
	cout << "1  " "13  " "49" << endl;

}
void zadanie4a()//4a zadanie
{
	int x = 0;
	int a = 7;
	x = 12 * a*a + 7 * a + 12;
	cout << x << endl;
}
void zadanie4b()// 4b zadanie
{
	int y = 0;
	int x = 8;
	y = 3 * x*x*x + 4 * x*x - 11 * x + 1;
	cout << y << endl;
}
void zadanie5()// 5 zadanie
{
	int m;
	cin >> m;
	int V;
	cin >> V;
	int p = m / V;
	cout << p << endl;
}
void zadanie6()//6 zadanie
{
	int a;
	cin >> a;
	int b;
	cin >> b;
	int x = -b / a;
	cout << x << endl;
}
void zadanie7()//7 zadanie
{
	int x1;
	cin >> x1;
    int x2 = 5;
	cin >> x2;
	int y1 = 1;
	cin >> y1;
	int y2 = 4;
	cin >> y2;
	int Lx = x2 - x1;
	int Ly = y2 - y1;
	double r = sqrt(Ly*Ly + Lx*Lx);
	cout << r << endl;
}
void zadanie8()//8 zadanie
{
	int a;
	cin >> a;
	int b;
	cin >> b;
	int h;
	cin >> h;
	int S = (a + b) * h / 2;
	cout << S << endl;
}
void zadanie9()//9 zadanie
{
	int a;
	cin >> a;

	int S = 4 * a * a;
	int V = a * a * a;
	cout << S << endl;
	cout << V << endl;
}
void zadanie10()//10 zadanie
{
	int a;
	cin >> a;
	int P = 4 * a;
	cout << P << endl;
}
void zadanie11()//11 zadanie
{
	int r;
	cin >> r;
	int d = 2 * r;
	cout << d << endl;
}
void zadanie12()//12 zadanie
{
    string name;
	cin >> name;
	cout << "Hello, "<< name <<"! My name is C++." << endl;
}