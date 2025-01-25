#include <bits/stdc++.h>
using namespace std;

void tokenrizar(string &texto, const char *delimitador){
    char *c_texto = &texto[0];

    char *token = strtok(c_texto, delimitador);

    while (token != nullptr){
        cout << token << endl;
        token = strtok(nullptr,delimitador);
    }
}

int main(){
    string texto;
    getline(cin,texto);
    tokenrizar(texto, " ");
    return 0;
}