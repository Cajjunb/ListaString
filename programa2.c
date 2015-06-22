#include<stdio.h>

int retornaNota(char *gabarito, char* resposta){
	int i ;
	int nota = 0;
	for(i = 0; i < 10; i++){
		if( gabarito[i] == resposta[i])
			nota++;
	}
	return nota;
}


int main(){

	int alunos= 0 ,i,j, notamax= 0, notaaux;
	char Resposta[10];
	char Gabarito[10];

	printf("\n\t Digite o Gabarito:\t");
	scanf("%s%*c",Gabarito);

	printf("\n\t Digite o numero de alunos:\t");
	scanf("%d%*c",&alunos);

	for(i=0;i < alunos; i++){
		printf("\n\t Digite a resposta do aluno seguinte:\t");
		scanf("%s%*c",Resposta);
		notaaux = retornaNota(Gabarito,Resposta);
		if(notamax < notaaux)
			notamax = notaaux;
	}

	printf("\n\t Maior nota = %d", notamax);

	return 0 ;
}