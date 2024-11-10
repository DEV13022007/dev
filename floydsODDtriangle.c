#include<stdio.h>
int main () {
    /* to print floyd's trangle
       1
       3 5
       7 9 11
       13 15 17 19  ...and so on
    */

     int n,b;
    printf("enter n");
    scanf("%d",&n);
    int a=1;
    for (int i=1;i<=n;i++){
        for(int j=1; j<=i; j++){
            // a=a+j;
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}