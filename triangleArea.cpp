#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, x2, x3, y1, y2, y3;
    cout << "Type points coordinates:" << endl;

    cout << "x1:";
    cin >> x1;

    cout << "y1:";
    cin >> y1;

    cout << "x2:";
    cin >> x2;

    cout << "y2:";
    cin >> y2;

    cout << "x3:";
    cin >> x3;

    cout << "y3:";
    cin >> y3;

    double a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)),
            b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)),
            c = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    cout << a << ' ' << b << ' ' << c << endl;
    if (a + b > c && a + c > b && b + c > a)
    {
        double p = (a + b + c) / 2;
        double area = sqrt(p * (p - a)  * (p - b) * (p - c));
        cout << "The area is " << area << endl;
    }
    else
        cout << "The triangle does not exists." << endl;
}