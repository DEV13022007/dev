#include<stdio.h>
int main () {
     int n;
    printf("enter n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){//using ASCII value A=65,a=97 ....and so on
           int a=0;
        for(int j=1;j<=n;j++){
            int b=a+65;
            char w =(char)b;
            printf("%c  ",w );
            a++;
        }printf("\n");
    }
    return 0;
} 