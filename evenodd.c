#include<stdio.h>
void main()
{
int n;
printf("Enter the number");
scanf("%d",&n);
n=n%2;
if(n==0)
printf("number is even");
else
printf("number is odd");
}
