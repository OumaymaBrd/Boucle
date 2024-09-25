#include<stdio.h>
#include<stdlib.h>

int main(){
	
	printf("\t\t Programme Afiiche La Table de Multiplication\n\n");
	
	//declaration des variables
	int p;
	//saisir par l'utilisateur
	printf("Donner moi un Entier: ");scanf("%d",&p);
	//traitement avec l'affichage
	printf("\n\nLe Tableaux de Multiplication de %d est : \n\n",p);
	for(int i=0;i<=10;i++) {
		printf("%d * %d= %d\n",p,i,p*i);
	}
	
	
}
