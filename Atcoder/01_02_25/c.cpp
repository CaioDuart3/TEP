#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, Q;
    cin >> N >> Q;
    int tipo, posPombo, posNinho;
    vector <int> ninho(N+1);
    int count=0;

    for (int i = 1; i < N+1; i++){
        ninho[i] = 1;
    }
    ninho[0]=0;

    for (int i = 0; i < Q; i++)
    {
        cin >> tipo;

/*
5 10 
2 
1 4 3 
1 4 5 
2 
1 3 1 
2 
1 2 3
1 2 5 
1 1 3 
2

*/
// imprime: 0, 2

//          0   1  2  3  4  5
// ninho = [0 , 1, 1, 2, -1, 2]

        if(tipo == 1){
            
            cin >> posPombo >> posNinho;
            for (int i = 0; i < count; i++)
            {
                /* code */
            }
            
            ninho[posPombo]-=1;
            ninho[posNinho]++;

        } else if( tipo == 2){
            count = 0;
            cout << "ninho na iteração: " << i << " - ";
            for (int y = 1; y < N+1 ; y++)
            {
                cout << ninho[y] << ' ';
                if(ninho[y]>1){
                    count++;
                }
            }
            cout << "\n contador: ";
            cout << count << endl;
        }
    }

    return 0;
}