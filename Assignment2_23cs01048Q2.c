#include<stdio.h>
int main(){


int a,b,c,max;
printf("enter the values:");
scanf("%d%d%d",&a,&b,&c);

max = (a > b)?((a>c)?a:c):((b>c)?b:c);

printf("max of these numbers is %d",max);





    return 0;
}



