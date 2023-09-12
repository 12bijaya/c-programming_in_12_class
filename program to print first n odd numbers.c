#include<stdio.h>
int main(){
    int i,a;
    printf("How many odd numbers do you want to print:\t");
    scanf("%d",&a);
    int b=1;
    for(i=0;i<a;i++){
        int sum=0;
        sum=sum+b;
        printf("%d\t",sum);
        b=b+2;
    }
    return 0;

}