#include<stdio.h>
main()
{
	int number,i;
	printf("ENTER A NUMBER:\n");
	scanf("%d",&number);
	if (number%2==0)
	{
		printf("THE NUMBER IS EVEN.\nEVEN NUMBERS FROM 1 TO 100 ARE:\n\n");
		for(i=0;i<=100;)
		{
			printf("%d\n",i);
			i=i+2;
		}
	}
	else
	{
		printf("THE NUMBER IS ODD.\nODD NUMBERS FROM 1 TO 100 ARE:\n\n");
		for(i=1;i<=100;)
		{
			printf("%d\n",i);
			i=i+2;
		}
	}
}