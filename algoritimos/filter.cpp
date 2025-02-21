#include <bits/stdc++.h>
using namespace std;

string filter(const string& texto, const string& filtro){
    string aux;
    copy_if(texto.begin(), texto.end(), back_inserter(aux), [&filtro](char c){
        return filtro.find(c) != string::npos;
    });
    return aux;
}

int main(){
    string filtro;
    string texto;

    cout << "digite o filtro a ser aplicado:\n";
    getline(cin, filtro);
    cout << "digite o texto a receber o filtro:\n";
    getline(cin, texto);

    cout << filter(texto,filtro) << endl;
    return 0;
}
/*
digite o filtro a ser aplicado:
for

digite o texto a receber o filtro:
a força é foge rápido

resultado:
forforo
*/