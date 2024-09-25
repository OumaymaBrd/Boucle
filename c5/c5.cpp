#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\t Programme calcule la puissance d'un nombre entier\n\n");
	
	//declaration 
	int base, exposant,resultat=1;
	
	printf("donner moi Votre base: "); scanf("%d",&base);
	printf("Donner moi votre exposant: "); scanf("%d",&exposant);
	
	//traitement
	for(int i=0;i<exposant;i++){
		resultat=base*base;
		
	}
	
	printf("Le resultat de cette formule est : %d^%d = %d",base,exposant,resultat);
}
