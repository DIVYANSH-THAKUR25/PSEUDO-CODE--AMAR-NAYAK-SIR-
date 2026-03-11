// Integer num1
// Integer num2
// Read num1
// Read num2
// If num1 > num2 Then
//     Print "num1 is Greater"
// ElseIf num2 > num1 Then
//     Print "num2 is Greater"
// Else
//     Print "Both are equal"
// EndIf
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " is Greater" << endl;
    } 
    else if (num2 > num1) {
        cout << num2 << " is Greater" << endl;
    } 
    else {
        cout << "Both numbers are equal" << endl;
    }

    return 0;
}