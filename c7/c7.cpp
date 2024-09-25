#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	printf("\t\t Inversion d'un Entier\n\n");
	
	//declaration 
	char entier[15];
	//saisir
	printf("donner moi un entier: "); scanf("%s",entier);
	
	//affichage inverse 
	printf("\n ordre inverse est : ");
	for(int i=strlen(entier);i>=0;i--) printf("%c",entier[i]);
}

