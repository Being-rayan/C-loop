#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, sum = 0;

    // Input the number
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    originalNum = num;

    // Calculate the sum of the cubes of its digits
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        sum += pow(remainder, 3);
    }

    // Check if the number is an Armstrong number
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
