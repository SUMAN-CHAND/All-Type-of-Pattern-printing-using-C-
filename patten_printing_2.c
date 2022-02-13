#include<stdio.h>

int main(){
    int  n;
    printf("Enter the number of line ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            printf("* ");
            // n--;
        }
        printf("\n");
    }
    return 0;
}
// op vai 