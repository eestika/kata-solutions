#include <stdbool.h>
#include <stddef.h>

bool elimination(const int *arr, size_t arr_size, int* result)
{
    int counts[19] = {0};  // per valori da -9 a +9
    int offset = 9;        // per mappare il valore: indice = val + offset

    // Conta le occorrenze dei valori nell'intervallo [-9, 9]
    for (size_t i = 0; i < arr_size; i++) {
        int val = arr[i];
        // Se si è certi che i valori siano sempre in [-9, 9],
        // questo controllo non è strettamente necessario.
        if (val < -9 || val > 9) {
            continue;
        }
        counts[val + offset]++;
    }

    // Cerca un valore che appare esattamente 2 volte
    for (int i = 0; i < 19; i++) {
        if (counts[i] == 2) {
            result[0] = i - offset;  // mappa indietro l'indice al valore originale
            return true;
        }
    }
    return false;
}