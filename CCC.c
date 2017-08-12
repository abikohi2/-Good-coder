#include<stdio.h>
void main()
{
int i,j=0,n=10;
char a[10];
for(i=0;i<n;i++)
{
scanf("%c",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%c",a[i]);
j=j+1;
}
printf("The no of elements %d",j);
}
