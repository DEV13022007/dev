#include<stdio.h>
 void sum( int n , int a){
   if(n==0){
     printf("%d",a);
     return;
   }
   sum(n-1,a+n); // using recusion
   return;
 }

int main ( ) {
    int n;
    printf("enter n");
    scanf("%d",&n);
    sum(n,0); // call

    return 0;
}