// FUNCTION REVERSE(N:INTEGER):INTEGER
//   RETURN REVERSED DIGITS

#include <iostream>
using namespace std;

int rev(int n) {
    int b = 0;
    while (n > 0) {
        int a = n % 10;
        n /= 10;
        b = b * 10 + a;
    }
    return b;
}

int main() {
    int x;
    cin >> x;
    cout << rev(x) << endl;
    return 0;
}
