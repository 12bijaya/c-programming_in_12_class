#include<stdio.h>
int main(){
    int i,a;
    printf("How many elements do you want to store in array\t");
    scanf("%d",&a);
    int c[a];
    for(i=0;i<=a;i++){
        printf("Input the elements in %d position\t",i+1);
        scanf("%d",&c[i]);
    }
    printf("\n");
    printf("The even numbers among your data are:\n");
    for(i=0;i<=a;i++){
        if(c[i] % 2 == 0){
            printf("%d\n",c[i]);
        }
    }
    return 0;
}