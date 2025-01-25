#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, e;
    //     5     2
    cin >> n >> e;

    string str;
    cin >> str;
    
    int ponto = count(str.begin(), str.end(), '.');

    int vazios = ponto + e;
    cout << vazios << endl;

    return 0;
}