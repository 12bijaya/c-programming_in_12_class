#include<stdio.h>
int main(){
    int c[2][2];
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("print the value for %d row and %d column\t",i+1,j+2);
            scanf("%d",&c[i][j]);
        }
    }
    printf("The required matrix is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",c[j][i]);
        }
        printf("\n");
    }
}