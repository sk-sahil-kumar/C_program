#include <stdio.h>
int main(){
    printf("Enter matrix size: ");
    int size;
    scanf("%d", &size);
    int mat1[size][size];
    int mat2[size][size];
    int mat3[size][size];

    printf("Enter first matrix elements: ");
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            scanf("%d",&mat1[i][j]);

        }
    }
    printf("Enter second matrix elements: ");
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            scanf("%d",&mat2[i][j]);
            
        }
    }
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
             mat3[i][j]=mat1[i][j]+mat2[i][j];
            
        }
    }
     for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            printf(" %d ",mat3[i][j]);

            
        }
        printf("\n");
    }
}