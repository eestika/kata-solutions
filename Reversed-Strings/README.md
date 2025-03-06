# Reversed Strings

## 📝 Description  
This function reverses a given string **in place**, modifying the original string.  
It uses **pointers** to swap characters from both ends of the string until the middle is reached.

### Example  
```c
// Given the input:
char str[] = "hello";

// The function should return "olleh"
char *result = strrev(str);
printf("%s\n", result); // Output: olleh
```
---
🖥️ **Solution**
The function iterates through the string, swapping characters from the beginning and end, moving toward the middle.
It efficiently reverses the string in-place, without using additional memory.

**Implementation**
```c 
#include <string.h> // Required for strlen()

// Function to reverse a string in place
char *strrev(char *string) {
    size_t len = strlen(string); // Get string length
    char *start = string; // Pointer to the first character
    char *end = string + len - 1; // Pointer to the last character

    // Swap characters until the pointers meet
    while (start < end) {
        char temp = *start; // Store the value at 'start'
        *start = *end; // Copy 'end' to 'start'
        *end = temp; // Copy stored value to 'end'

        start++; // Move forward
        end--;   // Move backward
    }

    return string; // Return the reversed string
}
```
---
🚀 **Complexity Analysis**

Time Complexity: O(n) – Iterates through half the string.
Space Complexity: O(1) – Uses only a few extra variables.

🔗 **Kata link**: Reversed Strings on Codewars