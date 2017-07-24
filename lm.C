#include <stdio.h>
void main()
{
int m,n,x;
printf("Enter two positive integers: ");
scanf("%d %d",&m,&n);
x=(m>n)?m:n;
while(1)
{
if(x%m==0&&x%n==0)
{
printf("The LCM of %d and %d is %d."m,n,x);
break;
}
x++;
}
}
