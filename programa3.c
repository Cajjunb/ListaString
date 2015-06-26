#include<stdio.h>

void shiftEsquerda(char* String,int base,int vezes){
	int i;
	for( ; vezes != 0; vezes-- ){
		i = base ;
		while(String[i] != '\0'){
			String[i] = String[i+1];
			i++;
		}
	}
}

int contaElementosIguaisSeguidos(char* String,int base){
	int i = base;
	int count = 0 ;
	while(String[i] != '\0'&& String[i] == String[i+1]){
		i++;
		count++;
	}
	return count;
}


char intToChar1Digito(int num){
	return (char) (num + '0') ;   // 48 eh o caracter zero na tabela ascii 
}



void compactaString(char *String){
	int i ;
	int numRepetidos= 0;
	while(String[i]!='\0'){
		numRepetidos = contaElementosIguaisSeguidos(String,i);
		if(numRepetidos > 0){
			shiftEsquerda(String,i, numRepetidos- 1);  // -1 porque para nao apagar o formato numChar
			String[i] = intToChar1Digito(numRepetidos+1); // COLOCA O NUMERAL NA STRING
		}
		else
			i++;
	}
}



int main(){
	char String[50] = "AAABCCCCCBBBCCAAA";
	int i = 0;
	printf("%s\n", String);
	while( String[i] != '\0'){
		compactaString(String);
		i++;
	}
	printf("%s\n", String);

}