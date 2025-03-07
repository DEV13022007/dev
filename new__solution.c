#include<stdio.h>
int main(){
   for(int i=1;i<=10;i++){
    for(int j=0;j<i-1;j++){
        printf(" ");
    }
    for(int a=10;a>=i;a--){
        printf(" *");
    }
    printf("\n");
   }
   for(int i=1;i<=10;i++){
    for(int j=10-i;j>0;j--){
        printf(" ");
    }
    for(int a=1;a<=i;a++){
        printf(" *");
    }
    printf("\n");
   }
    return 0;
}