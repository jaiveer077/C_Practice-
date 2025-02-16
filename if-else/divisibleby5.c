#include <stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 5 == 0)
    {
        printf("%d is divisible by 5.\n", x);
    }
    else
    {
        printf("%d is not divisble by 5.\n", x);
    }

    return 0;
}