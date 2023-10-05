#include <iostream>
#include <cmath>
#include <math.h>

//1
using namespace std;
int main() {
    cout << 1 << " " << 13 << " " << 49;
    return 0;
}

//2
int main() {
    string a;
    cin >> a;
    cout << 1 << a << 13 << a << 49;
    return 0;
}

//3
int main() {
    float a, b, c;
    cin >> a >> b >> c;
    cout << a << "  " << b << "  " << c;
    return 0;
}

//4.1
int main() {
    float a, x;
    cin >> a;
    x = 12 * pow(a, 2) + 7 * a - 12;
    cout << x;
    return 0;
}

//4.2
int main() {
    float x, y;
    cin >> x;
    y = 3 * pow(x, 3) + 4 * pow(x, 2) - 11 * x + 1;
    cout << y;
    return 0;
}

//5
int main() {
    float v, m, p;
    cin >> v >> m;
    p = m / v;
    cout << p;
    return 0;
}

//6
int main() {
    float a, b, x;
    cin >> a >> b;
    x = -b / a;
    cout << x;
    return 0;
}

//7
int main() {
    float x1, y1, x2, y2, l;
    cin >> x1 >> y1 >> x2 >> y2;
    l = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    cout << l;
    return 0;
}

//8
int main() {
    float a, b, h, c, x, p;
    cin >> a >> b >> h;
    x = 0.5 * (b - a);
    c = sqrt(pow(x, 2) + pow(h, 2));
    p = a + b + 2 * c;
    cout << p;
    return 0;
}

//9
int main() {
    float a, s, v;
    cin >> a;
    s = 6 * pow(a, 2);
    v = pow(a, 3);
    cout << s << v;
    return 0;
}

//10
int main() {
    float a, p;
    cin >> a;
    p = 4 * a;
    cout << p;
    return 0;
}

//11
int main() {
    float r, d;
    cin >> r;
    d = 2 * r;
    cout << d;
    return 0;
}

//12
int main() {
    string name;
    cin >> name;
    cout << "Hello, " << name << "! My name is C++.";
    return 0;
}