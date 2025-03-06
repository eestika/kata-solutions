#include <stddef.h>
#include <math.h>

unsigned binary_array_to_numbers(const unsigned bits[/*count*/], size_t count)
{
  unsigned result = 0;
  for (size_t i=0; i< count; i++) {
    if (bits[i] == 1) {
    result += 1 << (count - 1 - i);
    }
  }
	return result;
}