#include <bits/stdc++.h>
using namespace std;

string smap(const string& strOriginal, const function<char(char)>& f){
    string strFormatada;
    for (auto caracter: strOriginal){
        strFormatada.push_back(f(caracter));
    }
    return strFormatada;
}

int main(){
    string texto;
    getline(cin, texto);
    cout << smap(texto, [](char c){return (char) toupper(c);}) << endl;
    return 0;
}