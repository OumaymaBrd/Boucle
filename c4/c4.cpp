#include<stdio.h>
#include<stdlib.h>
int main(){
	
	printf("\t\t Affichage des N Premiers Nombres Impairs\n\n");
	
	//declaration 
	int entier;
	//saisir
	printf("Donner moi un entier : "); scanf("%d",&entier);
	
	//forme impair 2k+1
	
	for(int i=0;i<entier;i++) printf("Le %d impair est %d\n ",i+1,2*i+1);
}
