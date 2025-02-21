// * https://codeforces.com/problemset/problem/8/A

#include <bits/stdc++.h>
using namespace std;

bool checar_sequencia(string caminho, string primeiro, string segundo){
    size_t pos1 = caminho.find(primeiro);
    if(pos1 == string::npos) return false;

    size_t pos2 = caminho.find(segundo, pos1 + primeiro.size());
    return pos2 != string::npos;
}


int main(){
    string caminho, A, B; 
    cin >> caminho >> A >> B;
    bool forward = checar_sequencia(caminho,A,B);

    reverse(caminho.begin(), caminho.end());
    bool backward = checar_sequencia(caminho,A,B);

    if(forward and backward) cout << "both\n";
    else if(forward) cout << "forward\n";
    else if(backward) cout << "backward\n";
    else cout << "fantasy\n";
    return 0;
}