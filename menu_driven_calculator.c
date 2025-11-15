#include <stdio.h>
int main(){
    int choice;
    float num1,num2,result;

    while (1) {
        printf("\n=================Simple Calcualtor===================");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice from 1 to 5\n");
        scanf("%d", &choice);

        if(choice == 5){
            printf("exiting the process... Goodbye!\n");
            break;
        }

        printf("enter two numbers: ");
        scanf("%f %f", &num1,&num2);

        switch(choice){
            case 1:
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

            case 2:
            result = num1-num2;
            printf("result = %.2f\n",result);
            break;

            case 3:
            result = num1 * num2;
            printf("result = %.2f\n",result);

            case 4:
            if(num2!=0)
            result = num1/num2;
            else{
                printf("Error : Division by zero is not possible");
                continue;
            }
            printf("result = %.2f\n",result);
            break;

            default:
            printf("please enter a number between 1 and 5!");
            break;


        }
    }

    return 0;

}