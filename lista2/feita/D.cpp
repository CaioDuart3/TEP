// * https://atcoder.jp/contests/abc198/tasks/abc198_b

#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;
    string original = n;
    reverse(n.begin() , n.end());
    if(original == n){
        cout << "Yes\n";
        return 0;
    }
    int count = 0;
    for (int i = (int) original.size()-1; i >= 0 ; i--){
        if(original[i] == '0'){
            count++;
        } else break;
    }
    for (int i = 0; i < count; i++){
        //0100
        original.insert(0, 1,'0');
        string reverso =original;
        reverse(reverso.begin(), reverso.end());
        if(reverso == original){
            cout << "Yes\n";
            return 0;
        }
    }
    
    
    cout << "No\n";
    return 0;
}