// String UID, pass
// Read UID, pass
// If UID == "tit" Then
//     If pass == "tit" Then
//         Print "Valid"
//     Else
//         Print "Invalid password"
//     EndIf
// Else
//     Print "Invalid UID"
// EndIf

#include <iostream>
#include <string>
using namespace std;
int main() {
    string UID, pass;
    cout << "UID: "; cin >> UID;
    cout << "Pass: "; cin >> pass;

    if (UID == "tit") {
        if (pass == "tit") {
            cout << "Login Successful" << endl;
        } else {
            cout << "Invalid password" << endl;
        }
    } else {
        cout << "Invalid UID" << endl;
    }
    return 0;
}