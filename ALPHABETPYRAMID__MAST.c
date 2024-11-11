#include<stdio.h>
int main () {
     int n  ;
    printf("enter n");
    scanf("%d",&n); 
    for(int i=1;i<=n;i++){
        for (int k=1; k<=n-i;k++){
            printf(" ");

        }
     for(int j=1;j<=i;j++){
        int a=64+j;
        char c=(char)a;
        printf("%c",c);
       }
       for(int j=1;j<=i-1;j++) {
        int a=64+j;
        char c=(char)a;
        printf("%c",c);
       }
     printf("\n");
    }


     return 0;
    }
