#include<stdio.h>

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void oneSol(){
    printf("program of pointer arithmetic :");

    int size = 10;  // varibale declaring the size

    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    printf("The elements of Array : \n");
    printArray(arr, size);

    int * ptr = &arr[0]; // Array pointing to index 0 of array
    printf("Element at (ptr + 2)/index[2] = %d\n", *(ptr+2));
    printf("Element at (ptr + 6)/index[6] = %d\n", *(ptr+6));
}

void threeSol(){
    printf("Program to print Multiplication table and store in array :\n\n");

    int size = 10;
    int arr[size];

    int n ; // Variable for user input

    printf("Enter the number you want to print the Multiplication\n");
    scanf("%d",&n);

    for(int i = 1; i <= size; i++){
        arr[i-1] = n * i; // storing the multiple
    }

    printArray(arr, size);

}

void fiveSol(){
    printf("Program to reverse an array\n\n");

    int size = 5;

    int arr[] = {10,20,30,40,50};

    printf("The Original Array: \n");
    printArray(arr, size);

    int start = 0, end = size - 1;

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; 
        end--;
    }

    printf("The Reversed Array: \n");
    printArray(arr, size);
}

void sixSol(){
    printf("Program to count number of elements in array:\n Program to count the +ve number in array\n\n");

    int size = 10;
    int arr[] = {-4,-3,-2,-1,0,1,2,3,4,5};

    printArray(arr, size);

    int total = 0, positive = 0, negative = 0 ;

    for(int i = 0; i < size;  i++){
        total++;
        if(arr[i] > 0){
            positive ++;
        }else{
            negative ++;
        }
    }

    printf("Total number of elements: %d\n", total);
    printf("Total number of +ve elements: %d\n", positive);
    printf("Total number of -ve elements: %d\n", negative);
}

void sevenSol(){
    printf("program to store an array with 3 tables:\n\n");

    int arr[3][10]; // Declaring the array with Rows(3) and Columns(10)

    // Fill the first row with multiples of 2
    for(int i = 0; i < 10; i++){
        arr[0][i] = 2 * (i + 1);
    }

    // Fill the second row with multiples of 7
    for(int i = 0; i < 10; i++){
        arr[1][i] = 7 * (i + 1);
    }

    // Fill the third row with multiples of 9
    for(int i = 0; i < 10; i++){
        arr[2][i] = 9 * (i + 1);
    }

    // Print array
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}

void eightSol(){
    printf("program to store an array with 3 tables:\n\n");

    int arr[3][10]; // Declaring the array with Rows(3) and Columns(10)

    int first, second, third;

    printf("Enter the first Number for Table: \n");
    scanf("%d",&first);
    // Fill the first row with multiples of first
    for(int i = 0; i < 10; i++){
        arr[0][i] = first * (i + 1);
    }

    printf("Enter the second Number for Table: \n");
    scanf("%d",&second);
    // Fill the second row with multiples of second
    for(int i = 0; i < 10; i++){
        arr[1][i] = second * (i + 1);
    }

    printf("Enter the third Number for Table: \n");
    scanf("%d",&third);
    // Fill the third row with multiples of third
    for(int i = 0; i < 10; i++){
        arr[2][i] = third * (i + 1);
    }

    // Print array
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void nineSol(){
    printf("Program to print the address of 3-D array");

    int arr[2][3][4];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("%u ",&arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}


int main() {    

    // oneSol();
    // threeSol();
    // fiveSol();
    // sixSol();
    // sevenSol();
    // eightSol();
    nineSol();

    return 0;
}