#include <stddef.h>
#include <stdlib.h> // Required for malloc()

// Define a structure to represent a point (x, y)
struct Point {
    int x;
    int y;
};

// Function to return the 8 neighboring points of a given coordinate (x, y)
int **cartesian_neighbor(int x, int y) {
    // Allocate memory for 8 rows (each row represents a point)
    int **result = malloc(8 * sizeof(int *));
    if (result == NULL) return NULL; // Safety check for memory allocation failure

    // Fill the array with neighboring points and allocate memory for each pair (x, y)
    for (int i = 0; i < 8; i++) {
        result[i] = malloc(2 * sizeof(int)); // Each row contains 2 integers (x, y)
        if (result[i] == NULL) return NULL; // Safety check

        // Compute coordinates of the 8 neighboring points
        switch (i) {
            case 0: result[i][0] = x - 1; result[i][1] = y - 1; break;
            case 1: result[i][0] = x;     result[i][1] = y - 1; break;
            case 2: result[i][0] = x + 1; result[i][1] = y - 1; break;
            case 3: result[i][0] = x - 1; result[i][1] = y;     break;
            case 4: result[i][0] = x + 1; result[i][1] = y;     break;
            case 5: result[i][0] = x - 1; result[i][1] = y + 1; break;
            case 6: result[i][0] = x;     result[i][1] = y + 1; break;
            case 7: result[i][0] = x + 1; result[i][1] = y + 1; break;
        }
    }

    return result; // Return the pointer to the array of pointers
}
