#include<stdio.h>
int main(){
    int a,b,c;
    printf("Input your first number:\t");
    scanf("%d",&a);
    printf("Input your second number:\t");
    scanf("%d",&b);
    printf("Press 1 to add these number:\nPress 2 to subtract:\nPress 3 to multiply:\n or Press  other number to devide\n");
    printf("Press the number accordind to your requirement\t\n");
    scanf("%d",&c);
    switch(c){
        case 1 :
        int sum=a+b;
        printf("The sum of numbers %d and %d is:\t %d\n",a,b,sum);
        break;
        case 2 :
        int sub=a-b;
        printf("The difference of numbers %d and %d is :\t%d\n",a,b,sub);
        break;
        case 3 :
        int mul=a*b;
        printf("The multiplication of two numbers %d and %d is:\t %d\n",a,b,mul);
        break;
        default:
        float div=a/b;
        printf("The division of %d by %d is :\t %f\n",a,b,div);
        
    }
    return 0;
}