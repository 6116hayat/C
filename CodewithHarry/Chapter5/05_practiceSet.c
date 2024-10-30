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

int forceOfAttraction(){

    printf("Program to print the force of attraction on mass with g (g = 9.8) \n\n");

    float mass, gravity = 9.8, force;

    printf("Input the mass (in kg): \n");
    scanf("%f", &mass);

    force = mass * gravity ;

    printf("The force of earth on mass %.2f is : %.2f", mass, force );
}

int fibonacciSeries(){

    printf("Program to print the nth element of fibonacci series\n\n");

    int n, a = 0, b = 1, next;

    printf("Enter the nth term to print ffibonacci series upto nth term: ");
    scanf("%d", &n);

    for ( int i = 0; i <= n; i++){
        printf("At index %d the number is : %d \n", i, a);

        next = a + b; // Calculate the next term
        a = b; // update a to be previous b
        b = next; // update b to be the new term
    }
}

int sumOfNaturalNumbers(){

    printf("Program to print the sum of natural numbers upto n\n\n");

    int n, sum = 0;

    printf("Enter the nth element : ");
    scanf("%d",&n);

    for(int i = 0; i <= n; i ++){
        sum += i;
    }

    printf("Sum of natural numbers upto N : %d", sum);
}

int printPattern(){
    // *
    // ***
    // *****

    printf("Program to print the pattern: \n * \n *** \n ***** \n\n");

    int n, sum = 1; 

    printf("Enter the no of rows for the Pattern: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++ ){
        for(int j = 1; j <= sum; j++){
            printf("*");
        }
        sum += 2;
        printf("\n");
    }
}

int main() {

    //Calling the function
    // threeNumAvg();
    // celsiusTofarenheit();
    // forceOfAttraction();
    // fibonacciSeries();
    // sumOfNaturalNumbers();
    printPattern();



    return 0;
}