#include<stdio.h>
int power(int a,int b){

//     FOR b EVEN   a^b = a^b/2 *a^b/2
//  FOR b ODD  a^b= a^b/2 * a^b/2 * a
  if(b==0){
    return 1;}
    if (b%2==0){
        return power(a,b/2)*power(a,b/2);//  FOR b EVEN   a^b = a^b/2 *a^b/2
     } else {
      return power(a,b/2)*power(a,b/2) * a;//  FOR b ODD  a^b= a^b/2 * a^b/2 * a
     }
  
 }

int main ( ) {
    int a;
    printf("enter base number");
    scanf("%d",&a);
    int b;
    printf("enter power number");
    scanf("%d",&b);
    int p=power(a,b); // calling
     printf("value of%d power %d is %d",a,b,p);
    return 0;
}