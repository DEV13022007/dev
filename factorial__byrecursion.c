#include<stdio.h>
int factorial(int a){
    if(a==1 || a==0){
        return 1;
    } return a* factorial(a-1); // call itself (using recursion ) 
}
int main () {
    int n;
    printf("enter n");
    scanf("%d",&n);
    int fact= factorial(n);
    printf("%d",fact);
    return 0;
}