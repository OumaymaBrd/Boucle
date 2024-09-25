#include<stdio.h>
#include<stdlib.h>
int main(){
	
	printf("\t\t Programme Calcul Somme des N Nombres\n\n");
	
	//declaration 
	int entier,somme=0;
	printf("Donner moi un entier: ");
	scanf("%d",&entier);
	
	//traitement 
	for(int i=1;i<=entier;i++){
		somme=somme+i;
	}
	
	printf("la somme des %d premiers nombres naturels est: %d ",entier,somme);
}
