#include<stdio.h>
int main(){
    int i,j;
    int c[2][3];
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("INPUT THE NUMBER FOR %d ROW AND %d COLUMN:\t",i+1,j+1);
            scanf("%d",&c[i][j]);
        }
    }
    printf("The required matrix of the given input is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the given matrix is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d\t",c[j][i]);
        }
        printf("\n");
    }

}