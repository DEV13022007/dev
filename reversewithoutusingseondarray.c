#include<stdio.h>
void reverse(int arr1[]){
    for(int i=0,j=5;i<j;i++,j--){
        int t =arr1[i];
        arr1[i]=arr1[j];
        arr1[j]=t;
       
    }
     return;

}

int main (){
   int arr1[6]={1,2,3,4,5,6};
   reverse(arr1);
    for(int i=0;i<=5;i++){
        printf("%d ",arr1[i]);
    }
    return 0;
}