#include<stdio.h>
int main(){
    int r;
   float area;
   float pi=22/7;
    printf("Input the radious of your circle\t");
    scanf("%d",&r);
    area=r*r*pi;
    printf("The area of the circle of radious %d is %f:\n",r,area);
    return 0;
}