#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, num,count =0;
    cin >> N;
    vector <int> vet;
    for (int i = 0; i < N; i++){
        cin >> num;
        vet.push_back(num);
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if(vet[i] != vet[j]){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
