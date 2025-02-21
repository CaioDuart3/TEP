#include <bits/stdc++.h>
using namespace std;

map<char,int> histogram(const string &s){
    map<char,int> h;
    for (auto c:s){
        ++h[c];
    }
    return h;
}

int main(){
    int N, count=0;
    string texto;
    cin >> N;
    vector <string> textos;
    for (int i = 0; i < N; i++){
        cin >> texto;
        textos.push_back(texto);
    }
    for (int i=0; i < (int)textos.size(); i++){
        for(int j=i+1; j < (int)textos.size() ;j++){
            if(histogram(textos[i]) == histogram(textos[j])){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
