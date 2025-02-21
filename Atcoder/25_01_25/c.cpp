#include <bits/stdc++.h>

// ! 
using namespace std;
int main(){

    int row, column;
    cin >> row >> column;
    char matriz[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matriz[i][j];
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if(matriz[i][j] == '?'){
                if(matriz[i][j+1] == '#'){
                    matriz[i][j] = '#';
                }
                if(matriz[i][j-1] == '#'){
                    matriz[i][j] = '#';
                }
                if(matriz[i+1][j] == '#'){
                    matriz[i][j] = '#';
                }
                if(matriz[i-1][j] == '#'){
                    matriz[i][j] = '#';
                }
            }
        }
    }

for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if(matriz[i][j] == '?'){
                if(matriz[i][j] == '?'){
                    matriz[i][j] = '.';
                }
            }
        }
    }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < column; j++)
    //     {
    //         if(matriz[0][j]== matriz[1][j]){

    //         }
    //     }
    //     cout <<  endl;
    // }
    if(matriz[0] == matriz[1]){
        cout << "iguais" << endl;
    }


    return 0;
}