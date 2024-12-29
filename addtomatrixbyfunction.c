#include<stdio.h>
int main (){
    void add(int n,int m,int a[n][m],int b[n][m]);
     int n,m;
     printf("enter number of row");
     scanf("%d",&n);
      printf("enter number of column");
     scanf("%d",&m);
     printf("enter your 1 matrix  element");
     int a[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        scanf("%d",&a[i][j]);
        }
     }
     printf("enter your 2 matrix  element");
     int b[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        scanf("%d",&b[i][j]);
        }
     }
     add(n,m,a,b);
    return 0;
}
void add(int n,int m,int a[n][m],int b[n][m]){
    int c[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\n", c[i][j]);
        }
    }

}