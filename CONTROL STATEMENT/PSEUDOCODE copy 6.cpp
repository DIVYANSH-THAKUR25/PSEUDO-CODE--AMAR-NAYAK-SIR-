// Integer x
// Read x
// Switch x
//     Case 1: Print "1"
//     Case 2: Print "2"
//     Case 3: Print "3"
//     Case 4: Print "4"
//     Default: Print "wrong"
// EndSwitch

#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter number (1-4): ";
    cin >> x;

    switch (x) {
        case 1: cout << "1" << endl; break;
        case 2: cout << "2" << endl; break;
        case 3: cout << "3" << endl; break;
        case 4: cout << "4" << endl; break;
        default: cout << "wrong" << endl; break;
    }
    return 0;
}