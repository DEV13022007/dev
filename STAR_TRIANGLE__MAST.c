#include<stdio.h>
int main () {
    /* to print zero and one trangle
            *
          * *
        * * *
      * * * * ...and so on
    */

     int n;
    printf("enter n");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        for(int j=1 ; j<=n-i; j++){ // for space we make new loop
             printf(" ");
             } 
             for( int k=1;k<=i;k++){
                printf("*");

        } 
        printf("\n");
    }
    return 0;
}