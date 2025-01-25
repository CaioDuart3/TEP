#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 
    int t,v;
    cin >> t >> v;
    float s = v*t;
    float gasto = s/12;
    cout << fixed << setprecision(3);
    cout << gasto << endl;
    return 0;
}