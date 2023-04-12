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

//2) Calcula a matriz soma de duas matrizes quadradas.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


    int main() {
    int mat1 [5][5] = {2,4,6,8,10, 2,4,6,8,10, 2,4,6,8,10, 2,4,6,8,10, 2,4,6,8,10};
        printf("\n\n");
    int mat2 [5][5] = {1,3,5,7,9, 1,3,5,7,9, 1,3,5,7,9, 1,3,5,7,9, 1,3,5,7,9};
    int resultante [5][5];
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                resultante [i][j] = mat1[i][j]+mat2[i][j];
  }

}
printf("\n\n Matriz soma: \n");
for(int mat1=0; mat1<5; mat1++) {
printf("\n\n");
  for(int mat2=0; mat2<5; mat2++) {
printf("%d, ", resultante [mat1][mat2]);

  }
}
return 0;
}
