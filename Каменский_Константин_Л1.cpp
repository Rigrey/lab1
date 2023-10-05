#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int x(int a){
	return 12 * a * a + 7 * a - 12;
}
int y(int x){
	return 3 * x * x * x + 4 * x * x - 11 * x + 1;
}

int main(){
	setlocale(LC_ALL,"RUS");
	
	cout << "The first exercise:"<< endl;;
	cout <<"1"<<" "<<"13"<<" "<<"49"<< endl; // 1 exercise
	
	cout << "Second exercise:" << endl; // 2 exercise
	cout << "¬ведите символы:" << endl;
	char a,b;
	
	cin >> a >> b;
	cout <<"1"<<a<<"13"<<b<<"49"<<endl;
	cout<<"\n";
	
	cout<<"Third exercise"<<endl; // 3 exercise 
	int a1,a2,a3;
	cout<<"¬ведите три числа:"<<endl;
	cin >>a1>>a2>>a3;
	cout<<a1<<"  "<<a2<<"  "<<a3<<"  "<<endl;	
	
	cout << "Fourth exercise" << endl; // 4 
	cout <<"¬ведите а:";
	int k100;
	cin >>k100;
	cout << x(k100)<< endl;
	cout <<"¬ведите x:" << endl;
	int k101;
	cin >> k101 ;
	cout << y(k101)<< endl;

	cout << "Fifth exercise" << endl; // 5
	float V, m;
	cout << "¬ведите объем (метры в кубе) и массу тела (кг):"<< " ";
	cin >> V >> m;
	cout << m / V << endl;	

	cout << "Sixth exercise"<< endl; // 6
	cout << "¬ведите числа a и b дл€ решени€ уровнени€ ax + b = 0 (где a не равно 0)"<< endl;	
	float a7, b8;
	cin >> a7 >> b8;
	cout << -b8/a7 << endl;

	cout << "Seventh exercise" << endl; // 7
	cout << "¬ведите координаты двух точек на плоскости:"<< endl;
	float x1,x2,y1,y2;
	cout <<"x1 , y1:"<<" ";
	cin >> x1 >> y1;
	cout <<"x2 , y2:"<<" ";
	cin >> x2 >> y2;
	cout << "¬аше рассто€ние:"<< sqrt((x1-x2)*(x1-x2) + (y1 - y2) * (y1 - y2)) << endl;

	cout << "Eighth exercise" << endl; // 8
	double a10, b10, c10, d10, p10, h10;
    cout << "¬ведите размер нижнего основани€ (м)";
    cin >> a10;
    cout << "¬ведите размер верхнего основани€ (м)";
    cin >> b10;
    cout << "¬ведите размер высоты (м)";
    cin >> h10;
    d10 = abs(a10 - b10) / 2;
    c10 = sqrt(h10*h10 + d10*d10);
    p10 = 2 * c10 + a10 + b10;
    cout << "ѕериметр равен:" << "  " << p10<< endl;

	cout << "Ninth exercise:" << endl;//9
	cout << "¬ведите длину куба:" << endl;
	float A;
	cin >> A;
	cout << "¬аш объем:"<< " "<< A * A * A<<"\n"<<"ѕлощадь боковой поверхности:"<< " "<<4 * A * A << endl;

	cout << "Tenth exercise" << endl; //10
	cout << "¬ведите сторону квадрата:";
	float k;
	cin >> k;
	cout << "¬аш периметр:" << " " << 4 * k <<endl;

 	cout << "Eleventh exercise" << endl; // 11
 	cout << "¬ведите радиус окружности:";
 	float r;
 	cin >> r;
 	cout << "¬аш диаметр:"<< " " << r * 2<< endl ;

	cout << "Twelfth exercise" << endl; // 12
	 	
 	cout << "¬ведите ваше им€:" << endl;
 	
 	char name[100];  
  
	cin >> name;
	cout <<"Hello ,"<<name<<"!"<<" My name is C++.";
 	
	return 0;
}





















