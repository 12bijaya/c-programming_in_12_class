#include<stdio.h>
int main(){
    int a;
    printf("Please input the percentage you have got:\t");
    scanf("%d",&a);
    if(a>80){
        printf("you have got distinction\n");
    }
    else if(a>70){
        printf("you have got B+\n");
    }
    else if(60<=a && a<=70){
        printf("You have got second division\n");
    }
    else if(a<60){
        printf("you have got 'B' grade");
    }
    else if(a<=50 && a>=40){
        printf("You have got third division");
    }
    else{
        printf(" you are fail");
    }
    return 0;
}