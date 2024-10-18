#include<stdio.h>
#define PI 3.14159

// int hardCodeInput(void){

//     printf("This Program prints area of rectangle on hard code inputs!! \n");

//     // Declaring and Storing variables
//     int length = 10, breadth = 20;

//     // Calculating Area
//     int rectArea = (length * breadth);

//     // Printing Result
//     printf("Area of Rectangle: %d\n", rectArea);
//     return rectArea;
// }

// int userInput(void){

//     printf("This program takes input from the User and finds area of the rectangle. \n");

//     // Storing the variables 
//     int Length, Breadth;

//     // Taking user input for the length
//     printf("Enter the Length :");
//     scanf("%d", &Length); 

//     // Taking user input for the breadth
//     printf("Enter the Breadth : \n");
//     scanf("%d", &Breadth); 

//     // Calculating the Area
//     int rectArea = (Length * Breadth);

//     // Printing Result
//     printf("Area of Rectangle: %d\n", rectArea);
//     return rectArea;
// }

// double circleArea_cylinderVolume(void){
//     printf("This program finds area of circle and Volume of Cylinder");

//     //Storing the variables
//     double radius, height, area, volume;

//     // Taking the Radius 
//     printf("Enter the Radius of circle");
//     scanf("%lf", &radius);

//     // Calculating the Area of circle 
//     area = PI * radius * radius;

//     // Priting the area of circle 
//     printf("The Area of circle : %.2lf\n", area);

//     // Taking the height 
//     printf("Enter the Height of cylinder");
//     scanf("%lf", &height);

//     // Calculating the Volume of Cylinder 
//     volume = PI * radius * radius * height;

//     // Priting Volume of Cylinder 
//     printf("The Volume of Cylinder : %.2lf\n", volume);

//     return 0;
// }

double celsiusTofahrenheit(void){

    printf("Program for converting celsius into farenheit");

    double celsius, fahrenheit;

    printf("Enter temperature into Celsius :");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * (9.0 / 5.0)) + 32.0;
    printf("Temp in Fahrenheit : %.2lf\n", fahrenheit);

    return 0;
}

int main() {

    // printf("Ques 1:  Area of Rectangle \n");
    // // Area of Rectangle 
    // hardCodeInput(); // function 1
    // userInput(); // function 2

    // printf("Ques 2:  Area of Circle and Volume of Cylinder \n");
    // // Area of Circle and Volume of Cylinder
    // circleArea_cylinderVolume();

    printf("Ques 3:  Converting Celsius into Fahrenheit \n");
    celsiusTofahrenheit();

    return 0;
}