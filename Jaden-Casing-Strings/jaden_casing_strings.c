#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *to_jaden_case(char *dest, const char *src) {
    int i = 0;
    int newWord = 1; // 1 if is the start of a word

    while (src[i] != '\0') {
        // if beginnig of a word and is alfabetical character
        if (newWord && isalpha((unsigned char)src[i])) {
            dest[i] = (char)toupper((unsigned char)src[i]);
            newWord = 0;
        } else {
            dest[i] = src[i];
            // if is a space next will be a word
            if (src[i] == ' ') {
                newWord = 1;
            } else {
                newWord = 0;
            }
        }
        i++;
    }

    // String terminated
    dest[i] = '\0';

    return dest;
}