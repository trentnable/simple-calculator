#include <stdio.h>

// Include function prototypes
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

int main()
{
	// define input variables
	int num1, num2;
	char operation;
	float result;

	printf("Please enter first number:\n");
	// IF statement helps us check if the input is valid.
	if(scanf("%d", &num1) != 1){
		printf("Invalid input! Please input an integer next time!\n");
		return 1; //return 1 to exit program if an invalid input
	}
	
	printf("Please enter second number:\n");
	// IF statement helps us check if the input is valid.
	if(scanf("%d", &num2) != 1){
		printf("Invalid input! Please input an integer next time!\n");
		return 1; //return 1 to exit program if an invalid input
	}
	
	printf("Please input the selected operation you want to perform (+, -, *, /):\n");
	scanf(" %c", &operation); //user can input what operation they want to perform
	
	//IF/ELSE statements to call a function based on the user inputed operation
	if (operation == '+')
			addition(num1, num2);
	else if (operation == '-')
			subtraction(num1, num2);
	else if (operation == '*')
			multiplication(num1, num2);
	else if (operation == '/')
			division(num1, num2);
	else 
			printf("Invalid operation. Please use one of the four operations only. (+ - * /)!\n"); // Prints out the message and exits program if invalid character is given
		
	return 0;
}

// Functions

// function to perform addition
int addition(int a, int b) {
	float c = a + b;
	printf("The addition of %d & %d is: %f\n", a, b, c);
	return 0;
}
// function to perform subtraction
int subtraction(int a, int b){
	float c = a - b;
	printf("The subtraction of %d & %d is: %f\n", a, b, c);
	return 0;
}
//function to perform multiplication
int multiplication(int a, int b) {
	float c = a * b;
	printf("The multiplication of %d & %d is: %f\n", a, b, c);
	return 0;
}
// function to perform division
int division(int a, int b) {
	float c = (float)a / (float)b;
	if (b == 0) {
		printf("INFINITY\n"); // checks if the denominator is 0. If yes, prints INFINITY.
	}
	else 
	printf("The division of %d & %d is: %f\n", a, b, c);
	
	return 0;
}