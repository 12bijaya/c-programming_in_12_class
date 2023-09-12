#include<stdio.h>
int main(){
    int i,sum=0;
    int a[5];
    float average;
    for(i=0;i<5;i++){
        printf("Input the number that you got on %d st/nd/rd/th subject\t",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("\n");
    average=sum/5;
    printf("The average of the given data is %f\t",average);
    printf("\n");
    return 0;
}