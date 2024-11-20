#include<stdio.h>
int power(int a,int b){

// a^b = a * a^b-1
  if(b==0){
    return 1;}
  return a*power(a,b-1); // using recusion
  
 }

int main ( ) {
    int a;
    printf("enter base number");
    scanf("%d",&a);
    int b;
    printf("enter power number");
    scanf("%d",&b);
    int p=power(a,b); // calling
     printf("%d",p);
    return 0;
}