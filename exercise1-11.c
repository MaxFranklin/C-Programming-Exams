#include <stdio.h>


/*1) Count Words, Lines, and Characters from Input, Output Results. 2) How would you test the word count program? What kinds of input are most
likely to uncover bugs if there are any? If you input: word' '\t\nword. Output will count 4 words instead of two. As well, if you input one word a space then a tab, then one word, it counts 3 words. 
so to uncover bugs I would targer that part of my program in addition to others. */

main()

{

#define IN 1
#define OUT 0

	int c, nc, nl, nw, state;
	nc = nl = nw = 0;

	state = OUT;
	while((c = getchar()) != EOF) {
	    ++nc;
 	  if(c =='\n')
	    ++nl;
	  if(c == ' ' || c == '\t' || c == '\n')
	    state = OUT;
	  if(state == OUT) {
	    state = IN;
	    ++nw;
	  }
       }

	printf("\nCharacters:%d Line:%d  Words:%d\n", nc, nl, nw);
}
