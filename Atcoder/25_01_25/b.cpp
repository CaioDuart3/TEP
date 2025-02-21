#include <bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin >> n;
    vector <double> v(n);
    vector <double> num(n);
    for (double i = 0; i < n; i++){
        cin >> v[i];
    }

    double ratio = v[1]/v[0];
    
    num[0] = v[0];

    double elem;
    for (double i = 0; i < n-1; i++){
        elem = v[i]*ratio;
        num[i+1] = elem;
    }

    // for (double i = 0; i < (double) v.size(); i++)
    // {
    //     cout << v[i] << " -> ";
    // }
    // cout << endl;
    // for (double i = 0; i < (double) num.size(); i++)
    // {
    //     cout << num[i] << " -> ";
    // }
    
    // cout << endl;
    
    if(v == num){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}