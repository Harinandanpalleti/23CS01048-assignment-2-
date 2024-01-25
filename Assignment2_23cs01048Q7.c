#include<stdio.h>

int main(){


float mealcost;
printf("enter mealcost\n");
scanf("%f",&mealcost);
float tip;
printf("enter tip tax\n");
scanf("%f",&tip);

float tax;
printf("enter tax\n");
scanf("%f",&tax);
float totalcost;
totalcost = mealcost + (tip*mealcost/100) +(tax*mealcost/100);

printf("totalcost = %f",totalcost);












 return 0;   
}













