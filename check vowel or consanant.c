#include<stdio.h>
int main(){
    char con;
 
    printf("Input the character you wannt to check \t");
    scanf("%c",&con);
    switch(con){
        case 'a' :
        printf("%c is vowel\n",con);
        break;
        case 'e' :
        printf("%c is vowel\n",con);
        break;
        case 'i' :
        printf("%d is vowel\n",con);
        break;
        case 'o' :
        printf("%c is vowel\n",con);
        break;
        case 'u' :
        printf("%c is vowel\n",con);
        break;
        default:
        printf("%c is consonant\n",con);
    }
    return 0;
}