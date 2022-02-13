#include<stdio.h>
int main(){
    int n;
    // n=number of rows;
    printf("Enter the number of lines  : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int speac=1;speac<=(n-i);speac++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}