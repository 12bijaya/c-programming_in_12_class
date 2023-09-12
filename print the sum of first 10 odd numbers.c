#include<stdio.h>
int main(){
    int i,odd,sum;
    sum=0;
    odd=1;
    for(i=1;i<=10;i++){
        sum=sum+odd;
        odd=odd+2;
        
    }
    printf("The sum of first 10 odd number is %d",sum);
    return 0;
}