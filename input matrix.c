#include<stdio.h>
int main(){
    int mat[2][2];
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
          printf("Enter the element for %d,%d:\t",i+1,j+1);
          scanf("%d",&mat[i][j]);
        }
        
    }
    printf("The required matrix is\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
          printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    return 0;

}