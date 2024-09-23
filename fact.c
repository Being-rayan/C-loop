//WAP to find out factors of a number.
#include <stdio.h>
int main() {
    int num, i;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Display the factors
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) { //checks if num is divisible by i without leaving a remainder.
            printf("%d ", i);
        }
    }

    return 0;
}
