#include<stdio.h>
int main(){
    int i,j,a,temp;
    printf("Input how many elements you want to input \t");
    scanf("%d",&a);
    int c[a];
    for(i=0;i<a;i++){
        printf("Intput your %d th vaue:\t",i+1);
        scanf("%d",&c[i]);
    }
    printf("   The elements in ascending order is:\n");
    for(i=0;i<a;i++){
        for(j=i+1;j<a;j++){
            if(c[i]>c[j]){
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;

            }
        }
    }
    for(i=0;i<a;i++){
        printf("%d\t",c[i]);
    }
}