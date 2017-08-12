#include<stdio.h>
void main()
{
int i,n,k=0,s=0;
printf("Enter the value");
for(i=1;i<=15;i++)
{
k=k+i;
}
printf("sum %d",k);
for(i=15;i<=45;i++)
{
n=i%2;
if(n!=0)
{
s=s+n;
}
}
printf("sum of odd value is%d",s);
}
