#include<stdio.h>
#include<conio.h>
main()
{
	int number;
	printf("Enter an integer number : ");
	scanf("%d",&number);
	if((number %2)==0)
		printf("The %d is even number.\n",number);
		
	else
		printf("The %d is odd number.\n",number);	
	getch();
	return 0;
}
