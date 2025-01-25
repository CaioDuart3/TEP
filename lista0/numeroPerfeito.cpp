#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n; //3
    int entrada;
    int soma =0;
    // 6 5 8
    for (int i = 0; i < n; i++)
    {   
        int count =0;
        cin >> entrada;
        for (int x = 0; x < entrada; x++)
        {
            soma+=x;
            if(entrada == soma){
                count =1 ;
            }
        }
        if (count == 1 )
        {
            cout << entrada << " eh perfeito\n";
        }
        else{
            cout << entrada <<" nao eh perfeito\n";
        }
    }

}