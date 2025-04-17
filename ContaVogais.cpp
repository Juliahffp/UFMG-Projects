#include <iostream>
#include <map>

//O map é uma biblioteca de associação,cada elemento possui um valor-chave e um valor mapeado

using namespace std;

int main() {
	
    string palavra;
  
    cin >> palavra;
    
    
//Neste caso a **chave será do tipo char** e o **valor relacionado a chave será int** e o ** nome do conteiner será cont
// O interator é um mecanismo usado para andar, elemento por elemento, por uma coleção de dados

    map<char,int> letracont;
    map<char, int>::iterator it ;
    
    for ( int i=0; i <palavra.size(); i++){
	
    // o vetor vai percorrer todas as letras da string palavra e vai pegar a letra da string e associar a ela um valor que vai ser incrementado se ela se repetir 
    
        letracont[palavra[i]]++;
       
}

  //begin()- Retorna ao interator o primeiro membro do conjunto letracont
 //end()- Retorna um iterador para o elemento teórico que segue o último elemento no mapa

    for (it = letracont.begin(); it != letracont.end(); ++it){
	
    // o first imprime a chave, o sencond imprime o valor
    
        cout << it->first << " " << it->second << endl;
}
    return 0;
}
