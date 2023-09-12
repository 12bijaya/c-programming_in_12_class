#include<stdio.h>
int main(){
    int a;
    printf("Input the number to convert that number into day\t");
    scanf("%d",&a);
    switch(a){
        case 1 :
        printf("SUNDAY\n");
        break;
        case 2 :
        printf("MONDAY\n");
        break;
        case 3 :
        printf("TUESDAY\n");
        break;
        case 4 :
        printf("WEDNESDAY\n");
        break;
        case 5 :
        printf("THURSDAY\n");
        break;
        case 6 :
        printf("FRIDAY\n");
        break;
        case 7 :
        printf("SATURDAY\n");
        break;
        default:
        printf("Please input number up to 1-7\n");
    }
    return 0;
}