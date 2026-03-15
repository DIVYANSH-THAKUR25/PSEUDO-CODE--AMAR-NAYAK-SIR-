// FUNCTION aot(b:REAL, h:REAL):REAL -> area = 0.5*b*h

#include <iostream>
using namespace std;

double aot(double b, double h) {
    return 0.5 * b * h;
}

int main() {
    double x, y;
    cin >> x >> y;
    cout << aot(x, y) << endl;
    return 0;
}
