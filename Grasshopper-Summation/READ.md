# Grasshopper Summation

**Description**  
This kata asks for the summation of every number from 1 to a given positive integer `num`.  
For example, if `num` is 5, the result should be `15` (1 + 2 + 3 + 4 + 5).

---

## How It Works

1. We start with a variable `sum` initialized to 0.
2. We run a loop from 1 up to `num` (inclusive).
3. In each iteration, we add the current index to `sum`.
4. Finally, we return `sum`.

**Example**  
```c
int summation(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    return sum;
}

Possible Improvements
Instead of a loop, we could use the formula for the sum of the first n natural numbers. 
This would make the solution O(1) instead of O(n).


Usage
Copy the function into your C codebase.
Compile and run the program.
Pass a positive integer to the summation function to get the total.

Author: Daniele Perez
Source: Codewars Kata
