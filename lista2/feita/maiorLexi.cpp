//* https://codeforces.com/problemset/problem/202/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    string txt;
    cin >> txt;

    string reverso = txt;
    sort(reverso.begin(), reverso.end());
    reverse(reverso.begin(),reverso.end());

    auto maior = reverso[0];
    //cout << reverso << endl;
    string nova;
    for (int i = 0; i < (int)reverso.size(); i++){
        if(reverso[i] == maior) nova.push_back(reverso[i]);
    }
    cout << nova << endl;
    return 0;
}