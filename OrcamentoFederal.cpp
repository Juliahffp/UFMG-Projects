#include<iostream>

using namespace std;

class categoria {
	
	private:
	
	int code;
	double caixa;	
		
	public:
		
	// Inicializa um objeto categoria com seu código e o valor que ela deve ter em caixa para gastos com sua pasta	

	categoria( int codigo_categoria, double valor_caixa){
		
		code= codigo_categoria;
		caixa= valor_caixa;
	}
	
	// Recupera o código correspondente a uma categoria
	
	int get_recupera_codigo(){
		
		return code;		
	}
	
	// Recupera o valor em caixa de uma categoria
	
	double get_recupera_valor_caixa(){
		
		return caixa;
	}
	
	// Adiciona uma quantia ao caixa de uma categoria
	
	void adiciona_no_caixa(double valor){
		
		caixa= caixa + valor;
	}
	
	// Remove uma quantia ao caixa de uma categoria
	
	void remove_quantia(double valor){
		
		caixa= caixa-valor;
	}
	
};

class orcamento {
	
	private:
		
	categoria *saude;
	categoria *educacao;
	categoria *seguranca;
	categoria *previdencia;
	categoria *adm_publica;
	
	public:
		
	// Recebe como parâmetro o valor monetário que deve ser atribuído a aquele orçamento.
   // Este valor deve ser distribuído a cada categoria, nos percentuais descritos anteriormente.	
	
	orcamento( double impostos) {
		
		saude       = new categoria (0,(impostos*0.15));
		educacao    = new categoria (1,(impostos*0.15));
		seguranca   = new categoria (2,(impostos*0.20));
		previdencia = new categoria (3,(impostos*0.35));
		adm_publica = new categoria (4,(impostos*0.15));		
}
	
	// Reduz o valor no caixa da categoria especificada
	
	void gasto_categoria(int codigo_categoria, double valor){
		
	switch (codigo_categoria){
		
                case 0: {
                    saude->remove_quantia(valor);
                }
                break;
                case 1: {
                    educacao->remove_quantia(valor);
                }
                break;
                case 2: {
                    seguranca->remove_quantia(valor);
                }
                break;
                case 3: {
                    previdencia->remove_quantia(valor);
                }
                break;
                case 4: {
                    adm_publica->remove_quantia(valor);
                	}
             }           
       }
       
    // Retorna o valor em caixa da categoria especificada
       
    double saldo_categoria(int codigo_categoria) {
    	
    	switch (codigo_categoria){
                case 0: {
                    saude->get_recupera_valor_caixa();
                }
                break;
                case 1: {
                    educacao->get_recupera_valor_caixa();
                }
                break;
                case 2: {
                    seguranca->get_recupera_valor_caixa();
                }
                break;
                case 3: {
                    previdencia->get_recupera_valor_caixa();
                }
                break;
                case 4: {
                     adm_publica->get_recupera_valor_caixa();
    	      }
        }
  
}
      
// Retorna o ponteiro para o objeto da categoria especificada


categoria* recupera_categoria(int codigo_categoria) {

  if(codigo_categoria==0){
  	
  &saude;
  }

  if(codigo_categoria==1){
  
  &educacao;
  }
	
  if(codigo_categoria==2){
  
  &seguranca;
  }  

  if(codigo_categoria==3){
  
    &previdencia;
  }
  
 if(codigo_categoria==4){
  
   &adm_publica;
  }
 
}
	   
};


int main() {
	
  orcamento *p1;

  char test = 0;
  
  while(cin >> test) {
  	
  	
  switch (test) {
  	
  	// Para começar um novo orçamento
  	
    case 'o': {
      double valor = 0;
      cin >> valor;
     
    p1 = new orcamento(valor);
     
    }
    break;
    
    
    
    case 'g': {
      int categoria = 0;
      double valor = 0;
      cin >> categoria >> valor;
      
     p1->gasto_categoria(categoria,valor);
      
      cout << categoria << ": " << p1->saldo_categoria(categoria) << endl;
    }
    break;
    
    
    case 'p': {
      for (int categoria = 0; categoria < 5; categoria++) {
        cout << categoria << ": " << p1->saldo_categoria(categoria)  << endl;
      }
    }
    break;
    
    
    default: {
      cout << "----------" << endl;
    } break;
  }
  }
  return 0;
}