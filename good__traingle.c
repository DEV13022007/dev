/*

1            1
12          21
123        321
1234      4321
12345    54321
123456  654321
12345677654321

*/


#include<stdio.h>
int main (){
    printf("enter n");
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        //for increasing number
        for(int j=1;j<=i;j++){
            printf("%d",j);                                  
        }
        // for middle space
         for( int j=i*2;j<n*2;j++){
                printf(" ");
        }
        // for decreasing number
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        
        printf("\n");
    }
   return 0;
}