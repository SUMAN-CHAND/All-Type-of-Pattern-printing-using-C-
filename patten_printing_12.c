#include<stdio.h>

int main(){
    int  n;
    printf("Enter the number of line ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
            
        }
        printf("\n");
    }
    for(int i=1;i<=n-1;i++){
        for(int j=n-1;j>=i;j--){
            printf("* ");
            // n--;
        }
        printf("\n");
    }
    return 0;
}