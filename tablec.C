#include<stdio.h>
void main()
{
int m, i;
printf("Enter an value");
scanf("%d",&m);
for(i=1; i<=10; i++)
{
printf("%d * %d = %d \n", m, i, m*i);
}   
}
