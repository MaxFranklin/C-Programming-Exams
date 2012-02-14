#include <stdio.h>

/*Exercise 1-8. Write a program to count blanks, tabs, and newlines. ctrl-d forces EOF to display program */


main()

{

    int nl, nw, nc, c;

    nl = nw = nc = 0;
    while((c = getchar()) != EOF)
	if(c == '\n')
	    ++nl;
        else if (c == ' ')
	    ++nw;
	else if (c == '\t')
   	    ++nc;
    printf("Blanks:%d  Tabs:%d  Newlines:%d\n", nw, nc, nl);

}
