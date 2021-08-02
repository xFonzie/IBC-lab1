#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cout << "Type sides of the triangle:" << endl;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
        cout << "Triangle exists." << endl;
    else
        cout << "Triangle does not exists." << endl;
}