#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int tam = 5;
    int l, c, mat[tam] [tam];

srand(time (NULL));
//Da linha 12 a 16 está gerando a matriz
    for(l = 0; l< tam; l++){
        for(c = 0; c< tam; c++){
            mat[l] [c] = rand() % 100;
        }
    }
//Da linha 18 a 22 está sendo imprimindo a matriz completa
    for(l = 0; l < tam; l++){
        for(c = 0; c< tam; c++){
           printf("%d ", mat[l] [c]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(l = 0; l< tam; l++){
                printf("%d ", mat[l][l]);
    }

    return 0;
}
