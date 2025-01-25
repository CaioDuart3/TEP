#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, E;
    cin >> N >> E;
    string str;
    cin >> str;
    int pos = str.rfind('@'); //encontra o ultimo caracter que contem '@'
    
    for (int i = pos; i >= 0 && E != 0; i--)
    {
        if( str[i] == '@'){
            str[i] = '.';
            E--;
        }
    }
    cout << str << endl;
    return 0;
}