#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	// 1 �������
	cout << "1) 1 13 49" << endl;
	// 2 �������
	char a;
	cout << "2) ������� ������: ";
	cin >> a;
	cout << "�����: " << "1" << a << "13" << a << "49" << endl;
	// 3 �������
	int q, w, e;
	cout << "3) ������� ������ �����: ";
	cin >> q;
	cout << "������� ������ �����: ";
	cin >> w;
	cout << "������� ������ �����: ";
	cin >> e;
	cout << "�����: " << q << "  " << w << "  " << e << endl;
	// 4 �������
	float r, res;
	cout << "4) ������� �������� �: ";
	cin >> r;
	res = 12 * pow(r,2) + 7 * r - 12;
	cout << "�����: " << res << endl;
	// 5 �������
	float n, m, res2 ;
	cout << "5) ������� ����� ����: ";
	cin >> n;
	cout << "������� ����� ����: ";
	cin >> m;
	res2 = m / n;
	cout << "�����: ��������� ����� " << res2 << endl;
	// 6 �������
	int k, l, res3;
	cout << "6) ������� ����� a: ";
	cin >> k;
	cout << "������� ����� b: ";
	cin >> l;
	res3 = -1 * l / k;
	cout << "�����: " << res3 << endl;
	// ������� 7
	float x1, x2, y1, y2, res4;
	cout << "7) ������� x ������ �����: ";
	cin >> x1;
	cout << "������� y ������ �����: ";
	cin >> y1;
	cout << "������� x ������ �����: ";
	cin >> x2;
	cout << "������� y ������ �����: ";
	cin >> y2;
	res4 = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5);
	cout << "�����: ���������� ����� ���� ����� " << res4 << endl;
	// ������� 8
	float P, a1, b1, c1;
	cout << "8) ������� ������ ��������: H = ";
	cin >> a1;
	cout << "������� ������� ���������: � = ";
	cin >> b1;
	cout << "������� ������� ���������: � = ";
	cin >> c1;
	P = b1 + c1 + pow(pow((c1 - b1), 2) / 4 + pow(a1, 2), 0.5) * 2;
	cout << "�����: �������� �������� ����� " << P << endl;
	// ������� 9
	int a3, res5, res6;
	cout << "9) ������� ����� ����� ����: ";
	cin >> a3;
	cout << "�����: ����� ����� " << pow(a3, 3) << ", � S ������� ����������� ����� " << pow(a3,2) << endl;
	// ������� 10
	int a4;
	cout << "10) ������� ������� ��������: ";
	cin >> a4;
	cout << "�����: �������� ����� " << pow(a4, 2) * 6 << endl;
	// ������� 11
	int a5;
	cout << "11) ������� ������ ����������: ";
	cin >> a5;
	cout << "�����: ������� ����� " << a5 * 2 << endl;
	// ������� 12
	string name;
	cout << "Write your name: "; cin >> name;
	cout << "Hello, " << name << "! My name is C++";

	return 0;
}




