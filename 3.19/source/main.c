#include<stdio.h>
#include<stdlib.h>



int main(void) {
	float p, r = 0, d, c;


	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &p);

		if (p == -1)break;

		printf("Enter interest rate: ");
		scanf_s("%f", &r);
		printf("Enter term of the laon in days: ");
		scanf_s("%f", &d);

		c = p * r*d / 365;

		printf("The interest charge is $%.2lf", c);
		printf("\n\n");
	}
	system("pause");
	return 0;

}