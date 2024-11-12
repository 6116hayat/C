#include<stdio.h>

void onesol() {

    // Creating an structure
    struct vector{
        int row;
        int col;
    };

    struct vector v = {1, 2};
    printf("The value of vecotr %di + %dj", v.row, v.col);

}

// void two(){

//     // Define the struct inside the function
//     struct vector {
//         int row;
//         int col;
//     };

//     // Define the sumVector function inside SumVector
//     struct vector sumVector(struct vector v1, struct vector v2) {
//         struct vector result;
//         result.row = v1.row + v2.row;
//         result.col = v1.col + v2.col;
//         return result;
//     }

//     // Create and initialize two vectors
//     struct vector v1 = {1, 2};
//     struct vector v2 = {3, 4};

//     // Sum the vectors
//     struct vector sum = sumVector(v1, v2);

//     // Print the result
//     printf("The sum of vectors is (%d, %d)\n", sum.row, sum.col);
// }

void eightSol(){

    // Define the structure inside the function
    struct BankAccount {
        int accountNumber;    // Unique identifier for the account
        char accountHolder[50]; // Name of the account holder
        char accountType[20];   // Type of account (e.g., Savings, Checking)
        float balance;         // Current balance in the account
        char branchName[50];    // Branch where the account is held
        char contactNumber[15]; // Contact number of the account holder
    };

    // Initialize the structures for four customers
    struct BankAccount customer1 = {123456789, "John Doe", "Savings", 1500.75, "Main Branch", "+1234567890"};
    struct BankAccount customer2 = {987654321, "Alice Smith", "Checking", 2500.50, "North Branch", "+1234567891"};
    struct BankAccount customer3 = {456789123, "Bob Brown", "Savings", 3200.00, "East Branch", "+1234567892"};
    struct BankAccount customer4 = {321654987, "Charlie Davis", "Business", 5000.25, "West Branch", "+1234567893"};

    // Print account details for each customer
    printf("Customer 1:\nAccount Number: %d\nAccount Holder: %s\nAccount Type: %s\nBalance: %.2f\nBranch Name: %s\nContact Number: %s\n\n", 
        customer1.accountNumber, customer1.accountHolder, customer1.accountType, customer1.balance, customer1.branchName, customer1.contactNumber);

    printf("Customer 2:\nAccount Number: %d\nAccount Holder: %s\nAccount Type: %s\nBalance: %.2f\nBranch Name: %s\nContact Number: %s\n\n", 
        customer2.accountNumber, customer2.accountHolder, customer2.accountType, customer2.balance, customer2.branchName, customer2.contactNumber);

    printf("Customer 3:\nAccount Number: %d\nAccount Holder: %s\nAccount Type: %s\nBalance: %.2f\nBranch Name: %s\nContact Number: %s\n\n", 
        customer3.accountNumber, customer3.accountHolder, customer3.accountType, customer3.balance, customer3.branchName, customer3.contactNumber);

    printf("Customer 4:\nAccount Number: %d\nAccount Holder: %s\nAccount Type: %s\nBalance: %.2f\nBranch Name: %s\nContact Number: %s\n\n", 
        customer4.accountNumber, customer4.accountHolder, customer4.accountType, customer4.balance, customer4.branchName, customer4.contactNumber);
}


int main() {

    // Calling the function
    // onesol();
    eightSol();

    return 0;
}