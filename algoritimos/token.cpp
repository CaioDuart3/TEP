#include <bits/stdc++.h>
using namespace std;

vector<string> tokenrizar(const string& texto, const char* delimitador) {
    vector<string> splitado;

    // Criar uma cópia mutável da string original
    char c_texto[texto.size() + 1];
    strcpy(c_texto, texto.c_str());

    // Usar strtok para dividir a string
    char* token = strtok(c_texto, delimitador);
    while (token != nullptr) {
        splitado.push_back(token);
        token = strtok(nullptr, delimitador);
    }

    return splitado;
}

int main() {
    string texto;
    getline(cin, texto);

    vector<string> split = tokenrizar(texto, " ");

    for (int i = 0; i < (int)split.size(); i++) {
        cout << split[i] << endl;
    }

    return 0;
}
