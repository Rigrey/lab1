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
	cout << "������� ����� ������: ";
	cin >> n;
	cout <<"\n2) " << "1" << n << "13" << n << "49" << endl << endl;
	cout << "������� 3 ����� ����� ����� ������: ";
	cin >> b >> c >> d;
	cout << "\n3) " << b <<"  " << c << "  " << d << endl << endl;
	cout << "������� �������� a ��� ������� x = 12a^2 + 7a - 12: ";
	cin >> a;
	cout << "\n4) �) x = " << 12*pow(a,2) + 7*a - 12 << endl << endl;
	cout << "������� �������� x ��� ������� y = 3x^3 + 4x^2 - 11x + 1: ";
	cin >> x; 
	cout << "   \n�) y = " << 3 * pow(x, 3) + 4 * pow(x, 2) - 11 * x + 1 << endl << endl;
	cout << "������� ����� V (�^3) � ����� ���� m (��) ����� ������: ";
	cin >> V >> m;
	cout << "\n5) ��������� ���� p = " << (double)m / V << " (��/�^3)" << endl << endl;
	cout << "������� ����� a � b ��� ������� ��������� ��������� ax+b=0 ����� ������: ";
	cin >> a >> b;
	cout << "\n6) x = " << (double)-b / a << endl << endl;
	cout << "��� ���������� ���������� d ����� ������� A � B ������� �� 3 ���������� (x,y,z) ��� ������ ����� ����� ������" << endl << endl;
	cout << "���������� ����� A: ";
	cin >> x1 >> y1 >> z1;
	cout << "���������� ����� B: ";
	cin >> x2 >> y2 >> z2;
	cout << "\n7) ���������� ����� ������� A � B: d = " << (double)sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2)) << endl << endl;
	cout << "������� ����� ������ �������� �������� � ������� ��������� � ������ �������������� �������� ��� ���������� � ���������: ";
	cin >> a >> b >> h;
	double x3 = (double)(b - a) / 2, c1 = (double)sqrt(pow(h, 2) + pow(x3, 2)), P = (double)(a + b + 2 * c1);
	cout << "\n8) �������� �������������� �������� P = " << (double)P << endl << endl;
	cout << "������� a (����� ����� ����) ��� ���������� ��� V (������) � S (������� ������� �����������): ";
	cin >> a;
	cout << "\n9) �) ����� ���� V = " << pow(a, 3) << endl << endl;
	cout << "   \n�) ������� ������� ����������� ���� S = " << 4 * pow(a, 2) << endl << endl;
	cout << "������� �������� ��� a (������� ��������): ";
	cin >> a;
	cout << "\n10) �������� �������� P = " << 4 * a << endl << endl;
	cout << "������� �������� ��� R (������� ����������): ";
	cin >> R;
	cout << "\n11) ������� ���������� D = " << 2 * R << endl << endl;
	string name;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������� ��� ���: ";
	cin >> name;
	cout << "\n12) Hello, " << name << "! My name is C++." << endl << endl;
	return 0;
}