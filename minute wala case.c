#include<stdio.h>
int main(){
int sec,min,hour;
printf("input your second that need to comvert:\t");
scanf("%d",&sec);
hour=sec/3600;
int remsec;
remsec=sec-hour*3600;
min=remsec/60;
int lastremsec;
lastremsec=sec-hour*3600-min*60;
printf("The %d is %d hour %d minute and %d second:\t:\n",sec,hour,min,lastremsec);
return 0;

}