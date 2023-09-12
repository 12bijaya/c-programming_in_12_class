#include<stdio.h>
int main(){
    int a,b,c;
    printf("Input your first number\t");
    scanf("%d",&a);
    printf("Input your second number\t");
    scanf("%d",&b);
    printf("Input your third number\t");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is greatest\n",a);
    }
    else{
        if(b>a && b>c){
            printf("%d is greatest\n",b);
        }
        else if(c>a && c>b){
            printf("%d is greatest\n",c);
        }
        else{
            printf("All are equal\n");
        }
    }
    return 0;
}