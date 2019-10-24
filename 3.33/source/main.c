#include<stdio.h>
#include<stdlib.h>


int main(void) {
	int x, y;

	printf("Enter value X Y¡G ");
	scanf_s("%d%d", &x, &y);

	for (int j = 0; j < x; j++)
	{
		for (int i = 0; i < y; i++) 
		{
			if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
			{
				printf("*");
			}
			else printf(" ");
		}
		printf("\n");

	}
	system("pause");
	return 0;
}