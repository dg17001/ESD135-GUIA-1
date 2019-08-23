#include <stdio.h>
#include <math.h>

int main() {
    int n, i = 0;

    printf("Ingrese el tamanio de la lista ");
    scanf("%d", &n);

    int lista[n];

    for (i = 0; i < n; i++) {
        printf("Ingrese el valor de la lista en la posicion %d ", i + 1);
        scanf("%d", &lista[i]);
    }

    for (i = 0; i < n; i++) {
        printf("En posicion %d el valor es %d\n", i, lista[i]);
    }

    printf("\n\n");

    float suma =0;
    for(i=0; i<n; i++){
        suma+=lista[i];
    }
    float media = suma / n;
    printf("La media es %.2f", media);
    printf("\n");

    float diferencia, cuadrado, total, varianza, devest=0;

    for (i=0; i<n; i++){
        diferencia = lista[i]-media;
        cuadrado = diferencia * diferencia;
        total+=cuadrado;
    }
    varianza = total/n;
    printf("La varianza es: %.4f", varianza);
    printf("\n");
    
    devest = sqrt(varianza);
    printf("La desviacion estándar es: %.4f", devest);
}
