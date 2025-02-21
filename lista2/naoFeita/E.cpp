// ! https://atcoder.jp/contests/abc202/tasks/abc202_c

#include <bits/stdc++.h> 
using namespace std;
int main(){
    int N;
    cin >> N;
    int A[N];
    int B[N];
    int C[N];
    for (int x = 0; x < N; x++){
        cin >> A[x];
    }
    for (int x = 0; x < N; x++){
        cin >> B[x];
    }
    for (int x = 0; x < N; x++){
        cin >> C[x];
    }
    int count =0;
    for (int x = 0; x < N; x++){
        for (int y = 0; y < N; y++){
            if(A[x] == B[C[y]-1]){
                count++;
            }
        }
        
    }
    cout << count << endl;
    return 0;
}