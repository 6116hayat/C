#include<stdio.h>
#include<string.h>

void fgetsFunction(){
    char str[100];

    printf("Enter the String: ");
    fgets(str, sizeof(str), stdin);

    printf("Your String: %s", str);

}

void twoSol(){
    printf("Program to print the string from user\n\n");

    char ch;
    printf("String with single char: ");
    scanf("%c", &ch);
    printf("You entered : %c \n\n", ch);

    char str[100];
    printf("String with line: ");
    scanf("%s",&str);
    printf("You entered : %s \n\n", str);

    if(ch==str[0]){
        printf("Matches\n");
    }else{
        printf("Don't\n");
        
    }

}

void threeSol(){
    printf("Program to print the strlen() \n\n");

    char str[100];
    printf("Enter the Line: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character that fgets() stores
    str[strcspn(str, "\n")] = 0;

    int leng = strlen(str);
    printf("The length of String : %d",leng);

}

void fourSol(){
    printf("Program to slice the String: \n\n");

    char str[] = "Umar Hayat";
    int m = 1; // Starting index (inclusive)
    int n = 7; // Ending index (exclusive)

    // Make sure indices are within bounds
    if (m < 0 || n > strlen(str) || m > n) {
        printf("Invalid indices for slicing.\n");
        return;
    }

    char sliced[100];
    int j = 0;

    for (int i = m; i < n; i++) {
        sliced[j++] = str[i];
    }
    sliced[j] = '\0'; // Null-terminate the new string

    printf("Original String: %s\n", str);
    printf("Sliced String: %s\n", sliced);
}


void fiveSol(){
    printf("Program to strcpy() \n\n");

    char source[] = "Harry";
    char target[30];
    strcpy(target,source);

    printf("Source: %s\n", source);
    printf("Target: %s\n", target);
}

void eightSol(){
    printf("Program to count the occurence of an character in a String :\n\n");

    char str[100];

    printf("Enter the String: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character that fgets() stores
    str[strcspn(str, "\n")] = 0;

    printf("Your String: %s \n", str);

    char ch;
    printf("Enter the character to count: ");
    scanf(" %c",&ch);

int count = 0;

    // for loop
    for(int i = 0; i < strlen(str); i++ ){
        if(str[i] == ch){
            count ++;
        }
    }

    printf("The character '%c' occurs %d times in the string.\n", ch, count);
}

void nineSol(){
    printf("Progam to check if the character is present: \n\n");

    char str[100];

    printf("Enter the String: ");
    fgets(str, sizeof(str), stdin);

    printf("Your String: %s \n", str);

    char ch;
    printf("Enter the character to count: ");
    scanf(" %c",&ch);

    // for loop
    int found = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            found = 1;
            break;
            }
        } 
        
        if (found) {
            printf("String contains the '%c' character.\n", ch);
            } else { 
                printf("String does not contain the '%c' character.\n", ch);
            }

}

int main() {

    //Calling the Function
    // twoSol();
    // threeSol();
    // fourSol();
    // fiveSol();
    // eightSol();
    // nineSol();


    return 0;
}