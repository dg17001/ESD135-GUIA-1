#include <stdio.h>
#include <stdlib.h>

void elim_elem(int num[], int pos, int *total);

int main(void)
{
    int num[] = {90, 91, 92, 93, 94, 95, 96, 97, 98, 99};
    int total = sizeof num / sizeof num[0];
    int i;

    printf("El vector se en cuentra de la siguiente manera\n");

    for (i = 0; i < total; i++){
        printf("Vector [%d] == %d\n", i, num[i]);
    }

    printf("Ingrese la posicion que desea eliminar: ");
    fflush(stdout);
    if (scanf("%d", &i) != 1)
        return EXIT_FAILURE;

    elim_elem(num, i, &total);

    for (i = 0; i < total; i++)
        printf("num[%d] == %d\n", i, num[i]);

    return EXIT_SUCCESS;
}

void elim_elem(int num[], int pos, int *total)
{
    int i;

    for(i = pos; i < *total - 1; i++)
        num[i] = num[i + 1];

    --*total;
}