#include <stdio.h>

int factorial(int nb)
{
    if (nb < 0)
        return 0; /* return 0 for negative input as an error signal */
    if (nb == 0)
        return 1; /* 0! = 1 */
    return nb * factorial(nb - 1);
}


{
    int n;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Bad input\n");
        return 1;
    }

    if (n < 0) {
        printf("Negative number: factorial undefined (return 0)\n");
        return 1;
    }

    printf("%d! = %d\n", n, factorial(n));
    return 0;
}