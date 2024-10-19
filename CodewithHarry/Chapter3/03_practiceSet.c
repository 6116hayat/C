#include <stdio.h>

// Pass_Fail function
void passFail()
{

    // Declaring variables
    int sub1, sub2, sub3, total;
    float percent;

    // Marks input for sub1
    printf("Enter your marks in Subject 1: ");
    scanf("%d",&sub1);

    // Marks input for sub2
    printf("Enter your marks in Subject 2: ");
    scanf("%d",&sub2);

    // Marks input for sub3
    printf("Enter your marks in Subject 3: ");
    scanf("%d",&sub3);

    // Total Marks
    total = sub1 + sub2 + sub3;

    // Calculating the percentage 
    percent = (total/3.0);

    if (percent < 33){
        printf("You are fail!!, Your dad wont be coming after all. Percentage: %.2f\n", percent);
    } else if (percent >= 33 && percent < 40){
        printf("You are pass, whoosh A bullet dodged.  Percentage: %.2f\n", percent);
    }else{
        printf("Your are pass dude, party When??  Percentage: %.2f\n", percent);
    }
}

void incomeTax(){

    // Declaring variables
    float income, tax;

    printf("All the incomes Should be entered in terms Lakhs");

    printf("Enter your Income, Then We will tell you income Tax to be Paid ");
    scanf("%f", &income);

    if (income <= 2.5) {
        tax = 0;
    } else if (income <= 5) {
        tax = (income - 2.5) * 0.05;
    } else if (income <= 10) {
        tax = (2.5 * 0.05) + (income - 5) * 0.2;
    } else {
        tax = (2.5 * 0.05) + (5 * 0.2) + (income - 10) * 0.3;
    }

    printf("The income tax to be paid is: %.2f Lakhs\n", tax); 
}

int main()
{
    //Calling the function
    passFail();

    incomeTax();

    return 0;
}