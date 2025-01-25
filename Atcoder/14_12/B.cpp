#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,R;
    int div, pts;

    cin >> N >> R;
    for (int i = 0; i < N; i++){
        cin >> div >> pts;
        if(div == 1 && R >= 1600 && R <= 2799){
            R+= pts;
        } else if(div == 2 && R >= 1200 && R <=  2399){
            R+= pts;
        }
    }
    cout << R << endl;
    
    return 0;
}