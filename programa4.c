#include<stdio.h>

explode(Char){

}


// Funcao que retorna o incremento de posicao da String1 e Imprime caso a String 2 possua uma string igual
// Caso o retorno seja == 0 não possui
void contaElementosIguaisSeguidos(char* String1,char *String2){
	int i ;
	int flag ;
	int j ;
	int k ;
	char auxiliarParaPrintar[21];
	int base1=0;
	int tamanhoPalavra = 0;
	while(String1[i] != '\0'){
		i = base1;
		j =  0;
		k = 0;
		flag = 0;
		while( (String1[i] != ' ')&&(String1[i] != '\0')){
			auxiliarParaPrintar[i] = String1[i];					// FINALIZA A FORMATACAO DA STRING SO PARA PRINTAR
			i++;
		}
		auxiliarParaPrintar[i] = '\0';
		tamanhoPalavra = i;
		i= 0;
		while(String2[j]!= '\0'){
			if(String1[i] == String2[j] ){ 						// CASO OS DOIS CHARS SEJAM IGUAIS
				i++;
				j++;
				k++;
			}
			else if(String1[i] == '\0' || String1[i] == ' '){ 	// CASO A STRING1 ACABE A PALAVRA QUE COMECA EM BASE
				flag = 1;
				j++;
			}
			else if(i != base1){									// CASO NAO SEJA MAIS DO PRIMEIRO TESTE, VOLTA PARA A PRIMEIRA LETRA PARA TESTAR TUDO DENOVO
				i = base1;
				k = 0;
			}
			else{												// CASO AINDA NAO TENHA ENCONTRADO O PRIMEIRO CHAR IGUAL
				j++;
			}
			printf("\n\ts1\ts2\ti\tj");
			printf("\n\t%c\t%c\t%d\t%d",String1[i],String2[j],i,j);
		}
		//CASO CRITICO
		if((String1[i] == '\0' || String1[i] == ' ') && String2[j]== '\0' && (   i - base1 == tamanhoPalavra)){
			flag = 1;
		}
		if(flag == 1){
			printf("Achamos essa string Repetida:%s",auxiliarParaPrintar);
			i = base1;
		}
		base1 = tamanhoPalavra+ 1;	
		printf("Cabo um loop  base1 = %d",base1);
	}
	return;
}


int main(){
	char String1[21] = "OOOOOPA OPA" ;
	char String2[21] = "PQPQ OPA";
	contaElementosIguaisSeguidos(String1,String2);
	printf("\n\t resultado ");
	return 0 ;
}
