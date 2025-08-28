#include <stdio.h>

int main() {
    float num1, num2, sum;

    // Ask the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    printf("The sum of the two numbers is: %.2f\n", sum);

    return 0;
}
