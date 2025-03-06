#include <stddef.h>

long sum_two_smallest_numbers(size_t n, const int numbers[n]) {

  long min1, min2;
// Initialise min1 and min2 based on numbers[0] and numbers[1]
if (numbers[0] < numbers[1]) {
    min1 = numbers[0];
    min2 = numbers[1];
} else {
    min1 = numbers[1];
    min2 = numbers[0];
}
for (size_t i = 2; i < n; i++) {
    // Comparisons and updates
    if (numbers[i] < min1) {
        min2 = min1;
        min1 = numbers[i];
    } else if (numbers[i] < min2) {
        min2 = numbers[i];
    }
}
  return min1+min2;
  }