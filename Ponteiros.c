#include <iostream>
#include<vector>

using namespace std;

int main(){

    // 1) Declare uma variável do tipo inteiro e atribua o valor '10'
    
    int numero=10;

    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo (aka 'nullptr')
    
    int *ponteiro = nullptr;

    // 3) Declare um vetor de inteiros e inicialize com valores de 9 a 0 (nessa ordem)

    int vetor[10]={9,8,7,6,5,4,3,2,1,0};

    // 4) Imprima o ENDEREÇO da variável declarada em (1)

     int *ptr1;
     ptr1=& numero;

     cout<<ptr1<<endl;

    // 5) Imprima o CONTEÚDO da variável declarada em (1)

      cout<<*ptr1<<endl;

    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    
     int **ppp=& ponteiro;
     
     cout<<ppp<<endl;

    // 7) Imprima o CONTEÚDO da variável declarada em (2)
    
      cout<<*ppp<<endl;

    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    
       int *ptr2=vetor;
       
       cout<<ptr2<<endl;

    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    
       int *ptr3= & vetor[0];
       
       cout<<ptr3<<endl;

    // 10) Imprima o CONTEÚDO da primeira posição da variável declarada em (3)
    
       cout<<*ptr3<<endl;

    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)

      ponteiro= & numero;

    // 12) Imprima o CONTEÚDO da variável declarada em (2)
    
      cout<<ponteiro<<endl;

    // 13) Imprima o CONTEÚDO da varíavel que é apontada por (2)
    
       cout<<*ponteiro<<endl;

    // 14) Imprima o resultado da comparação do ENDEREÇO de (1) e do CONTEÚDO de (2)
    
        cout<<"1"<<endl;

    // 15) Coloque o VALOR '5' na varíavel que é apontada pela variável de (2)
    
        numero= 5;

    // 16) Imprima o CONTEÚDO da variável declarada em (1)
    
       cout<<numero<<endl;

    // 17) Atribua o CONTEÚDO da variável de (3) à variável de (2)
    
       ponteiro = vetor;

    // 18) Imprima o CONTEÚDO da variável declarada em (2) 
    
       cout<<ponteiro<<endl;

    // 19) Imprima o CONTEÚDO da variável que é apontada pela variável de (2)
    
        cout<<*ponteiro<<endl;

    // 20) Atribua o ENDEREÇO da primeira posição de (3) à variável de (2)
    
         ponteiro = & vetor[0];

    // 21) Imprima o CONTEÚDO da variável declarada em (2) 
    
         cout<<ponteiro<<endl;

    // 22) Imprima o CONTEÚDO da variável que é apontada pela variável de (2) 
    
         cout<<*ponteiro<<endl;

    // 23) Imprima os elementos de (3) utilizando a notação [] (e.g. v[i])
    
    for(int i=0; i<9;i++){
	
    cout<<vetor[i]<<" ";
}
    cout<<vetor[9];
    cout<<endl;

    // 24) Imprima os elementos de (3) utilizando a notação ponteiro/deslocamento (e.g. *(v + i))
    
    for(int i=0; i<9;i++){
	
    
    cout<<*(vetor + i)<<" ";
}

    cout<<vetor[9];
    cout<<endl;
    
    return 0;
}