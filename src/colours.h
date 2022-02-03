// Begin of colours.h
#pragma once



#define   COLOUR_RESET            "\033[0m"

// REGULAR
#define   COLOUR_GREY             "\033[30m"
#define   COLOUR_RED              "\033[31m"
#define   COLOUR_GREEN            "\033[32m"
#define   COLOUR_YELLOW           "\033[33m"
#define   COLOUR_BLUE             "\033[34m"
#define   COLOUR_MAGENTA          "\033[35m"
#define   COLOUR_CYAN             "\033[36m"
#define   COLOUR_WHITE            "\033[37m"

#define   BRIGHT_GREY             "\033[90m"
#define   BRIGHT_RED              "\033[91m"
#define   BRIGHT_GREEN            "\033[92m"
#define   BRIGHT_YELLOW           "\033[93m"
#define   BRIGHT_BLUE             "\033[94m"
#define   BRIGHT_MAGENTA          "\033[95m"
#define   BRIGHT_CYAN             "\033[96m"
#define   BRIGHT_WHITE            "\033[97m"

// BOLD
#define   BOLD_GREY               "\033[1;30m"
#define   BOLD_RED                "\033[1;31m"
#define   BOLD_GREEN              "\033[1;32m"
#define   BOLD_YELLOW             "\033[1;33m"
#define   BOLD_BLUE               "\033[1;34m"
#define   BOLD_MAGENTA            "\033[1;35m"
#define   BOLD_CYAN               "\033[1;36m"
#define   BOLD_WHITE              "\033[1;37m"

#define   BOLD_BR_GREY            "\033[1;90m"
#define   BOLD_BR_RED             "\033[1;91m"
#define   BOLD_BR_GREEN           "\033[1;92m"
#define   BOLD_BR_YELLOW          "\033[1;93m"
#define   BOLD_BR_BLUE            "\033[1;94m"
#define   BOLD_BR_MAGENTA         "\033[1;95m"
#define   BOLD_BR_CYAN            "\033[1;96m"
#define   BOLD_BR_WHITE           "\033[1;97m"

// ITALICS
#define   ITALIC_GREY             "\033[3;30m"
#define   ITALIC_RED              "\033[3;31m"
#define   ITALIC_GREEN            "\033[3;32m"
#define   ITALIC_YELLOW           "\033[3;33m"
#define   ITALIC_BLUE             "\033[3;34m"
#define   ITALIC_MAGENTA          "\033[3;35m"
#define   ITALIC_CYAN             "\033[3;36m"
#define   ITALIC_WHITE            "\033[3;37m"

#define   ITALIC_BR_GREY          "\033[3;90m"
#define   ITALIC_BR_RED           "\033[3;91m"
#define   ITALIC_BR_GREEN         "\033[3;92m"
#define   ITALIC_BR_YELLOW        "\033[3;93m"
#define   ITALIC_BR_BLUE          "\033[3;94m"
#define   ITALIC_BR_MAGENTA       "\033[3;95m"
#define   ITALIC_BR_CYAN          "\033[3;96m"
#define   ITALIC_BR_WHITE         "\033[3;97m"

// UNDERLINES
#define   UNDERLINE_GREY          "\033[4;30m"
#define   UNDERLINE_RED           "\033[4;31m"
#define   UNDERLINE_GREEN         "\033[4;32m"
#define   UNDERLINE_YELLOW        "\033[4;33m"
#define   UNDERLINE_BLUE          "\033[4;34m"
#define   UNDERLINE_MAGENTA       "\033[4;35m"
#define   UNDERLINE_CYAN          "\033[4;36m"
#define   UNDERLINE_WHITE         "\033[4;37m"

#define   UNDERLINE_BR_GREY       "\033[4;90m"
#define   UNDERLINE_BR_RED        "\033[4;91m"
#define   UNDERLINE_BR_GREEN      "\033[4;92m"
#define   UNDERLINE_BR_YELLOW     "\033[4;93m"
#define   UNDERLINE_BR_BLUE       "\033[4;94m"
#define   UNDERLINE_BR_MAGENTA    "\033[4;95m"
#define   UNDERLINE_BR_CYAN       "\033[4;96m"
#define   UNDERLINE_BR_WHITE      "\033[4;97m"

// INVERSE
#define   INVERSE_GREY            "\033[7;30m"
#define   INVERSE_RED             "\033[7;31m"
#define   INVERSE_GREEN           "\033[7;32m"
#define   INVERSE_YELLOW          "\033[7;33m"
#define   INVERSE_BLUE            "\033[7;34m"
#define   INVERSE_MAGENTA         "\033[7;35m"
#define   INVERSE_CYAN            "\033[7;36m"
#define   INVERSE_WHITE           "\033[7;37m"

#define   INVERSE_BR_GREY         "\033[7;90m"
#define   INVERSE_BR_RED          "\033[7;91m"
#define   INVERSE_BR_GREEN        "\033[7;92m"
#define   INVERSE_BR_YELLOW       "\033[7;93m"
#define   INVERSE_BR_BLUE         "\033[7;94m"
#define   INVERSE_BR_MAGENTA      "\033[7;95m"
#define   INVERSE_BR_CYAN         "\033[7;96m"
#define   INVERSE_BR_WHITE        "\033[7;97m"

/**
 * ======================
 * BACKGROUND DEFINITIONS
 * ======================
 */

// REGULAR
#define   BACKG_GREY              "\033[40m"
#define   BACKG_RED               "\033[41m"
#define   BACKG_GREEN             "\033[42m"
#define   BACKG_YELLOW            "\033[43m"
#define   BACKG_BLUE              "\033[44m"
#define   BACKG_MAGENTA           "\033[45m"
#define   BACKG_CYAN              "\033[46m"
#define   BACKG_WHITE             "\033[47m"

#define   BACKG_BR_GREY           "\033[100m"
#define   BACKG_BR_RED            "\033[101m"
#define   BACKG_BR_GREEN          "\033[102m"
#define   BACKG_BR_YELLOW         "\033[103m"
#define   BACKG_BR_BLUE           "\033[104m"
#define   BACKG_BR_MAGENTA        "\033[105m"
#define   BACKG_BR_CYAN           "\033[106m"
#define   BACKG_BR_WHITE          "\033[107m"

// BOLD
#define   BOLD_BG_GREY            "\033[1;40m"
#define   BOLD_BG_RED             "\033[1;41m"
#define   BOLD_BG_GREEN           "\033[1;42m"
#define   BOLD_BG_YELLOW          "\033[1;43m"
#define   BOLD_BG_BLUE            "\033[1;44m"
#define   BOLD_BG_MAGENTA         "\033[1;45m"
#define   BOLD_BG_CYAN            "\033[1;46m"
#define   BOLD_BG_WHITE           "\033[1;47m"

#define   BOLD_BG_BR_GREY         "\033[1;100m"
#define   BOLD_BG_BR_RED          "\033[1;101m"
#define   BOLD_BG_BR_GREEN        "\033[1;102m"
#define   BOLD_BG_BR_YELLOW       "\033[1;103m"
#define   BOLD_BG_BR_BLUE         "\033[1;104m"
#define   BOLD_BG_BR_MAGENTA      "\033[1;105m"
#define   BOLD_BG_BR_CYAN         "\033[1;106m"
#define   BOLD_BG_BR_WHITE        "\033[1;107m"

// ITALICS
#define   ITALIC_BG_GREY          "\033[3;40m"
#define   ITALIC_BG_RED           "\033[3;41m"
#define   ITALIC_BG_GREEN         "\033[3;42m"
#define   ITALIC_BG_YELLOW        "\033[3;43m"
#define   ITALIC_BG_BLUE          "\033[3;44m"
#define   ITALIC_BG_MAGENTA       "\033[3;45m"
#define   ITALIC_BG_CYAN          "\033[3;46m"
#define   ITALIC_BG_WHITE         "\033[3;47m"

#define   ITALIC_BG_BR_GREY       "\033[3;100m"
#define   ITALIC_BG_BR_RED        "\033[3;101m"
#define   ITALIC_BG_BR_GREEN      "\033[3;102m"
#define   ITALIC_BG_BR_YELLOW     "\033[3;103m"
#define   ITALIC_BG_BR_BLUE       "\033[3;104m"
#define   ITALIC_BG_BR_MAGENTA    "\033[3;105m"
#define   ITALIC_BG_BR_CYAN       "\033[3;106m"
#define   ITALIC_BG_BR_WHITE      "\033[3;107m"

// UNDERLINES
#define   UL_BG_GREY              "\033[4;40m"
#define   UL_BG_RED               "\033[4;41m"
#define   UL_BG_GREEN             "\033[4;42m"
#define   UL_BG_YELLOW            "\033[4;43m"
#define   UL_BG_BLUE              "\033[4;44m"
#define   UL_BG_MAGENTA           "\033[4;45m"
#define   UL_BG_CYAN              "\033[4;46m"
#define   UL_BG_WHITE             "\033[4;47m"

#define   UL_BG_BR_GREY           "\033[4;100m"
#define   UL_BG_BR_RED            "\033[4;101m"
#define   UL_BG_BR_GREEN          "\033[4;102m"
#define   UL_BG_BR_YELLOW         "\033[4;103m"
#define   UL_BG_BR_BLUE           "\033[4;104m"
#define   UL_BG_BR_MAGENTA        "\033[4;105m"
#define   UL_BG_BR_CYAN           "\033[4;106m"
#define   UL_BG_BR_WHITE          "\033[4;107m"


// INVERSE
#define   INVERSE_BG_GREY         "\033[7;40m"
#define   INVERSE_BG_RED          "\033[7;41m"
#define   INVERSE_BG_GREEN        "\033[7;42m"
#define   INVERSE_BG_YELLOW       "\033[7;43m"
#define   INVERSE_BG_BLUE         "\033[7;44m"
#define   INVERSE_BG_MAGENTA      "\033[7;45m"
#define   INVERSE_BG_CYAN         "\033[7;46m"
#define   INVERSE_BG_WHITE        "\033[7;47m"

#define   INVERSE_BG_BR_GREY      "\033[7;100m"
#define   INVERSE_BG_BR_RED       "\033[7;101m"
#define   INVERSE_BG_BR_GREEN     "\033[7;102m"
#define   INVERSE_BG_BR_YELLOW    "\033[7;103m"
#define   INVERSE_BG_BR_BLUE      "\033[7;104m"
#define   INVERSE_BG_BR_MAGENTA   "\033[7;105m"
#define   INVERSE_BG_BR_CYAN      "\033[7;106m"
#define   INVERSE_BG_BR_WHITE     "\033[7;107m"



char *ColourString(const char *str, const char *clr);
char *RainbowString(const char *str, const char bold);

// End of colours.h
