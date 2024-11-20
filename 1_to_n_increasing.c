#include<stdio.h>
 void increasing( int b , int a){
    if(b>a){ return; }
    printf("%d\n",b);
    increasing(b+1,a); // using recursion
 }

int main ( ) {
    int n;
    printf("enter n");
    scanf("%d",&n);
    increasing(1,n);// calling

    return 0;
}