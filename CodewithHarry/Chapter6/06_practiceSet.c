#include<stdio.h>

void oneSol(){

    printf("Program to print the address of variable\n\n");

    int a = 1;

    int *ptr = &a;

    printf("Value of a : %d\n", a);
    printf("Value of 'a' using pointer : %d\n", *ptr);
    printf("Address of a : %p\n", &a);

}

void functionfortwoSol(int * ptr){
    printf("functionfortwoSol : address  of variable i : %p\n", ptr);
}
void twoSol(){
    printf("Program to print variable i, and the function\n\n");

    int i = 5; // variable created 
    int * ptr = &i; // pointer created 

    printf("twoSol function: Address of variable i : %p\n", &i);

    functionfortwoSol(ptr);
}

void updateValue(int * ptr){
    * ptr = 52; // updating the value at address
}
void threeSol(){
    printf("Program to change the value of variable to 10 times of current value \n\n");

    int var = 10;
    int* ptr = &var;

    printf("Before: Value of var = %d\n", var);

    updateValue(&var); // passing the address of var

    printf("After: Value of var = %d\n", var);

}

void sumAndaverage(int * ptr1, int * ptr2){
    printf("Sum of 2 Numbers :  %d\n", *ptr1 + *ptr2 );

    printf("Average of 2 numbers : %d", (*ptr1 + *ptr2)/2);
}
void fourSol(){ 
    printf("Program to print the Sum and average of 2 numbers using pointers\n\n");

    int a = 8;
    int b = 6;

    int * ptr1 = &a;
    int * ptr2 = &b;

    sumAndaverage(ptr1,ptr2);
}

void fiveSol(){
    printf("Program to print the value of variable using pointer to pointer\n\n");

    int a = 5; // variable created
    int* b = &a; // pointer 'b' pointing to variable a
    int** c = &b; // pointer 'c' pointing to pointer b

    printf("Value of a = %d\n", **c);
}

void multiplyByTen(int val) {
     val = val * 10; // this change won't affect the original variable 
     printf("Inside function: %d\n", val); // for demonstration
}
void sixSol(){ 
    int var = 5; 
    printf("Before: %d\n", var); 

    multiplyByTen(var); // passing the value of var 

    printf("After: %d\n", var);
}

int main() {

    // oneSol();
    // twoSol();
    // threeSol();
    // fourSol();
    // fiveSol();
    sixSol();



    return 0;
}