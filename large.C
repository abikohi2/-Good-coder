#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the numbers");
scanf("%d,%d,%d",&a,&b,&c);
if((a>b)&&(a>c))
printf("A is large");
elseif((b>c)&&(b>a))
printf("B is large");
else
printf("C is large");
}
