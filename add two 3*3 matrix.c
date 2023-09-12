#include<stdio.h>
int main(){
    int i,j;
    int c[3][3],b[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Input the value for %d row and %d column:\t",i+1,j+1);
            scanf("%d",&c[i][j]);
        }
    }
    printf("\n");
    printf("Input the value for second matrix:\n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Input the value for %d row and %d column:\t",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
     printf("The matrix form of first matrix is:\t\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    printf("The matrix form of second matrix is:\t\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    int sum[3][3];
    printf("the sum of the matrix is:\t\n");
       for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j]=c[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;


}
