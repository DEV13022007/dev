#include<stdio.h>
int main () {
    int n,i=1,p,rev=0;
    printf("enter n");
    scanf("%d",&n);
    int a=n;
    for(i; i<=n; ){
        p=n%10;
        rev=rev*10+p;
        n=n/10;
    } printf("reerse no is %d\n",rev);
      if(a==rev){
        printf("palindrone number");
      } else{
        printf("not a palindrone number ");
      }
  
    return 0;

}