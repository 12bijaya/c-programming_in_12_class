#include<stdio.h>
int main(){
    float l,b,area;
    printf("Input the length of your rectangle:\t");
    scanf("%f",&l);
    printf("Input the breadth of your rectangle:\t");
    scanf("%f",&b);
    area=l*b;
    printf("The are of the rectangle of given dimension is \t%f",area);
    return 0;
}