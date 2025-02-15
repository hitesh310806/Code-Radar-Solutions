#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else {
        // Check divisibility from 2 to the square root of num
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;  // No need to check further if a divisor is found
            }
        }
    }

    if (isPrime) {
        printf("Prime ");
    } else {
        printf("Not Prime");
    }

    return 0;
}
