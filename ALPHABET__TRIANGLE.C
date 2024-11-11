#include<stdio.h>
int main (){
int n ,a,w;
    printf("enter n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
         } 
         for(int k=1;k<=i;k++){
            a=64+k;
            char w= (char)a;                    

            printf("%c",w);
         }
        printf("\n");
    }
    return 0;
}  