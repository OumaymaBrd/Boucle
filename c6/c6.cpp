#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("\t\t Affichage des N Premiers Nombres Pair\n\n");
	
	//declaration
	int entier;
	
	printf("donner moi un entier: "); scanf("%d",&entier);
	
	//formule 2k
	printf(" les %d premiers nombres pairs sont : ",entier);
	for(int i=1;i<=entier;i++) printf("%d | ",2*i);
	
}
