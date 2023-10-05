

#include <iostream>
#include <math.h>

using namespace std;

void Num1 ();
void Num2 ();
void Num3 ();
void Num4 ();
void Num4b ();
void Num5 ();
void Num6 ();
void Num7 ();
void Num8 ();
void Num9 ();
void Num10 ();
void Num11 ();
void Num12 ();

int main()
    {

    //cout << "programm test" <<;

    //Num1 ();
    //Num2 ();
    //Num3 ();
    //Num4 ();
    //Num4b ();
    //Num5 ();
    //Num6 ();
    //Num7 ();
    //Num8 ();
    //Num9 ();
    //Num10 ();
    //Num11 ();
    //Num12 ();

    return 0;
    }

void Num1 ()
    {
    cout <<"1, 13, 49"<< endl;
    }

void Num2 ()
    {
    int d;

    cin >> d;
    cout <<"1, 13, "<< d <<", 49"<< endl;
    }

void Num3 ()
    {

    int a = 1;
    int b = 2;
    int c = 3;

    cout << a <<" "<< b <<" "<< c;
    }

void Num4 ()
    {
    int x;
    int a;
    cin >> a;
    x = 12*a*a + 7*a - 12;
    cout <<"x = "<< x;
    }

void Num4b ()
    {
    int y;
    int x;
    cin >> x;
    y = 3*x*x*x + 4*x*x - 11*x + 1;
    cout <<"y = "<< y;
    }

void Num5 ()
    {
    int V;
    int m;

    cin >> V;
    cin >> m;
    int p = m/V;
    cout <<"p = "<< p;
    }

void Num6 ()
    {
    double x;
    int a;
    int b;

    cin >> a;
    cin >> b;

    if (a == 0)
        {
        cout <<"a = 0"<< endl;

        return;
        }

    x = -b/a;
    cout <<"x = "<< x;
    }

void Num7 ()
    {
    int x1;
    int y1;

    int x2;
    int y2;

    cin >> x1;
    cin >> x2;
    cin >> y1;
    cin >> y2;

    int lx = x2 - x1;
    int ly = y2 - y1;

    double L = sqrt(lx*lx + ly*ly);
    cout <<"S = "<< L;
    }

void Num8 ()
    {
    int o1;
    int o2;
    int h;

    cin >> o1;
    cin >> o2;
    cin >> h;

    int l = (o2-o1)/2;
    int b = sqrt (l*l + h*h);
    int P = 2*b + o1 + o2;

    cout <<"Perimetr = "<< P;
    }

void Num9 ()
    {
    int l;

    cin >> l;

    int V = l*l*l;
    int S = 6*l*l;

    cout <<"V = "<< V <<" S = "<< S;
    }

void Num10 ()
    {
    int a;
    cin >> a;

    int p = 4*a;
    cout <<"p = "<<p;
    }

void Num11 ()
    {
    int r;
    cin >> r;

    int d = 2 * r;
    cout <<"d = "<< d;
    }

void Num12 ()
    {
    char name [20];
    cin >> name;

    cout <<"Hello, "<< name <<" !\nMy name is C++."<< endl;
    }




