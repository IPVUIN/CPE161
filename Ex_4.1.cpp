#include<stdio.h>
main()
{
	char ans;
	printf("Confirm your answer[y/n] : ");
	ans = getchar();
	printf("You choose %c \n", ans);
	return 0;
}
