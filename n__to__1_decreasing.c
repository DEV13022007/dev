/* to print
for 5
5 4 3 2 1
*/

#include<stdio.h>
void number(int n ){
    if (n==0){return;}
    printf("%d\n",n);
     number(n-1);// using recusion
    return;
}

int main () {
    int n;
    printf("enter n ");
    scanf("%d",&n);
    number(n);// calling
    return 0;


}
