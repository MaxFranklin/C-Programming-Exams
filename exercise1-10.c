#include <stdio.h>

/* Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
unambiguous way. */

main()

{

    int c;

    while((c = getchar()) != EOF) {
        if(c == '\t') {
        putchar('\\');
        putchar('t');
       }
        if (c == '\b') { 	/*it won't print "\b" when the user presses the backspace key,
				I believe the backspace character is processed by the console driver and not delivered to the program.
				I may user getchar with different arguments or prepare a file with embedded backspaces and redirect input from it;
				this way the driver is bypassed, and we will see the "\b". */
        putchar('\\');
        putchar('b');
       }
        if (c == '\\') {
        putchar('\\');
       }
	if (c != '\t' || c != '\b' || c != '\\') {
 	putchar(c);
       }

   }
}
