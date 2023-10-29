#include <stdio.h>

int main() {
    
    int linhas, colunas;
    printf("Informe o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Informe o numero de colunas da matriz: ");
    scanf("%d", &colunas);
    int matriz[linhas][colunas];

    printf("Informe os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
       	for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
                  }
   	}

    printf("Matriz original:\n");
    for (int i = 0; i < linhas; i++) {
    	    for (int j = 0; j < colunas; j++) {
    printf("%d\t", matriz[i][j]);
    			    }
        printf("\n");
	 }
    
    int transposta[colunas][linhas];
	    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
        transposta[j][i] = matriz[i][j];
        }
    }

    printf("Matriz transposta:\n");
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            printf("%d\t", transposta[i][j]);
        }
     	printf("\n");
   		}

return 0;

}			
