#include<stdio.h>
void main()
{
int i,n=50,count=0;
char a[50];
printf("Enter the line");
for(i=0;i<n;i++)
{
scanf("%c",a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]=="\0")
count=count+1;
}
printf("Number of words in a line is %d",count);
}
