#include <stdio.h>
void main()
{
 int m, i;
 printf("Enter an integer: ");
 scanf("%d",&n);
 if(m<0)
 printf(" Factorial doesn't exist.");
 else
 {
 for(i=1; i<=m; ++i)
 {
 fact=fact*i;              
 }
 printf("Factorial of %d = %llu", n, fact);
 }
}
