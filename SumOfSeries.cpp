// FUNCTION SUMOFSERIES(N:INTEGER):INTEGER
//   SUM FROM 1 TO N
/* FUNCTION SUMOFSERIES(N:INTEGER):INTEGER
    DECLARE SUM:INTEGER
    FOR I=1 TO N
      SUM= SUM+I
    END FOR
      RETURN SUM
   END FUNCTION
   PRINT SUM(5)
 */

#include <iostream>
using namespace std;

int Sos(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) sum += i;
    return sum;
}

int main() {
    int x;
    cin >> x;
    cout << Sos(x) << endl;
    return 0;
}
