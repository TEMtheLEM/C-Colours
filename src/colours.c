#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "colours.h"

char *ColourString(const char *str, const char *clr) {
	// simply calc the buffer needed, allocate it and save the buffer for later.
	const size_t buff = strlen(clr) + strlen(str) + 1;
	char *new = malloc(buff);

	// something happened!
	if (!new)
		return NULL;

	// why I saved buff.
	snprintf(new, buff, "%s%s", clr, str);

	return new;
}

char *RainbowString(const char *str, const char bold) {
	char *new = calloc(sizeof (char), 1),
	     // colour step: starts at red (1), ends at cyan (6) in the loop
	     s = 1,
	     // bright step: always swaps between 0 and 6 every iteration
	     //    6 because we add b to 3 each iteration to get both 3#m (dim) or 9#m (bright)
	     b = 0;

	// keeps constant track of size of the string (in bytes)
	size_t size = 0;

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ' ') {
			// only allocate 1 extra byte for a space,
			// then move on without colouring the space
			new = realloc(new, ++size);
			strcat(new, " ");
			continue;
		}

		// bufflen represents an example of the size we need for this step.
		const int bufflen = sizeof "\033[0;00mC";

		char cur[bufflen];
		snprintf(cur, bufflen, "\033[%1d;%1d%1dm%c", bold, b+3, s, str[i]);

		// allocate more space for the new colourful character and append it.
		size = (bufflen - 1) * (i + 1) + 1;
		new = realloc(new, size);

		strcat(new, cur);

		// swap brightness
		if (b) {
			b = 0;
			// increment s if bright, reset at 7
			if (++s == 7)
				s = 1;
		}
		else
			b = 6;
	}

	return new;
}
