#include <stdio.h>


int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

int main()
{
	int num1, num2;
	char operation;
	float result;

	printf("Please enter first number:\n");
	scanf("%d", &num1);
	printf("Please enter second number:\n");
	scanf("%d", &num2);
	addition(num1, num2);
	subtraction(num1, num2);
	multiplication(num1, num2);
	division(num1, num2);
	return 0;
}
int addition(int a, int b) {
	float c = a + b;
	printf("The addition of %d & %d is: %f\n", a, b, c);
	return 0;
}
int subtraction(int a, int b){
	float c = a - b;
	printf("The subtraction of %d & %d is: %f\n", a, b, c);
	return 0;
}
int multiplication(int a, int b) {
	float c = a * b;
	printf("The multiplication of %d & %d is: %f\n", a, b, c);
	return 0;
}
int division(int a, int b) {
	float c = (float)a / (float)b;
	if (b == 0) {
		printf("INFINITY\n");
	}
	else 
	printf("The division of %d & %d is: %f\n", a, b, c);
	
	return 0;
}