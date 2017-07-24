#include <stdio.h>
 
void main()
{
int i,m,n,x,y=1;
printf("Enter any two numbers");
scanf("%d%d",&m,&n);
x=(m<n) ? m:n;
for(i=1; i<=x; i++)
{
if(m%i==0&&n%i==0)
{
y=i;
}
}
printf("HCF of %d and %d = %d\n",m,n,y);
}
