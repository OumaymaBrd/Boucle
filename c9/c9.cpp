#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\t Calcul de la Somme des N Entiers\n\n");
	
	//declaration 
	int entier,somme=0;
	
	//saisir
	printf("donner moi un Entier: "); scanf("%d",&entier);
	for(int i=0;i<=entier;i++) somme=somme+i;
	printf("La somme de %d entier est %d ",entier,somme);
}
