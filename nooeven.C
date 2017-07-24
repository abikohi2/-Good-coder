#include<stdio.h>
void main()
{
int m,n,i,j;
printf("enter the m value");
scanf("%d",&m);
printf(enter the n value);
scanf("%d",&n);
for(i=m;i<=n;i++)
{
j=i%2;
if(j==0)
printf("%d",j);
}
}
