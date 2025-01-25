#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int maior = 0;
    int segMaior = 0;
    int menor = 0;
    // 
    if (a < b && a < c && b< c){
        menor = a;
        segMaior = b;
        maior = c;
    }
    else if (a < b && a < c && c < b){
        menor = a;
        segMaior = c;
        maior = b;
    }
    else if(b < a && b < c && c < a){
        menor = b;
        segMaior =c;
        maior = a;
    }
    else if(b < a && b < c && a < c){
        menor = b;
        segMaior =a;
        maior = c;
    }
    else if(c<a && c< b &&  a<b){
        menor = c;
        segMaior = a;
        maior = b;
    }
    else if(c<a && c< b && b < a){
        menor = c;
        segMaior = b;
        maior = a;
    }
    cout << menor << endl << segMaior << endl << maior << endl << endl << a << endl << b <<endl << c;
}