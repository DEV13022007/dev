#include<stdio.h>
int main (){
    int arr1[6]={3,5,6,8,2,9};
    int x=11,count=0;
    for(int i=0;i<6;i++){
        for(int k=i+1;k<6;k++){
           for(int j=i+2;j<6;j++){
               if(arr1[i]+arr1[k]+arr1[j]==x){
                count=count+1;
                printf("(%d,%d,%d)\n",arr1[i],arr1[k],arr1[j]);
               } 
           }
        }
    } 
    printf("%d",count);
    return 0;
}