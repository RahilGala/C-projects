#include<stdio.h>
main()
{
	int i=0,x=98;
	for(i;x<=100;++i)
	{
		printf("%d\n",i);
		printf("%d\n",x);
		if(x<0)
		{
			printf("Not allowed");
			break;
		}
		else
		{
			x=x+1;
			printf("%d\n",x);
		}
	}
	printf("%d\n",i);
}