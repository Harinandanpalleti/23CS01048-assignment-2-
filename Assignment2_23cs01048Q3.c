#include<stdio.h>
int main(){

int num;
printf("enter the value:");
scanf("%d",&num);
int year;
year = num/365;


float a;
a =num-(year *365);
int month ;
month = a/30;
float b;
b = num-(month*30)-(year*365);
int week;
week = b/7;
int day;
day = num -(month*30)-(year*365)-(week*7);
 printf("year = %d  month = %d week = %d day =%d  ",year,month,week,day);





    return 0;
}






