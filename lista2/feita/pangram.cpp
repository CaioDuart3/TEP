#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, count=0;
    cin >> n;
    string txt;
    cin >> txt;
    for (auto &c : txt){
        c = tolower(c);
    }
    for (int i = 97; i <= 122; i++)
    {
        if((int)txt.find(i) != -1){
            count++;
        }
    }
    if(count == 26){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}