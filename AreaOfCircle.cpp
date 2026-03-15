// FUNCTION aoc(rad:REAL):REAL -> area = pi * r^2

#include <iostream>
using namespace std;

double aoc(double rad) {
    return 3.14 * rad * rad;
}

int main() {
    double x;
    cin >> x;
    cout << aoc(x) << endl;
    return 0;
}
