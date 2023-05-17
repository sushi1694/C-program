#include <stdio.h>

int main()
{
    int num, reversed = 0, r;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0)
    {
        r = num % 10;
        reversed = reversed * 10 + r;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
