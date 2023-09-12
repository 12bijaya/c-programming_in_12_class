#include<stdio.h>
int main(){
    int a=1,b=3,d;
    int i,c;
    printf("%d\t",a);
    printf("%d\t",b);
    int sum=0;
    c=a+b;
    for(i=0;i<8;i++){
        sum=sum+c;
        if(i>0){
        b=d;
        }
        printf("%d\t",sum);
        d=sum;
        c=b;


    }
    return 0;
}