#include <string.h>

void spin_words(const char *sentence, char *result) {
    int i = 0, j = 0; // Indici per lettura e scrittura

    while (sentence[i] != '\0') {
        if (sentence[i] == ' ') {
            result[j++] = sentence[i++];
        } else {
            int start = i;
            int word_len = 0;
            while (sentence[i] != '\0' && sentence[i] != ' ') {
                word_len++;
                i++;
            }
            if (word_len >= 5) {
                for (int k = i - 1; k >= start; k--) {
                    result[j++] = sentence[k];
                }
            } else {
                for (int k = start; k < i; k++) {
                    result[j++] = sentence[k];
                }
            }
        }
    }
    result[j] = '\0';
}
