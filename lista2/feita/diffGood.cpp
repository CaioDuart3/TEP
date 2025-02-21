// * https://codeforces.com/problemset/problem/672/B
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    string txt;
    cin >> n >> txt;
    sort(txt.begin(), txt.end());
    int count =0;
    

    for (int i = 1; i < (int)txt.size(); i++){
        if(txt[i-1] == txt[i]){
            count++;
        }
    }
    //se o contador alcançou 26 não mais oq substituir de caracter e se tem mais de 26 letras, também não há oq substituir
    if(count >= 26 or n >26){
        cout << -1 << endl;
    } else {
        cout << count << endl;
    }
    return 0;
}