// Integer CD, CM, PM, DBMS, ML, sum
// Float per

// Read CD, CM, PM, DBMS, ML
// sum = CD + CM + PM + DBMS + ML
// per = sum / 5

// If per >= 95 Then
//     Print "Grade A+"
// ElseIf per >= 90 Then
//     Print "Grade A"
// ElseIf per >= 85 Then
//     Print "Grade B+"
// ElseIf per >= 80 Then
//     Print "Grade B"
// ElseIf per >= 75 Then
//     Print "Grade C+"
// ElseIf per >= 70 Then
//     Print "Grade C"
// ElseIf per >= 65 Then
//     Print "Grade D+"
// ElseIf per >= 60 Then
//     Print "Grade D"
// Else
//     Print "Fail"
// EndIf

#include <iostream>
using namespace std;

int main() {
    int CD, CM, PM, DBMS, ML, sum;
    float per;

    cout << "Enter marks for 5 subjects: ";
    cin >> CD >> CM >> PM >> DBMS >> ML;

    sum = CD + CM + PM + DBMS + ML;
    per = sum / 5.0;

    if (per >= 95)
     cout << "Grade A+" << endl;

    else if (per >= 90)
     cout << "Grade A" << endl;
     else if (per >= 85) 
    cout << "Grade B+" << endl;
    else if (per >= 80) 
    cout << "Grade B" << endl;
    else if (per >= 75) 
    cout << "Grade C+" << endl;
    else if (per >= 70)
     cout << "Grade C" << endl;
    else if (per >= 65)
     cout << "Grade D+" << endl;
    else if (per >= 60)
     cout << "Grade D" << endl;
    else 
    cout << "Fail" << endl;

    return 0;
}