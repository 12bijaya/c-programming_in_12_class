#include<stdio.h>
int main(){
    int i,a;
    printf("Input the number you want to get factorial:\t");
    scanf("%d",&a);
   int  b=a;
    int sum=1;
    for(i=0;i<a;i++){
        sum=sum*b;
        b=b-1;
    }
    printf("The factorial of given no  is %d\n",sum);
    return 0;
}