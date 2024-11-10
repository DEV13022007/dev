#include<stdio.h>
int main () {
    /* to print floyd's trangle
       1
       2 3
       4 5 6
       7 8 9 10  ...and so on
    */

     int n;
    printf("enter n");
    scanf("%d",&n);
    int a=1;
    for (int i=1;i<=n;i++){
        for(int j=1; j<=i; j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}