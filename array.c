#include <stdio.h>
int main()
{

    int i,j,k;
    int arr[3][3];
    int ar[3][3];
int result[3][3]={0};

    for(i=0;i<3;i++){
       for(j=0;j<3;j++){
            scanf("%d", &arr[i][j]);

        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", arr[i][j]);

        }
        printf("\n");
    }
    
    for(i=0;i<3;i++){
       for(j=0;j<3;j++){
            scanf("%d", &ar[i][j]);

        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", ar[i][j]);

        }
        printf("\n");
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                for(k=0;k<3;k++){
            result[i][j]= result[i][j]+arr[i][k]*ar[k][j];
            
            }
        
        
            }
        }
         

        
        
    
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",result[i][j]);

        }
        printf("\n");
    }


    
        return 0;
}