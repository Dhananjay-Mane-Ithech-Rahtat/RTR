#include<Stdio.h>

int main(void)
{
	//variable declarations
	int number_animish = 0;

	//code
	printf("\n\n");

	printf("Please Enter a number:\n");
	scanf("%d", &number_animish);
	printf("\n\n");

	if (number_animish < 0)
	{
		printf("Number (%d) is smaller than zero (Negative)!!\n\n", number_animish);
	}
	if (number_animish > 0)
	{
		printf("Number (%d) is greater than zero (Positive)!!\n\n", number_animish);
	}
	if ((number_animish > 0) && (number_animish <= 100))
	{
		printf("Number (%d) is between 0 and 100!!\n\n", number_animish);
	}
	if ((number_animish > 100) && (number_animish <= 200))
	{
		printf("Number (%d) is between 100 and 200!!\n\n", number_animish);
	}
	if ((number_animish > 200) && (number_animish <= 300))
	{
		printf("Number (%d) is between 200 and 300!!\n\n", number_animish);
	}
	if ((number_animish > 300) && (number_animish <= 400))
	{
		printf("Number (%d) is between 300 and 400!!\n\n", number_animish);
	}
	if ((number_animish > 400) && (number_animish <= 500))
	{
		printf("Number (%d) is between 400 and 500!!\n\n", number_animish);
	}
	return(0);

}