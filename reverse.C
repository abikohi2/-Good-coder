#include<stdio.h>
void main()
{
int n,rev=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
 m=n%10;
 rev=rev*0+m;
 n=n/10;
 }
 printf("reverse value is%d",rev);
 }
