/* to print 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8
*/


#include<stdio.h>
int main () {
    int m,n;
    printf("enter no. of row= ");
    scanf("%d",&m);
    printf("enter no. of coloumn = ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
