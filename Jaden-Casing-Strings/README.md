# Jaden Casing Strings

**Description**  
Jaden Smith, the son of Will Smith, is known for writing tweets where each word is capitalized. This kata requires you to transform a given string so that every word starts with an uppercase letter.

**Example**  
- Input: `how can mirrors be real if our eyes aren't real`  
- Output: `How Can Mirrors Be Real If Our Eyes Aren't Real`

---

## Implementation

```c
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *to_jaden_case(char *dest, const char *src) {
    int i = 0;
    int newWord = 1; // 1 if it's the start of a word

    while (src[i] != '\0') {
        // If it's the start of a word and is alphabetical
        if (newWord && isalpha((unsigned char)src[i])) {
            dest[i] = (char)toupper((unsigned char)src[i]);
            newWord = 0;
        } else {
            dest[i] = src[i];
            // If it's a space, the next character starts a new word
            if (src[i] == ' ') {
                newWord = 1;
            } else {
                newWord = 0;
            }
        }
        i++;
    }

    // Terminate the string
    dest[i] = '\0';

    return dest;
}

---
**Usage**
1. Include jaden_casing.c in your C project.
2. Call to_jaden_case(destination, source), ensuring destination has enough space.
3. Each word in source will be capitalized in destination.

Author: [Daniele Perez / Eestika]
Source: Codewars Kata