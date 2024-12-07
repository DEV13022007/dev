#include<stdio.h>
int main (){
    int arr1[5],x ,count=0;
    printf("enter 5 element");
    for(int i=0;i<5;i++){
        scanf("%d",&arr1[i]);
        printf("%d\n ",arr1[i]);
    }
    printf("enter x");
    scanf("%d",&x);
    for(int i=0;i<5;i++){
        if(arr1[i]>x){
            count=count+1;
        }
    } printf(" greater number than%d is %d",x,count);

    return 0;
}