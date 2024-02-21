#include<stdio.h>
main()
{
	int a;
	printf("Enter the number whose factorial you want:\n");
	scanf("%d",&a);
	factorial_calc(a);
}
int factorial_calc(int n)
{
	int c;
	if(n<=1)
	{
		return (1);
	}
	else
	{
	c=n*factorial_calc(n-1);
	return(c);
	}

}