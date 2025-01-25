// * https://atcoder.jp/contests/abc388/tasks/abc388_b
#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, D, T, L;
    cin >> N >> D;

    int r;
    int vT[N], vL[N], vM[D];
    for (int i = 0; i < N; i++)
    {
        cin >> T >> L;
        vT[i]= T;
        vL[i]= L;
    }
    
    int maior =0;
    
        for (int i = 1; i <= D; i++)
        {
            for (int j = 0; j < N; j++)
            {
                r = vT[j] * (vL[j]+i);
                if(maior < r){
                    maior = r;
                    vM[i-1] = maior;//12
                }
            }
        }
        for (int i = 0; i < D; i++)
        {
            cout << vM[i]<< endl;
        }
        
    
    
    
    return 0;
}