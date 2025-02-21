//https://codeforces.com/problemset/problem/1278/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string txt1, txt2;  
    for (int i = 0; i < n; i++){
        bool flag =false;
        cin >> txt1 >> txt2;

        auto pos = txt2.find(txt1);
        if(pos != string::npos){
            cout << "YES\n";
            flag =true;
            continue;;
        }
        
        sort(txt1.begin(), txt1.end());
        while(next_permutation( txt1.begin(), txt1.end() )){
            pos = txt2.find(txt1);
            if(pos != string::npos){
                cout << "YES\n";
                flag =true;
                break;
            }
        }
        if(!flag)cout << "NO\n";
    }
    
    return 0;
}