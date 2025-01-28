#include<stdio.h>

int main(void)
{
	//variable declarations
	int a_animish;

	//code
	printf("\n\n");

	a_animish = 5;
	if (a_animish)
	{
		printf("if block 1 : a exists and has a value of %d!!\n\n", a_animish);
	}

	a_animish = -5;
	if (a_animish)
	{
		printf("if block 2 : a exists and has a value of %d!!\n\n", a_animish);
	}

	a_animish = 0;
	if (a_animish)
	{
		printf("if block 3 : a exists nad has a value of %d!!\n\n", a_animish);
	}
	
	printf("All three statements are done \n");
	return(0);
}