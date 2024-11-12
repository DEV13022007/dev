#include <stdio.h>

int main() {
    int num1, num2;
    int choice;
    char repeat;

    
    do {
        
        printf("\t\t\t\t MENU\n");
        printf("1  for Add\n");
        printf("2 for Sub\n");
        printf("3 for Multi\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        
        switch(choice) {
            case 1: 
                printf("Result is :: %d", num1 + num2);
                break;
            case 2: 
                printf("Result is :: %d",num1-num2);
                break;
            case 3: 
               printf("Result is :: %d", num1 * num2);
                break;   
            default:
                printf(" you press wrong key \n");
        }
        
        printf("\n for repeat (y/n): ");
        scanf(" %c", &repeat);  

    } while (repeat == 'y' || repeat == 'Y');  

   

    return 0;
}
