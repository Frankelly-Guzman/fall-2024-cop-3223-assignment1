//********************************************************
// fracture.c
// Author: Frankelly Guzman
// UCFID: 5578967
// Date: 8/26/2024
// Class: COP 3223, Professor Parra
// Purpose: This program performs several calculations such as
// distance, perimeter, area, width and height of a circle.
// Input: None
//
// Output: (to the command line) A brief Message
// //********************************************************

#include <stdio.h>
#include <math.h>
#define PI 3.14159

//********************************************************
// double askForUserInput ()
//
// Purpose: Allows the capture of the user input to be used to return a
// coordinate point.
// Output: None
// Precondition: None
// Postcondition: double value
//********************************************************

double askForUserInput() {
    double user_input;

    scanf("%lf", &user_input);

    return user_input;
}

//********************************************************
// double calculateDiameter ()
//
// Purpose: Allows the capture of the user input to be used to return a
// coordinate point.
// Output: None
// Precondition: None
// Postcondition: double value
//********************************************************

double calculateDiameter(double point1, double point2 , double point3, double point4) {
    // Initialized variables
    
    double distance, diameter;

    distance = pow((point2 - point1), 2) + pow((point4 - point3), 2); // calculate the distance by using the power method
    diameter = sqrt(distance);

    return diameter;
}

//********************************************************
// double calculateDistance()
//
// Purpose: Calculates the distance between two points.
// Output: Prints three lines that displays the two points and the 
// distance between said points.
// Precondition:  User input has been collected.
// Postcondition: Returns a double that is the calculated distance/diameter.
//********************************************************

double calculateDistance() {
    double x1, x2, y1, y2, distanceSquareRoot; // initialized variables

    // Assign values to variables

    x1 = askForUserInput();
    x2 = askForUserInput();
    y1 = askForUserInput();
    y2 = askForUserInput();

    // Calculating the distance between the points

    distanceSquareRoot = calculateDiameter(x1, x2, y1, y2);
    
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    printf("The distance between the two points is %lf\n", distanceSquareRoot);
    
    return distanceSquareRoot;
}

//********************************************************
// double calculatePerimeter()
//
// Purpose: Calculates the perimeter of a circle
// Output: Prints three lines that displays the two points and the 
// perimeter around said points.
// Precondition: User input has been collected.
// Postcondition: Returns a double that shows how difficult this
// function was for me.
//********************************************************

double calculatePerimeter() {
    double x1, x2, y1, y2, distance, perimeter; // initialized variables

    // Assign values to variables

    x1 = askForUserInput();
    x2 = askForUserInput();
    y1 = askForUserInput();
    y2 = askForUserInput();
    distance = calculateDiameter(x1, x2, y1, y2); // Perform calculateDistance to find the diameter of the city
    perimeter = PI * distance; // Formula for perimeter of a circle is pi*2r or pi*diameter

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1); // Print the first coordinate pair
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2); // Print the second coordinate pair
    printf("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);
    
    return 1.0;
}

//********************************************************
// double calculateArea ()
//
// Purpose: Calculates the area of a circle
// Output: Prints the three lines that displays the coordinate pairs as well as the area of a circle.
// Precondition: x1, x2, y1, y2 have been collected from the user
// Postcondition: A double indicating how difficult this function was for me
//********************************************************

double calculateArea() {
    double x1, x2, y1, y2, diameter, radius, area; // initialized variables

    // Assign values to variables

    x1 = askForUserInput();
    x2 = askForUserInput();
    y1 = askForUserInput();
    y2 = askForUserInput();
    diameter = calculateDiameter(x1, x2, y1, y2);
    radius = diameter / 2;
    area = PI * pow(radius, 2);

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1); // Print the first coordinate pair
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2); // Print the second coordinate pair
    printf("The area of the city encompassed by your request is %.3lf\n", area);

    return 1.0;
}

//********************************************************
// double calculateWidth ()
//
// Purpose: Calculates the width of a circle
// Output: Coordinate Pairs
// Precondition: User input has been collected
// Postcondition: A double indicating how difficult this function was for me
//********************************************************

double calculateWidth() {
    double x1, x2, y1, y2, width; // Initialize variables

    // Assign values to variables

    x1 = askForUserInput();
    x2 = askForUserInput();
    y1 = askForUserInput();
    y2 = askForUserInput();
    width = calculateDiameter(x1, x2, y1, y2);

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1); // Print the first coordinate pair
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2); // Print the second coordinate pair
    printf("The width of the city encompassed by your request is %lf\n", width);
    
    return 1.0;
}

//********************************************************
// double calculateHeight ()
//
// Purpose: Calculates the height of a circle
// Output: Coordinate Pairs and the height of the circle.
// Precondition: User input has been collected
// Postcondition: A double indicating how difficult this function was for me
//********************************************************

double calculateHeight() {  
    double x1, x2, y1, y2, height; // Initialize variables

    // Assign values to variables

    x1 = askForUserInput();
    x2 = askForUserInput();
    y1 = askForUserInput();
    y2 = askForUserInput();
    height = calculateDiameter(x1, x2, y1, y2);

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1); // Print the first coordinate pair
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2); // Print the second coordinate pair
    printf("The height of the city encompassed by your request is %lf\n", height);
    
    return 1.0;
}


int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}