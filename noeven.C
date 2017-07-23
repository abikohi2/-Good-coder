#include<stdio.h>
void main()
{
int n,m,i,j; 
printf("enter the m values"):
scanf("%d",&m);
printf("Enter the n value");
scanf("%d",&n);
for(i=m;i<=n;i++)
{
j=i%2;
if(j==0)
printf("even number%d",i);
}
}
