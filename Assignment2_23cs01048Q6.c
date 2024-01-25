
#include <stdio.h>

int main() {
    int number;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is odd and within the range 100-200 using ternary operator
    (number % 2 != 0 && number >= 100 && number <= 200) ?
        printf("%d is odd and within the range 100-200.\n", number) :
        printf("%d is not odd or not within the range 100-200.\n", number);

    return 0;
}



