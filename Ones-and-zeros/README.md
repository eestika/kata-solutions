# Ones and Zeros

## 📝 Description  
Given an array of ones and zeroes, the function converts the equivalent **binary value** into an integer.  

### Example  
```c
// Given the input:
unsigned bits[] = {0, 0, 1, 0};
size_t count = sizeof(bits) / sizeof(bits[0]);

// The function should return 2
unsigned result = binary_array_to_numbers(bits, count);
printf("%u\n", result);
```
---
🖥️ **Solution**
The function iterates through the array from left to right, shifting bits accordingly to calculate the integer value.
It uses bitwise shifting (1 << (count - 1 - i)) to place each binary digit in the correct position.

**Implementation**
```c
#include <stddef.h>
#include <math.h>

unsigned binary_array_to_numbers(const unsigned bits[/*count*/], size_t count)
{
    unsigned result = 0;
    for (size_t i = 0; i < count; i++) {
        if (bits[i] == 1) {
            result += 1 << (count - 1 - i);
        }
    }
    return result;
}
```
---
🚀 **Complexity Analysis**
Time Complexity: O(n), since it processes each bit in the array once.
Space Complexity: O(1), as it only uses a few additional variables.
🔗 **Kata link**: Ones and Zeros on Codewars