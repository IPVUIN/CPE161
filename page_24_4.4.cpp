#include<stdio.h>
#include<conio.h>
main()
{
	int money,ten,five,two,one;
	printf("Input your money: ",money);
	scanf("%d",&money);
    ten = (int)money/10;
    five = (int)money%10/5;
    two = (int)money%10%5/2;
    one = (int)money%10%5%2;
	printf("Number of Ten bath is %d coins. \n",ten);
	printf("Number of Five bath is %d coins. \n",five);
	printf("Number of Two bath is %d coins. \n",two);
	printf("Number of One bath is %d coins. \n",one);
	getch();
	return 0;
}
