#include<stdio.h>
int main(){
    int i,sum=0;
    printf("Input the no of elements for the erray\t");
    int a;
    scanf("%d",&a);
    int c[a];
    for(i=0;i<a;i++){
        printf("Input the number for the c[%d] element\t",i+1);
        scanf("%d",&c[i]);
    }
    for(i=0;i<a;i++){
        if(c[i] % 2 == 0){
            sum=sum+1;
        }
    }
    printf("The total even no in the array is \t%d",sum);
    printf("\n");
    return 0;


}