#include<stdio.h>
main()
{
	int x;
	printf("enter a no.\n");
	scanf("%d",&x);
	int even_or_odd (x)
	{
		
		if(x%2==0)
		{
			return printf("no is even");
		}
		else
		{
			return printf("no is odd");
		}
	}
}