#include<stdio.h>

void concatenaString(char* string1, char* string2, char* stringConcatenada){
	int i = 0;
	int j = 0;
	while(string1[i] != '\0'){
		stringConcatenada[i] = string1[i];
		i++ ;
	}
	j = 0;
	while(string2[j] != '\0'){
		stringConcatenada[i] = string2[j];
		j++;
		i++;
	}
	stringConcatenada[i] = '\0';
	return;
}

int main (){
	
	char string1[21];
	char string2[21];
	char stringConcatenada[41];

	printf("\n\t Digite uma string:");
	scanf("%[^\n]%*c",string1);
	printf("\n\t Digite uma string:");
	scanf("%[^\n]%*c",string2);
	
	concatenaString(string1,string2,stringConcatenada); 

	printf("\n\tResultado = %s",stringConcatenada);

	return 0 ;
}