// ! https://atcoder.jp/contests/abc388/tasks/abc388_c

#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    int N;
    cin >> N;
    int A[N];
    
    int x=0;
    int y=x+1; 
    int i = 0;

    while(y < N && x < N){
        if(i<N){
            cin >> A[i];
            i++;
        }
        else{
            if(A[x] <= A[y]/2){
                count++;
            }
            if(y == N-1){
                x++;
                y=x+1;
            } else {
                y++;
            }
        }
    }

    cout << count << endl;

    return 0;
}