// * diminuir complexidade de código

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0;
    string texto;
    vector <string> textos;

    cin >> n;
    
    for(int x = 0; x < n; x++){
        cin >> texto;
        sort(texto.begin(), texto.end()); //O(nlogn)
        textos.push_back(texto); 
    }
    
    for(int i = 0; i < n; i++){ // O (n²)
        for(int j = i+1; j< n;j++ ){
            if(textos[i] == textos[j]){
                count++;
            }
        }
    }
    cout << count <<endl;
    return 0; 
}


// * feito na mão:

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, count=0;
//     string texto;
//     vector <string> textos;
//     char aux;

//     cin >> n;
    
//     for(int x = 0; x < n; x++){
//         cin >> texto;
//         int tam = texto.size();

//         for(int i = 1; i<tam;i++){ //insertion sort O(n²)
//             for (int j = i; j > 0; j--){
//                 if(texto[j] < texto[j-1]){
//                     aux = texto[j];
//                     texto[j] = texto[j-1];
//                     texto[j-1] = aux;
//                 }
//             }
//         }
//         textos.push_back(texto);
//     }
//     for(int i = 0; i < n; i++){
//         for(int j = i+1; j< n;j++ ){
//             if(textos[i] == textos[j]){
//                 count++;
//             }
//         }
//     }
//     cout << count <<endl;
//     return 0; 
// }
