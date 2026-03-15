// PRACTICE QUESTION CONVERSION
// FUNCTION funn(a, b, c):
//     FOR c FROM 4 TO 5:
//         a = (a + 11) + b
//         a = (c + 3) + b
//     END FOR

//     b = (5 + 10) + a
//     a = (10 + 8) + a

//     FOR c FROM 2 TO 5:
//         a = (10 + 2) & a         
//         b = (3 + 4) + a
//     END FOR

//     RETURN a + b
// END FUNCTION


//    PRINT funn(6, 9, 2)


#include <iostream>
using namespace std;

int funn(int a, int b, int c) {
    for (c = 4; c <= 5; c++) {
        a = (a + 11) + b;
        a = (c + 3) + b;
    }
    b = (5 + 10) + a;
    a = (10 + 8) + a;
    for (c = 2; c <= 5; c++) {
        a = (10 + 2) & a;
        b = (3 + 4) + a;
    }
    return a + b;
}

int main() {
    cout << funn(6, 9, 2) << endl;
    return 0;
}
