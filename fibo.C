#include <stdio.h>
void main()
{
int i, n, m=0, n=1,y;
printf("Enter the number of terms ");
scanf("%d", &n);
printf("Fibonacci Series: ");
for (i = 1; i <= n; ++i)
{
printf("%d,",m);
y= m+n;
m=n;
n=y;
}
}

