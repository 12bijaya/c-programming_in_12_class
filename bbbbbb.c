#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20];
    char s2[20];
    char s3[30] = " is a frind of ";

    printf("Enter the name of first friend\n");
    gets(s1);

    printf("Enter the name of second friend\n");
    gets(s2);

    puts(strcat(s1, (strcat(s3, s2))));

    return 0;
}