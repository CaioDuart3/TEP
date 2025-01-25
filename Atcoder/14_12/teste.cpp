#include <bits/stdc++.h>
using namespace std;
int main(){
    int inteiro = 2;
    float flutuante =3.14;
    char carac = 'c';
    string txt ="ola";

    cout << typeid(inteiro).name() << " - " << inteiro << endl;
    cout << typeid(flutuante).name() << " - " << flutuante << endl;
    cout << typeid(carac).name() << " - " << carac << endl;
    cout << typeid(txt).name() << " - " << txt << endl;
    return 0; 
}