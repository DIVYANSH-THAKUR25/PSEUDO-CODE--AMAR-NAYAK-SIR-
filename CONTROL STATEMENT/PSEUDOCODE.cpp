// Integer num
// Read num
// If numb > 0 Then
//     Print "num is Positive"
// ElseIf num < 0 Then
//     Print "num is Negative"
// Else
//     Print "num is Zero"
// EndIf
#include <iostream>
using namespace std;

int main() {
    int num;

   
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << num << " is Positive" << endl;
    } 
    else if (num < 0) {
        cout << num << " is Negative" << endl;
    } 
    else {
        cout << num << " is Zero" << endl;
    }

    return 0;
}
