#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\t Programme Calcul le Factorielle d'un Nombre\n\n");
	
	//declaration de variable
	int Factoriel,result=1;
	
	//demande de saisir 
	printf("donner moi Un Entier : "); scanf("%d",&Factoriel);
	//traitement de calcul 
	for(int i=Factoriel;i>0;i--){
		result=result*i;
	}
	printf("Le Factoriel de l'entier %d!=%d ",Factoriel,result);
}
