#include<stdio.h>
int main () {
    /* to print zero and one trangle
            *
          * *
        * * *
      * * * * ...and so on
    */

     int n ,m ,a;
    printf("enter n");
    scanf("%d",&n);
    printf("enter m");
    scanf("%d",&m);
    for(int i=1;i<=n; i++){
        int a= m+n;
        for(int j=1;j<=n-i; j++) {
             
            printf("@");
        } 
        // for(int k=1;k<=m; k++){
        //     printf("*");
        printf("\n");
        } 

        
    
    return 0;
}