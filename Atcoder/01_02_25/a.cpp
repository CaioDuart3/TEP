#include <bits/stdc++.h>
using namespace std;
int main(){
    string D;
    cin >> D;

    if(D == "S") cout << "N";
    else if(D == "N") cout << "S";
    else if(D == "E") cout << "W";
    else if(D == "W") cout << "E";
    else if(D == "NE") cout << "SW";
    else if(D == "SW") cout << "NE";
    else if(D == "NW") cout << "SE";
    else if(D == "SE") cout << "NW";

    return 0;
}