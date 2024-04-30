#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

void cTof();
void  fToc();

int main() {
    // Declare Variable(s)
    char scale;
    // Get input
    puts("Press C to convert from Fahrenheit to Celsius.");
    puts("Press F to convert from Celsius to Fahrenheit.");
    scale = getchar();
    scale = toupper(scale);
    printf("You chose: %c\n", scale);
    // Call correct function based on user input. Error checking.
    if (scale == 'C'){
        fToc();
    }
    else if (scale == 'F'){
        cTof();
    }
    else {
        puts("Incorrect input. Try again.");
        return 1;
    }
    return 0;
}

void fToc(){
    double tempF;
    double tempC;
    printf("Please enter the temperature in Fahrenheit: ");
    scanf("%lf", &tempF);
    tempC = (tempF - 32) * (5.0/9.0);
    printf("%.2lf Fahrenheit =  %.2lf Celsius\n",tempF, tempC);
}

void cTof(){
    double tempF;
    double tempC;
    printf("Please enter the temperature in Celsius: ");
    scanf("%lf", &tempC);
    tempF = (tempC * (9.0/5.0) + 32 );
    printf("%.2lf Celsius = %.2lf Fahrenheit\n",tempC, tempF);
    
}

