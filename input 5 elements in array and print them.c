#include<stdio.h>
int main(){
    int i;
    int c[5];
    for(i=0;i<5;i++){
        printf("Enter the value in %d array\t",i+1);
        scanf("%d",&c[i]);
    }
    printf("\n");
    printf("The required resultant is:\t");
      for(i=0;i<5;i++)
      {
     printf("%d\t",c[i]);
    }
printf("\n");
      return 0;
}