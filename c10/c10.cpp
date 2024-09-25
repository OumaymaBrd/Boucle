#include <stdio.h>
#include<stdlib.h>
int main() {
    int n;
   e: printf("Entrez le nombre de termes de la suite de Fibonacci ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Veuillez entrer un nombre positif.\n");
        goto e;
    }

    int f[n]; 

    // Initialiser 
    f[0] = 0;
    if (n > 1) {
        f[1] = 1;
    }

    // Calculer les autres termes  
    for (int i = 2; i < n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    // Afficher les termes de la suite
    printf("Les %d premiers termes de la suite de Fibonacci sont :\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", f[i]);
    }
    printf("\n");

    return 0;
}

