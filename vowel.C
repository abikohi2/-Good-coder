#include<stdio.h>
void main()
{
char a[10],c;
int i;
printf("enter the string");
scanf("%c",&c);
for(i=0;i<10;i++)
{
scanf("%c",&a[i]);
}
for(i=0;i<10;i++)
{
if(a[i]==c)
printf("vowels");
else
printf("constant");
}
}
