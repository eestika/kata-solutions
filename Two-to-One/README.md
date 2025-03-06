# Two to One

## 📝 Description  
Given two strings **s1** and **s2** containing only lowercase letters from `a` to `z`,  
this function returns the longest possible string containing distinct letters, sorted in ascending order.  

### Example  
```c
// Given the input:
const char *s1 = "xyaabbcccccdefww";
const char *s2 = "xxxyyyyyabklmnop";

// The function should return "abcdefklmopqwxy"
char *result = longest(s1, s2);
printf("%s\n", result);
```
---
🖥️ **Solution**
The function uses an array of booleans (bool present[26]) to keep track of the letters present in s1 and s2.
Each character is mapped to its corresponding index (c - 'a').
Finally, a new string is dynamically allocated and filled with the sorted unique letters.

**Implementation**
```c
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char *longest (const char *s1, const char *s2)
{
    int len1 = strlen(s1), len2 = strlen(s2);
    bool present[26] = { false };

    for (int i = 0; i < len1; i++) {
        present[s1[i] - 'a'] = true;
    }
    for (int i = 0; i < len2; i++) {
        present[s2[i] - 'a'] = true;
    }

    int total = 0;
    for (int i = 0; i < 26; i++) {
        if (present[i]) {
            total++;
        }
    }

    char *result = calloc(total + 1, sizeof(char));
    int pos = 0;

    for (int i = 0; i < 26; i++) {
        if (present[i]) {
            result[pos++] = 'a' + i;
        }
    }

    result[pos] = '\0';
    return result;
}
```
**Complexity Analysis**
Time Complexity: O(n), where n is the sum of the lengths of s1 and s2.
Space Complexity: O(1) (the boolean array present[26] is constant-sized).
🔗 Kata link: Two to One on Codewars