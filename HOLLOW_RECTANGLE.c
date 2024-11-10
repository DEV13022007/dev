#include<stdio.h>
int main () {
    //to print hollow rectangle
     int m,n;
    printf("enter row ");
    scanf("%d",&m);
     printf("enter coloumn");
    scanf("%d",&n);
    for(int i=1; i<=m;i++){

        for(int j=1; j<=n;j++){
            if(i==1 || i==m || j==1 || j==n){
            printf("*");
        }else{printf(" ");}
        
         
        }printf("\n");
        
    }

     return 0;
    }
 