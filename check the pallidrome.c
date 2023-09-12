#include<stdio.h>
#include<string.h>
int main(){
    char st1[10];
    char st2[10];
    printf("input the value to check pallidrome");
    gets(st1);
    strcpy(st2,st1);
    strrev(st2);
    if(strcmp(st1,st2)==0){
        printf("The given data is pallidrome");
    }
    else{
        printf("the data is not pallidrome");
    }
    
    return 0;
    

}