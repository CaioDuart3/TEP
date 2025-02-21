//https://codeforces.com/problemset/problem/1015/B
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string txt, referencia;
    cin >> n >> txt >> referencia;
    
    int count = 0;
    // for (int i = 1; i < (int) txt.size(); i++){
    //     if(txt == referencia) break;
        for (int j= 1; j < (int) txt.size(); j++)
        {
            cout << txt << endl;
            if(txt == referencia) break;
            count++;
            if(txt[j-1] == referencia[j-1]) continue;
            auto aux = txt[j-1];
            txt[j-1] =  txt[j];
            txt[j] = aux;
        }
    // }
    cout << count << endl;
    return 0;
}