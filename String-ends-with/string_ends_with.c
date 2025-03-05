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
