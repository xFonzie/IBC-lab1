#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "c:";
    cin >> c;
    double d = b * b - 4 * a * c;
    if (d < 0)
        cout << "No roots" << endl;
    if (d == 0)
        cout << (double) -b / (2 * a) << endl;
    if (d > 0)
        cout << (double) (-b + sqrt(d)) / (2 * a) << ' ' <<
        (double) (-b - sqrt(d)) / (2 * a) << endl;
    return 0;
}
