// #include<stdio.h>
// int main () {
//     /* to print zero and one trangle
//       1
//       0 1
//       1 0 1
//       0 1 0 1 ...and so on
//     */

//      int n;
//     printf("enter n");
//     scanf("%d",&n);
//     int a;
//     for (int i=1;i<=n;i++){
//          if(i%2!=0){
//             a=1;
//          } else{
//             a=0;
//          }
//         for(int j=1; j<=i; j++){
//             printf("%d ",a); 
//             // THIS IS  CONDITION IS IMPORTANT
//             if(a==0){
//                 a=1;
//             }else{
//                 a=0;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }



/* ANOTHER METHOD TO SOLVE */

#include<stdio.h>
int main () {
    /* to print zero and one trangle
      1
      0 1
      1 0 1
      0 1 0 1 ...and so on
    */

     int n;
    printf("enter n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for( int j= 1; j<=i;j++){
            if((i+j)%2==0){
                printf("1 ");
            } else{
                printf("0 ");
            }
        } printf("\n");
    } 
    return 0;
}