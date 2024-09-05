#include <stdio.h>

int main()
{
	int num1, num2;
	float result;
	
	printf("Please enter first number:\n");
	scanf("%d", &num1);
	printf("Please enter second number:\n");
	scanf("%d", &num2);
	result = num1 + num2;
	printf("The addition of your given numbers are: %f\n", result);
	return 0;
}