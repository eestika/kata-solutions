# Find Twins

## 📝 Description  
Agent 47, you have a new task!  
Among the citizens of city X, there are **two dangerous criminal twins**.  
Your mission is to **identify them** and eliminate one!  

- Everyone except the twins appears **only once** in the array.
- The function must **find and return one of the duplicated numbers**.
- If no twins exist, return `false`.

### Example  
```c
// Given the input:
int arr[] = {3, -2, 5, 7, 3};
size_t arr_size = sizeof(arr) / sizeof(arr[0]);
int result;

// The function should return true and store the twin in result (3)
if (elimination(arr, arr_size, &result)) {
    printf("%d\n", result); // Output: 3
}
```
---
🖥️ **Solution**
The function counts occurrences of numbers in the range [-9, 9] using an array counts[19].
It then scans the counts array to find a number that appears exactly twice.

**Implementation**
```c 
#include <stdbool.h>
#include <stddef.h>

bool elimination(const int *arr, size_t arr_size, int* result)
{
    int counts[19] = {0};  // Store occurrences for values from -9 to +9
    int offset = 9;        // Offset for mapping values into the array

    // Count occurrences in the range [-9, 9]
    for (size_t i = 0; i < arr_size; i++) {
        int val = arr[i];
        if (val < -9 || val > 9) {
            continue;  // Ignore numbers outside the range
        }
        counts[val + offset]++;
    }

    // Find the twin (a value that appears exactly 2 times)
    for (int i = 0; i < 19; i++) {
        if (counts[i] == 2) {
            result[0] = i - offset;  // Convert index back to the original value
            return true;
        }
    }
    return false;
}
```
---
🚀 **Complexity Analysis**

Time Complexity: O(n), since the function iterates over the array twice.
Space Complexity: O(1), since it uses a fixed-size array (only 19 elements).

🔗 **Kata link**: Find Twins on Codewars