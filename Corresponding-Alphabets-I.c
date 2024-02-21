#include<stdio.h>
main()
{
	char ans,alphabets[27] ={'1' ,'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int num;
	printf("Enter 0 to exit the loop\n\n");
	while(1)
    {
		printf("Enter a number between 1 to 26 to get the corresponding alphabet: ");
		scanf("%d",&num);
		if(num==0)
			break;
		else if(num<0 || num>26)
			printf("Enter a valid number\n");
		else
			printf("%c\n",alphabets[num]);
	}
}

	
