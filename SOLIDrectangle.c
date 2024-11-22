/*    FOR SQUARE PATTERN
# # # # # 
# # # # #
# # # # #
# # # # #
# # # # #
*/


#include<stdio.h>
int main () {
    int m ,n;
    printf("enter number of rows =");
    scanf("%d",&m);
    printf("enter number of coloum =");
    scanf("%d",&n);
    for(int i=1;i<=m;i++){
        for(int i=1;i<=n;i++){
            printf("#");
        } printf("\n");
    }
    return 0;
}

// FOR SQUARE PATTERN

// #include<stdio.h>
// int main () {
//     int n;
//     printf("enter number for square pattern =");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int i=1;i<=n;i++){
//             printf("#");
//         } printf("\n");
//     }
//     return 0;
// }
