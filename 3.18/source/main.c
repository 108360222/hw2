#include<stdio.h>
#include<stdlib.h>


int main(void) {
	const float salary = 200;
	float dollars = 0;

	while (1)
	{
		printf("Enter sales in dollars(-1 to end): ");
		scanf_s("%f", &dollars);
		if (dollars == -1)break;
		printf("Salary is %.2lf\n", salary + 0.09*dollars);
		printf("\n");
	}
	system("pause");
	return 0;
}