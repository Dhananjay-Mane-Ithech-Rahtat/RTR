#include<Stdio.h>

int main(void)
{
	//variable declaration
	int age_animish = 0;

	//code
	printf("\n\n");

	printf("Enter your age : \n");
	scanf("%d", &age_animish);
	printf("\n\n");

	if (age_animish >= 18)
	{
		printf("You can vote !!\n\n");
	}
	printf("You cannot vote :( \n\n");
	return(0);
}