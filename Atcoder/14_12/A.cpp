#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    char c1, c2;
    cin >> N >> c1 >> c2;
    string txt;
    cin >> txt;

    for(int i = 0; i < N; i++){
        if(txt[i] != c1){
            txt[i] = c2;
        }
    }
    cout << txt << endl;

    return 0;
}