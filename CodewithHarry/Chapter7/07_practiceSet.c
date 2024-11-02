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
    printf("Program to store Multiplication table :\n\n");

    

}

int main() {    

    oneSol();

    return 0;
}