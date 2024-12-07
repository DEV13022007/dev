#include<stdio.h>
int main (){
    int arr1[8]={1,2,3,4,5,6,7,8};
    for (int i=0;i<8;i++){
        if(i%2==0){
            arr1[i]=arr1[i]+10;
        } else{
            arr1[i]=2*arr1[i];
        }
    }
    for(int i=0;i<8;i++){
        printf("%d ",arr1[i]);
    }
    return 0;
}