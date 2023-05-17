#include <stdio.h>

int main() {
    int num = 6;
    int i, sum = 0;

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            printf("%d is divisible by %d\n", num, i);
        }
    }
    printf("Sum of divisors of %d is %d\n", num, sum);

    return 0;
}
