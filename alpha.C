#include<stdio.h>
#include<string.h>
void main()
{
char a;
printf("enter the value");
scanf("%c",&a);
if(((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')))
printf("alphabet");
else
printf("not an alphabet");
}
