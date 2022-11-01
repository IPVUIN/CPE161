#include<stdio.h>
#include<conio.h>
main()
{
	float price;
	printf("Enter your price : ");
	scanf("%f",&price);
	if(price >= 5000)
		printf("%f get discount.\n",price);
	else
		printf("%f Did not receive a discount.\n",price);	
	getch();
	return 0;
}
