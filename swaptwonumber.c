// #include<stdio.h>
// int main () {
//      int n;
//     printf("enter n ");
//     scanf("%d",&n);
//     int r;
//     printf("enter r ");
//     scanf("%d",&r);
//     // using third variable
//     int c;
//     c=n;
//     n=r;
//     r=c;
//     printf(" n  is %d\n ",n);
//     printf(" r is  %d",r);
//     return 0;
// }

#include<stdio.h>
int main () {
     int n;
    printf("enter n ");
    scanf("%d",&n);
    int r;
    printf("enter r ");
    scanf("%d",&r);
    // using without third  variable
    n= n+r;
    r=n-r;
    n=n-r;
    printf(" n is  %d\n ",n);
    printf(" r is %d",r);
    return 0;
}

