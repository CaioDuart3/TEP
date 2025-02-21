#include <bits/stdc++.h>
using namespace std;
int main(){
    string texto;
    cin >> texto;
    
    // 123.456.789-10
    if(regex_match(texto, regex("([0-9]{3}[.]){2}[0-9]{3}[-][0-9]{2}"))){
        cout << "OK!" << endl;
    } else {
        cout << "ERRADO" << endl;
    }
    return 0;
}
/*
[az] -> a ou z 
[a-z] -> a até z
[a][z] -> a e z (juntos) ex: 'az' 

[a]{q} -> onde a ocorre q incidencias ex: [b]{3}: "bbb"
[a]+ -> onde a ocorre 1 ou mais incidencias ex: [b]+: "b", "bb" , ... 
[a]* -> onde a ocorre 0 ou mais incidencias ex: [b]*: "", "b", "bb" , ... 

[a-z] {q} -> onde ocorre q elementos do intervalo ex: [a-f]{3}: "afd"
[a-z]+ -> onde ocorre 1 ou mais elementos do intervalo
[a-z]* -> onde ocorre 0 ou mais elementos do intervalo

$ -> busca de fim até o inicio
^ -> busca do inicio até o fim
^[ab]$ -> busca exatamente por ab, igual ao regex_match que dá true somente quando é igual.

() -> faz bloco

regex_match, funciona concatenando , então [0-9]{3}[-][0-9]{3}, vai aceitar somente casos como "123-123"
*/ 
