#include <bits/stdc++.h>
#include <map>

/* objetivo: retornar quantidade de incidencias do caracter em uma string*/


using namespace std;

//função que retorna um map

//   recebe por referência uma string
map<char,int> histogram(const string& s){
    // cria um string vazia
        map <char, int> h;
    //ou cria e conta ou acessa e conta o caracter
        for (auto c:s)
        {
            ++h[c];
        }
    // retorna um map com a quantidade de incidencias de cada caracter.
        return h;
}

int main(){
    string txt = "ola mundo";
    auto mp = histogram(txt);
    for(auto x:mp){
        cout << x.first << " - " << x.second << endl;
    }
    return 0;
}

/*imprime:
' ' - 1
'a' - 1
'd' - 1
'l' - 1
'm' - 1
'n' - 1
'o' - 2
'u' - 1
*/
