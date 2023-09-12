#include<stdio.h>
int main(){
    int a,b;
    b=2;
    printf("Input your number:\t");
    scanf("%d",&a);
    if(a%b==0){
        printf("%d is even\n",a);

    }
    else{
        printf("%d is odd no\n",a);

    }
    return 0;
}