#include<stdio.h>
int main(){
    int i,a,sum=0;
    printf("How many elementd do you want\t");
    scanf("%d",&a);
    int c[a];
    for(i=0;i<a;i++){
        printf("Input the value for the %d variable:\t",i+1);
        scanf("%d",&c[i]);
        sum=sum+c[i];
    }
    printf("The sum of elenents is %d\t",sum);
    printf("\n");
    return 0;
}