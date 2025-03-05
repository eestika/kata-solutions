# Stop gninnipS My sdroW!

**Description**  
Write a function that takes in a string of one or more words, and returns the same string, but with all words that have five or more letters reversed. Strings passed in will consist only of letters and spaces. Spaces will be included only when more than one word is present.

---

## How It Works

1. We scan through the input string character by character.
2. Each time we encounter a word, we measure its length.
3. If the word length is >= 5, we reverse that word before appending it to the `result`.
4. Otherwise, we copy it as is.
5. Spaces are handled as delimiters or copied directly.

**C Implementation**  
```c
#include <string.h>

void spin_words(const char *sentence, char *result) {
    int i = 0, j = 0;

    while (sentence[i] != '\0') {
        if (sentence[i] == ' ') {
            result[j++] = sentence[i++];
        } else {
            int start = i;
            int word_len = 0;
            while (sentence[i] != '\0' && sentence[i] != ' ') {
                word_len++;
                i++;
            }
            if (word_len >= 5) {
                for (int k = i - 1; k >= start; k--) {
                    result[j++] = sentence[k];
                }
            } else {
                for (int k = start; k < i; k++) {
                    result[j++] = sentence[k];
                }
            }
        }
    }
    result[j] = '\0';
}
```

---
** Usage **
1- Include spin_words.c in your C project.
2- Call spin_words(input, result) where:
- input is the original sentence.
- result is a pre-allocated buffer to store the modified sentence.
3- Words with 5 or more letters will be reversed.

---
** Example **

- Input: "Hey fellow warriors"
- Output: "Hey wollef sroirraw"

---

Author: Daniele Perez / Eestika
Source: Codewars Kata

