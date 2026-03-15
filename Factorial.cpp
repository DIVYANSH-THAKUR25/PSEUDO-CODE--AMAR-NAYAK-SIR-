// FUNCTION FACTORIAL(N:INTEGER):INTEGER
//   DECLARE FACT:INTEGER
//   SET FACT=1
//   FOR I IN N TO 1 STEP -1
//      FACT = FACT * I
//   END FOR
//   RETURN FACT
// END FUNCTION

#include <iostream>
using namespace std;

long factor(int n) {
    long fact = 1;
    for (int i = n; i > 1; i--) {
        fact *= i;
    }
    return fact;
}

int main() {
    int x;
    cin >> x;
    cout << factor(x) << endl;
    return 0;
}
