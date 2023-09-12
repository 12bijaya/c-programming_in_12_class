#include<stdio.h>
int main(){
    int i,a=7,sum=1;
    for(i=0;i<7;i++){
        sum=sum*a;
        a=a-1;
    }
    printf("the factorial of seven is:\t%d\n",sum);
    return 0;
}