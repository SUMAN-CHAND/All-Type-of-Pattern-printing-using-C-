#include <stdio.h>
int main()
{
    int n;
    int k=1;
    int speac = 1;
    
    printf("Enter the number of rows  : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (speac = 1; speac <= (n - i); speac++)
        {
            printf(" ");
        }
        for (int j = 1; j <= ((i*2)-1); j++)
        {
            printf("*");
            
        }
        printf("\n");
        
    }
    for (int i = n-1; i >= 0; i--)
    {
        for (int space = 0; space <= ((n-1) - i); space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (((n-1) + i) - k); j++)
        {
            printf("*");
        }
        k++;
        printf("\n");
    }
    return 0;
}