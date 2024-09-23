#include <stdio.h>

int main() {
    int num, org, sum = 0, digit, i, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    org = num; // Store the original number
    // Loop to calculate the sum of factorials of digits
    for (; num != 0; num /= 10) {
        digit = num % 10; // Get the last digit

        // Calculate factorial of the digit
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact; // Add the factorial of the digit to sum
    }
    // Check if the sum of factorials is equal to the original number
    if (sum == org) {
        printf("%d is a Strong number.\n", sum);
    } else {
        printf("%d is not a Strong number.\n", org);
    }
    return 0;
}
