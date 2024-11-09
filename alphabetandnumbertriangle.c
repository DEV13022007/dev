#include<stdio.h>
int main () {
     int n;
    printf("enter n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
           int a=0;
           if(i%2==0){
        for(int j=1;j<=i;j++){ 
            int b=a+65;
            char w =(char)b;
            printf("%c  ",w );
            a++;
        }}else{ for(int j=1;j<=i;j++){
            printf("%d  ",j);
        }
            
        }

        printf("\n");
    }
    return 0;
} 