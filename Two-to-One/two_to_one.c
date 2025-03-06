#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


char *longest (const char *s1, const char *s2)
{
  int len1 = strlen(s1), len2 = strlen(s2);
  bool present[26] = { false }; // 26 elementi, da 0 a 25
  
  for (int i = 0; i < len1; i++ ) {
    char c = s1[i];
    int index = c - 'a';
    present[index] = true;
  }
for (int i = 0; i < len2; i++ ) {
    char c = s2[i];
    int index = c - 'a';
    present[index] = true;
  }
  int totale = 0;
  for (int cont = 0; cont < 26; cont ++){
    if (present[cont] == true) {
      totale++;
    }
  }
  char *result = calloc(totale + 1, sizeof(char));

  int pos = 0;
  
  for (int i = 0; i < 26; i++ ){
    if (present[i] == true) {
      result[pos] = 'a' + i;
      pos ++;
      }
    }
  
  
  result [pos] = '\0';

	return result;
}