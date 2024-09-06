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
	
	if(scanf("%d", &num1) != 1){
		printf("Invalid input! Please input an integer next time!\n");
		return 1;
	}
	
	printf("Please enter second number:\n");
	
	if(scanf("%d", &num2) != 1){
		printf("Invalid input! Please input an integer next time!\n");
		return 1;
	}
	
	printf("Please input the selected operation you want to perform (+, -, *, /):\n");
	scanf(" %c", &operation);
	
	if (operation == '+')
			addition(num1, num2);
	else if (operation == '-')
			subtraction(num1, num2);
	else if (operation == '*')
			multiplication(num1, num2);
	else if (operation == '/')
			division(num1, num2);
	else 
			printf("Invalid operation. Please use one of the four operations only. (+ - * /)!\n");
		
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