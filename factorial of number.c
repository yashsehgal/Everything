#include"stdio.h"
int factorial(int);
int main()
{
	int n,fact;
	printf("enter number");
	scanf("%d", &n);
	fact = factorial(n);
	printf("factorial is %d", fact);
	return 0;
}

	int factorial(int x)
	{
	int a,b=1;
	for (a=1;a<=x;a++)
	b=b*a;
	return (b);
}
