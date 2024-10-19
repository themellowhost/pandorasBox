#include <stdio.h>
#include  <stdlib.h>

int main(){
    float num1, num2, result;
    int choice; int flag;
    flag=1;
    while (flag==1){
        printf("\nChoose operation: \n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n5) Exit\n");
        scanf("%d",&choice);

        switch(choice){

            case 1:
            printf("\nEnter two numbers to be added: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("\nResult: %.2f + %.2f = %.2f", num1, num2, result);
            break;

            case 2:
            printf("\nEnter two numbers to be subtracted: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("\nResult: %.2f - %.2f = %.2f", num1, num2, result);
            break;

            case 3:
            printf("\nEnter two numbers to be multiplied: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("\nResult: %.2f x %.2f = %.2f", num1, num2, result);
            break;

            case 4:
            printf("\nEnter two numbers to be divided: ");
            scanf("%f %f", &num1, &num2);
            if(num2!=0){
            result = num1 / num2;
            printf("\nResult: %.2f / %.2f = %.2f", num1, num2, result);
            }
            else{
                printf("\nERROR! Cannot divide by zero!");
            }
            break;

            case 5:
            exit(0);

            default:
            printf("\nERROR! Invalid choice!\n");
            continue;
        }
        printf("\nDo you want to perform more calculations? (1 - Yes; 0 - No) ");
        scanf("%d",&flag);
        if(flag!=1){
            break;
            printf("Calculator terminated.");
        }
    }
}