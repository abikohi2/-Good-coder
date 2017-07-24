#include<stdio.h>
void main()
{
int n,s=0,rem,m,i;
printf("enter the m value");
scanf("%d",&m);
printf("enter the n value");
scanf("%d",&n);
for(i=m;i<=n;i++)
{
rem=i%10;
s=s+rem*rem*rem;
n=n/10;
if(s==i)
printf("number is armstrong%d",i);
else
printf("not armstrong");
}
}
