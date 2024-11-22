/* 
*****
****
***
**
*
     */

#include<stdio.h>
int main () {
    int n;
    printf("enter n");
    scanf("%d",&n);
    int a=n;
    for(int i =1; i<=n;i++){
        for(int j=1;j<=a;j++){ // IN the condition we can also use (n+1-i)  result is same
            printf("*");
        } a--;
        printf("\n");
    }
    
    return 0;
    
    
    }
