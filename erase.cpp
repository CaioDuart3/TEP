#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> num;
    num.push_back(1);
    num.push_back(5);
    num.push_back(4);
    num.push_back(2);
    cout << "antes:\n";
    for (int i = 0; i < (int)num.size(); i++){
        cout << i << " - " << num[i] << endl;
    }
    
    num.clear(  );

    cout << "depois:\n";
    for (int i = 0; i < (int)num.size(); i++){
        cout << i << " - " << num[i] << endl;
    }

    cout << "fim\n";
    if(num.empty()){
        cout << "vazio\n";
    } else {
        cout << "cheio\n";
    }
    return 0;
}