#include <string.h> // Include the library for strlen function

// Function to reverse a string in place
char *strrev(char *string) {
    size_t len = strlen(string); // Get the length of the string
    char *start = string; // Pointer to the first character of the string
    char *end = string + len - 1; // Pointer to the last character (excluding '\0')

    // Swap characters until the pointers meet in the middle
    while (start < end) {
        char temp = *start; // Store the value at 'start'
        *start = *end; // Copy the value from 'end' to 'start'
        *end = temp; // Copy the stored value to 'end'

        start++; // Move the 'start' pointer forward
        end--;   // Move the 'end' pointer backward
    }

    return string; // Return the modified string
}
