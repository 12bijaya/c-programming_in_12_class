#include<stdio.h>
int main(){
    int p,t,r,SI;
    printf("Input the principle amount:\t");
    scanf("%d",&p);
    printf("Input rate of your intrest:\t");
    scanf("%d",&r);
    printf("Input the time for how much the principle is taken:\t");
    scanf("%d",&t);
    SI=p*t*r/100;
    printf("The required Simple Intrest is:\t %d",SI);
    return 0;

}