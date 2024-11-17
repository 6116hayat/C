#include<stdio.h>

void firstSol(){
    FILE * ptr;
    ptr = fopen("threeIntegers.txt", "r");
    int num;

    fscanf(ptr, "%d", &num);
    printf("The Value of integer : %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("The Value of integer : %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("The Value of integer : %d\n", num);
    
    fclose(ptr);
}

void secondSol(){

    int num;
    printf("Enter the Number for the Table\n");
    scanf("%d",&num);

    FILE * file = fopen("table.txt", "w");
    if(file == NULL){
        printf("Error Opening File!\n");
        return;
    }

    fprintf(file, "Multiplication Table for %d \n", num);
    fprintf(file, "--------------------------\n");
    for(int i = 1; i <= 10; i++){
        fprintf(file, "%d x %d = %d\n", num , i , num*i);
    }
    fclose(file);
    printf("Program has been finished!!");
}


int main() {

    // firstSol();
    secondSol();

    return 0;
}