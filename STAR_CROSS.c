/*  star cross for odd number
*   *
 * *
  *
 * *
*   *
           */


#include<stdio.h>
int main (){
    int n,b =0,c=0;
    printf("enter any odd number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n; j++){
            b= j;
            c=n+1;
            if(i==b || i+j==c ){  
                printf("*");
            } else{
                printf(" ");
            }
        } printf("\n");

    }


    return 0;
}
