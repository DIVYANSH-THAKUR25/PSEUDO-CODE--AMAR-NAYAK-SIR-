// Integer x
// Integer y
// Read x
// Read y

// If x > 0 and y > 0 Then
//     Print "First Quadrant"
// ElseIf x < 0 and y > 0 Then
//     Print "Second Quadrant"
// ElseIf x < 0 and y < 0 Then
//     Print "Third Quadrant"
// ElseIf x > 0 and y < 0 Then
//     Print "Fourth Quadrant"
// ElseIf x == 0 and y == 0 Then
//     Print "Origin"
// Else
//     Print "On the Axis"
// EndIf

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter coordinate x: ";
    cin >> x;
    cout << "Enter coordinate y: ";
    cin >> y;
    if (x > 0 && y > 0) {
        cout << "Point (" << x << "," << y << ") is in the First Quadrant." << endl;
    } 
    else if (x < 0 && y > 0) {
        cout << "Point (" << x << "," << y << ") is in the Second Quadrant." << endl;
    } 
    else if (x < 0 && y < 0) {
        cout << "Point (" << x << "," << y << ") is in the Third Quadrant." << endl;
    } 
    else if (x > 0 && y < 0) {
        cout << "Point (" << x << "," << y << ") is in the Fourth Quadrant." << endl;
    } 
    else if (x == 0 && y == 0) {
        cout << "Point is at the Origin." << endl;
    } 
    else {
        cout << "Point lies on the X or Y axis." << endl;
    }

    return 0;
}