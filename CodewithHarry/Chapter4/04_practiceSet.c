#include<stdio.h>
#include<math.h>

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

// Program to Print the reverse Table 
void reverseTable(){
    
    printf("Program to print reverse table of a Num");

    printf("\n");

    int n;

    printf("Enter the Num for the reverse table: \n");
    scanf("%d", &n);

    for (int i = 10; i > 0; i--)
    {
        int product = i * n;
        printf("%d * %d = %d \n", n , i , product);
    }
}

// Program to print natural numbers to n
void printNaturalNum(){
    
    printf("Program to print natural numbers upto n");

    printf("\n");

    int n;

    printf("Enter the Num for the natural numbers: \n");
    scanf("%d", &n);

    printf("Natural numbers upto n are: \n");

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
}

// Program to print sum of natural numbers upto n (Using for loop)
void sumNaturalNum1(){
    
    printf("Program to print natural numbers upto n");

    printf("\n");

    int n;

    printf("Enter the Num for the natural numbers: \n");
    scanf("%d", &n);


    int sum =  0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum of Natural numbers upto n = %d \n", sum);
}

// Program to print sum of natural numbers upto n (Using Do-While Loop)
void sumNaturalNum2(){
    
    printf("Program to print natural numbers upto n");

    printf("\n");

    int n;

    printf("Enter the Num for the natural numbers: \n");
    scanf("%d", &n);


    int sum =  0;

    int i = 0;
    do{
        sum += i;
        i++;
    } while(i <= n);

    printf("Sum of Natural numbers upto n = %d \n", sum);
}

// Program to print sum of natural numbers upto n (While Loop)
void sumNaturalNum3(){
    
    printf("Program to print natural numbers upto n");

    printf("\n");

    int n;

    printf("Enter the Num for the natural numbers: \n");
    scanf("%d", &n);


    int sum =  0;

    int i = 0;
    while(i <= n){
        sum += i;
        i++;
    }

    printf("Sum of Natural numbers upto n = %d \n", sum);
}

// Program to print sum of multiples of any Number(using for-loop)
void sumMultiples(){

    printf("Program to print sum of Multiples of n \n");

    printf("\n");

    int n;

    printf("Enter the number to print multiples Sum \n");
    scanf("%d", &n);

    int sum = 0;

    for(int i = 1;i <= 10; i++ ){

        int product = 1;
        product = i * n;
        sum += product;

    }

    printf("Sum of multiples of %d = %d", n , sum);
}

// Program to print sum of factorial of any Number (using for-loop)
void sumFactorial1(){

    printf("Program to print sum of factorial of n \n");

    printf("\n");

    int n;

    printf("Enter the number to print factorial Sum \n");
    scanf("%d", &n);

    int sum = 0;

    for(int i = 1;i <= n; i++ ){
        int product = 1;
        for(int j = 1; j <= i; j++){
        product *= j;
        }
        sum += product;
    }

    printf("Sum of factorials of %d = %d", n , sum);
}

// Program to print sum of factorial of any Number (using While-loop)
void sumFactorial2(){

    printf("Program to print sum of factorial of n \n");

    printf("\n");

    int n;

    printf("Enter the number to print factorial Sum \n");
    scanf("%d", &n);

    int sum = 0;

    int i = 1;
    while(i <= n){
        int product = 1;

        int j = 1;
        while(j <= i){
            product *= j;
            j++;
        }
        sum += product;
        i++;
    }

    printf("Sum of factorials of %d = %d", n , sum);
}

// Program to check a number is prime or not (Using for-loop)
void primeNot1(){

    printf("Program to chheck a number is prime or not \n");
    printf("\n");

    int n;
    printf("Enter a number to check a number is Prime or Not \n");
    scanf("%d",&n);

    if(n <= 1){
        printf("You have entered, A number less than 1 or 1(Which is not prime) \n");
        return;
    } 

    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            printf("It is a not Prime Number: ");
            return;
        }
    }
    printf("Number %d is a Prime Number: ",n);
}


// Program to check a number is prime or not (While loop)
void primeNot2(){

    printf("Program to chheck a number is prime or not \n");
    printf("\n");

    int n;
    printf("Enter a number to check a number is Prime or Not \n");
    scanf("%d",&n);

    if(n <= 1){
        printf("You have entered, A number less than 1 or 1(Which is not prime) \n");
        return;
    } 

    int i = 2;

    do{
        if(n%i == 0){
            printf("Number %d is not a Prime number \n",n);
            return;
        }
        i++;
    }while(i <= sqrt(n));
    printf("Number %d is a Prime Number\n",n); 
}

int main() {

    //Caling the function

    // printTable();

    // reverseTable();

    // printNaturalNum();

    // sumNaturalNum3();

    // sumMultiples();

    // sumFactorial2();

    primeNot2();



    return 0;
}