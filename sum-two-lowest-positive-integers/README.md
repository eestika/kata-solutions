# Sum of Two Lowest Positive Integers

## 📝 Description  
This function returns the sum of the two lowest positive integers in an array of at least 4 positive integers.  
No floats or non-positive integers are allowed.  

### Example  
```c
// Given the array
int numbers[] = {19, 5, 42, 2, 77};
size_t n = sizeof(numbers) / sizeof(numbers[0]);

// The function should return 7 (2 + 5)
long result = sum_two_smallest_numbers(n, numbers);
printf("%ld\n", result); // Output: 7
```
---
🖥️ ** Solution **
The function iterates through the array, keeping track of the two smallest numbers and updating them accordingly.
This ensures an O(n) time complexity, making it efficient for large datasets.

** Implementation **

```c 
#include <stddef.h>

long sum_two_smallest_numbers(size_t n, const int numbers[n]) {
    long min1, min2;
    
    if (numbers[0] < numbers[1]) {
        min1 = numbers[0];
        min2 = numbers[1];
    } else {
        min1 = numbers[1];
        min2 = numbers[0];
    }
    
    for (size_t i = 2; i < n; i++) {
        if (numbers[i] < min1) {
            min2 = min1;
            min1 = numbers[i];
        } else if (numbers[i] < min2) {
            min2 = numbers[i];
        }
    }
    
    return min1 + min2;
}
```
---

🚀 ** Complexity Analysis **
Time Complexity: O(n)
Space Complexity: O(1) (only a few extra variables are used)