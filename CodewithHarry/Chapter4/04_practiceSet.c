#include<stdio.h>

//program to print Table
void printTable(){

    printf("This is a program to print Table of desired Number");

    printf("\n");

    int n;

    printf("Enter the Num for the table: \n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        int product = i * n;
        printf("%d * %d = %d \n", n , i , product);
    }
    
}

int main() {

    //Caling the function
    printTable();

    return 0;
}