#include <bits/stdc++.h>
using namespace std;
int main(){
    int count =0;
    string t1, t2;
    cin >> t1 >> t2;
    if(t1[0] == t2[2]){
        count++;
    }
    if(t1[1] == t2[1]){
        count++;
    }
    if(t1[2] == t2[0]){
        count++;
    }
    if(count ==3){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}