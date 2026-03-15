// FUNCTION max(a:INTEGER,b:INTEGER):INTEGER
//   IF a>b THEN
//     RETURN a
//   ELSE
//     RETURN b
//   END IF
// END FUNCTION

#include <iostream>
using namespace std;

int maxOfTwo(int a, int b) {
    return (a > b ? a : b);
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << "Greatest Number is " << maxOfTwo(x, y) << endl;
    return 0;
}
