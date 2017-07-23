#include<stdio.h>
void main()
{
int n,r,s=0;            
printf("Enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
if(n==s)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
}
