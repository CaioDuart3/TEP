#include <bits/stdc++.h>
using namespace std;


int f(int num){
    if(*typeid(num/2).name() == 'i' && num/2 != 1){
        return f(num/2);
    }
    return num;
}
int main(){
    int N, A;
    int temp = 0 ,count = 0;
    cin >> N;
    vector <int> v;
    for (int i = 0; i < N; i++)
    {
        cin >> A;
        v.push_back(A);
    }
    //  0  1
    // [4, 8]
    //    i 
    //    j
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            temp = f(v[i]+v[j]);
            if(temp == 2){
                temp--;
            }
            count += temp;
        }
    }
    cout << count << endl;
    return 0;
}