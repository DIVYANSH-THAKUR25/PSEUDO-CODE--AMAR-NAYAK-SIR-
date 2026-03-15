// FUNCTION ABSOLUTEVALUE(N:REAL):REAL
//    IF N>0 THEN
//       RETURN N
//    ELSE
//       RETURN N*-1
// END FUNCTION
// PRINT ABSOLUTEVALUE(-4)

#include <iostream>
using namespace std;

double Abs(double n) {
    if (n > 0) return n;
    else return -n;
}

int main() {
    double n;
    cin >> n;
    cout << Abs(n) << endl;
    return 0;
}
