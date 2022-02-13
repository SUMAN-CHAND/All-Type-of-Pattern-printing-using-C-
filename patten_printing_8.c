#include <stdio.h>
int main()
{
    int n;
    int speac = 1;
    int k=1;
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
    return 0;
}