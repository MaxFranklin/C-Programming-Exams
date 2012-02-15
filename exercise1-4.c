#include <stdio.h>

/*Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table? Answer:
 (Using the formula, C x 9 / 5 + 32 = F): */


main() {

    float celsius, fahr;
    float lower, upper, step;

    lower = 0;
    upper = 100;
    step = 10;

    celsius = lower;
    while (celsius <= upper) {
         fahr = (celsius * 9.0/5.0 + 32.0);
         printf ("%3.0f %6.1f\n", celsius, fahr);
         celsius = celsius + step;
     }

}

