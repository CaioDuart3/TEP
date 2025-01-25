#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;

    vector<int> nivelPessoa(n);
    vector<int> nivelSushi(m);

    for (int i = 0; i < n; i++){
        cin >> nivelPessoa[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> nivelSushi[j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(nivelSushi[j] >= nivelPessoa[i]){
                cout << i+1 << endl;
                nivelPessoa[j] = 0;
            }
        }
        
    }
    
}