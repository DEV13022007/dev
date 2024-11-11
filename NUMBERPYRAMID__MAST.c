#include<stdio.h>
int main () {
     int n  ;
    printf("enter n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int l=1;l<=n-i;l++){ // for space 
            printf(" ");
        }
        for(int j=1;j<=i;j++){ // number triangle
            printf("%d",j);
        } for(int k=1;k<=i-1;k++){ // extra
            printf("%d",k);
        }
        printf("\n");
    }
    
     return 0;
    
    }