#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, T, V, litros =0;
    int vetor[100];
    int aux1=0, aux2=0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> T >> V;
        vetor[i] =T;
        litros= litros+ V;
    }
//  1 10 21

//               1
    for (int i = N-1; i > 0 ; i--)
    {
        aux1 = vetor[i] - vetor[i-1];
        aux2 += aux1;
        //11
    }
    cout << litros << endl;
    cout << aux2 << endl;
    cout << litros - aux2 << endl;
    return 0;
}
