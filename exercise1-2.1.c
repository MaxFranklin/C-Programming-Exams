#include <stdio.h>
/*
Work Exercise Explained: Write a program that computes the temperature of Fahrenheit to Celsius in two forms.
1. Computed as integer arithmetic and 2. Computed as floating-point arithmetic (decimal points).

Answer 1.
*/
#include <stdio.h>

main(){

    int fahr, celsius;    
    int lower, upper, step;

    lower = 0;   
    upper = 300;    
    step = 20;

     fahr = lower;    
     while (fahr <= upper) {         
         celsius = 5 * (fahr-32) / 9;        
         printf ("%3d %6d\n", fahr, celsius);        
         fahr = fahr + step;    
      }
}

 
/*
Answer 2.
*/

foo(){
    
    float fahr, celsius;    
    float lower, upper, step;

    lower = 0;    
    upper = 300;    
    step = 20;

   fahr = lower;    
   while (fahr <= upper) {        
        celsius = (5.0/9.0) * (fahr-32.0);        
        printf ("%3.0f %6.1f\n", fahr, celsius);        
        fahr = fahr + step;    

    }

}
