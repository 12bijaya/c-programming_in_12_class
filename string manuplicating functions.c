#include<stdio.h>
#include<string.h>
int main(){
    char a[13]= "computer";
    char b[]="ramayan";
    // // puts(strcat(a,b));
    // // printf("The length of the string a is %d \n",strlen(a));
    // // printf("The length of the string b is %d \n",strlen(b));
    // strrev(a);
    
    // printf("the reverse of the a is %s \t",a);
    // strcmp(a,b);
    // int x=strcmp(a,b);
    // if(x==0){
    //     printf("a and b are same");
    // }
    // else{
    //     printf("they are diffeerent");
    // }
                puts(strlwr(a));
    puts(strlwr(b));
    return 0;
}