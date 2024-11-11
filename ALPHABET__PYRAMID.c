#include<stdio.h>
int main () {
     int n , b ;
    printf("enter n");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int j=1;j<=a;j++){
             b=64+j;
             char c=(char)a;
            printf("%c ",b);
        }a=a+2;
        printf("\n");
    }
     return 0;
    
    }