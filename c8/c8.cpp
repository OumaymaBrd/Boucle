#include<stdio.h>
#include<stdlib.h>

int main(){
	printf("\t\t Programme Compteur de Chiffres\n");
	
	//declaration 
	char entier[15]; int cmp=0;
	printf("donner moi des liste de nombre: "); scanf("%s",entier);
	int i=0;
	 while(entier[i] != '\0') {
        cmp++;
        i++; // Déplacez l'incrément de i à l'intérieur de la boucle
    }
    printf("Le nombre de caractere entrer est : %d ",cmp);

}
