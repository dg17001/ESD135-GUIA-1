#include <stdio.h>

int main() {
    int n;
    int vect1[10]={10,21,32,43,54,65,76,87,98,109};
    int vect2[10]={0,0,0,0,0,0,0,0,0,0};

    for (int a = 0; a < 10; a++) {
        vect2[a]=vect1[a];
    }

    for (int i = 0; i < 10; i++) {
        printf("Vector #1[%d]=%d\n",i,vect1[i]);
    }

    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("Vector #2[%d]=%d\n",i,vect2[i]);
    }
}
