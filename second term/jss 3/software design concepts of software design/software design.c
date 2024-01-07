#include <stdio.h>

// Function prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

// Function to perform arithmetic operation based on operator
float performOperation(float a, float b, char operator);

int main() {
    float num1, num2, result;
    char operator;

    // Get input from the user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note the space before %c to consume any leading whitespace

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform the calculation
    result = performOperation(num1, num2, operator);

    // Display the result
    printf("Result: %.2f\n", result);

    return 0;
}

// Function to perform addition
float add(float a, float b) {
    return a + b;
}

// Function to perform subtraction
float subtract(float a, float b) {
    return a - b;
}

// Function to perform multiplication
float multiply(float a, float b) {
    return a * b;
}

// Function to perform division
float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;  // Default result in case of error
    }
}

// Function to perform arithmetic operation based on operator
float performOperation(float a, float b, char operator) {
    switch (operator) {
        case '+':
            return add(a, b);
        case '-':
            return subtract(a, b);
        case '*':
            return multiply(a, b);
        case '/':
            return divide(a, b);
        default:
            printf("Error: Invalid operator\n");
            return 0;  // Default result in case of error
    }
}
