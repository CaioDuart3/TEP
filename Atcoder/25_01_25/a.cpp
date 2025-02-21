#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v(5);
    for (int i = 0; i < 5; i++){
        cin >> v[i];
    }
    int count = 0;
    for (int i = 0; i < 4; i++){
        int aux =0;

        if(v[i] > v[i+1]){
            count++;
            aux = v[i]; //2
            v[i] = v[i+1]; //1
            v[i+1] =aux; //2
            // cout << "swap:" << v[i] << " " < v[i+1] << endl;
        }
        // cout << i << '-';
        // for (int y = 0; y < 5; y++)
        // {
        //     cout << v[y] << " ";
        // }
        // cout << endl;
    }
    
    // cout << "\n" << count;
    if(count == 1){ cout << "Yes";}
    else {cout << "No";}
    return 0;
}