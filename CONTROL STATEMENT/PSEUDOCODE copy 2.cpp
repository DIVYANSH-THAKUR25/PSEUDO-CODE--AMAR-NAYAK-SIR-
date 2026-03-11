// Integer num
// Read num
// If num % 2 == 0 Then
//     Print "num is Even"
// Else
//     Print "num is Odd"
// EndIf
#include <iostream>
using namespace std;

int main() {
 
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is Even" << endl;
    } else {
        cout << num << " is Odd" << endl;
    }
    return 0;
}