#include<stdio.h>


void oneSol(){

    printf("Program to print the address of variable\n\n");

    int a = 1;

    int *ptr = &a;

    printf("Value of a : %d", a);
    printf("Value of a : ", &ptr);

}

int main() {


    return 0;
}