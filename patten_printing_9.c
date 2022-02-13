#include <stdio.h>

int main()
{
    int n;
    int k = 1;
    printf("Enter the number of rows  : ");
    scanf("%d", &n);
    for (int i = n; i >= 0; i--)
    {
        for (int space = 0; space <= (n - i); space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= ((n + i) - k); j++)
        {
            printf("*");
        }
        k++;
        printf("\n");
    }
    return 0;
}
// op vai