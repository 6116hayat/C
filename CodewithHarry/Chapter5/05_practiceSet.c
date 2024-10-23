#include<stdio.h>

int threeNumAvg(){
    printf("Program to print 3 number avg:\n");

    printf("\n");

    int num1, num2, num3, avg;

    printf("Enter the number 1:");
    scanf("%d",&num1);

    printf("Enter the number 2:");
    scanf("%d",&num2);

    printf("Enter the number 3:");
    scanf("%d",&num3);

    avg = (num1 + num2 + num3)/3;

    printf("avg of your 3 nums: %d", avg);
    return avg;
}

int celsiusTofarenheit(){
    printf("Program to convert Celsius to Farenheit");

    printf("\n");

    float celsius, farenheit;

    printf("Enter the Celsius to convert: ");
    scanf("%f", &celsius);

    farenheit = (celsius * (9.0/5.0)) + 32;

    printf(" %f Celsius converted to farenheit = %.2f ", celsius, farenheit);
    return farenheit;
}

int main() {

    //Calling the function
    // threeNumAvg();
    celsiusTofarenheit();


    return 0;
}