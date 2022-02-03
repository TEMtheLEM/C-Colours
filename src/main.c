#include "colours.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	char *welcoming_msg = "Changing the colour and style of your text is too easy!";
	printf("%s%s%s\n", COLOUR_GREEN, welcoming_msg, COLOUR_RESET);
	printf("%s%s%s\n", UNDERLINE_RED, welcoming_msg, COLOUR_RESET);
	printf("%s%s%s\n", ITALIC_BLUE, welcoming_msg, COLOUR_RESET);

	char *blue_str = ColourString("Easily colour string variables", BOLD_BLUE);
	printf("%s%s\n", blue_str, COLOUR_RESET);
	free(blue_str);

	char *fun_msg = RainbowString("A mystical rainbow appears!", 0);
	printf("%s%s\n", fun_msg, COLOUR_RESET);
	free(fun_msg);

	char *more_fun_msg = RainbowString("A BOLD rainbow appears!", 1);
	printf("%s%s\n", more_fun_msg, COLOUR_RESET);
	free(more_fun_msg);

	return 0;
}
