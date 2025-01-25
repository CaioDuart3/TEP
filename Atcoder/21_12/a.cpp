#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cin >> n1 >> n2>> n3;
    int n1n2 = n1 + n2; //11
    int n1n3 = n1 + n3; // 8
    int n2n3 = n2 + n3; // 13
    int count = 0;
    if(n1n2 == n1n3){
        count+=2;
    }
    if(n1n2 == n2n3){
        count+=2;
    }
    if(n1n3 == n2n3){
        count+=2;
    }
    if(n1n2 == n1 || n1n2 == n2 || n1n2 == n3  ){
        count+=2;
    }
    if(n2n3 == n1 || n2n3 == n2 || n2n3 == n3 ){
        count+=2;
    }
    if(n1n3 == n1 || n1n3 == n2 || n1n3 == n3){
        count+=2;
    }
    if(count >1){
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}

// 1 2 3
// x x      y y
// x   x    y   y 
//   x x      y y