# String ends with?

**Description**  
Complete the solution so that it returns `true` if the first argument (string) passed in ends with the second argument (also a string), otherwise `false`.

**Examples**  
- `solution("abc", "bc")` // returns true  
- `solution("abc", "d")` // returns false  

---

## Implementation

```c
#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{
    size_t len_string = strlen(string);
    size_t len_ending = strlen(ending);

    // If ending is longer than string, it cannot match
    if (len_ending > len_string) {
        return false;
    }

    // If ending is empty, we consider it a match
    if (len_ending == 0) {
        return true;
    }

    // Compare the end of the string with ending
    return strcmp(string + (len_string - len_ending), ending) == 0;
}

---
**Usage**
1. Include solution.c in your project.
2. Call solution(string, ending) with the relevant strings.
3. The function returns true if string ends with ending, otherwise false.
---

Author: [Daniele Perez / Eestika]

Source: Codewars Kata