#include<stdio.h>
int main(){
    int i,j,a,b;
    printf("Input the number of row:\t");
    scanf("%d",&a);
    printf("Input the number of column:\t");
    scanf("%d",&b);
    int c[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("The value for %d row and %d column:\t",i+1,j+1);
            scanf("%d",&c[i][j]);
        }
    }
    printf("The required matrix is:\n");
        for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
        }
    printf("The transpose of the given matrix is:\n");
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            printf("%d\t",c[j][i]);
        }
        printf("\n");
    }
    return 0;
}