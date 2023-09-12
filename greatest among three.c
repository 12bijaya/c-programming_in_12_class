#include<stdio.h>
int main(){
    int a,b,c;
    printf("Input your first number\t");
    scanf("%d",&a);
    printf("Input your second number\t");
    scanf("%d",&b);
    printf("Input your third number\t");
    scanf("%d",&c);
    if(a>b && a>b){
        printf("%d is greatest",a);
    }
    else if(b>c && b>a)
    {
        printf("%d is greatest",b);
    }
    else if(c>a && c>b){
        printf("%d is greatest",c);
    }
    else{
        printf("all are equal");
    }
    return 0;
    
}