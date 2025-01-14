#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // For usleep function

#define MAX_SQUARE 1000
#define MAX_GENERATION 1000


void freearr(char **arr, int size);
void conway_rules(char **arr, int size);

int main(void) {
    int size;
    int gen;
    printf("Insert the size of the game: ");

    while(1) {
        scanf("%d", &size);
        if (size > MAX_SQUARE) {
            printf("Invalid value! The size must be below 1000.\n");
            printf("Insert a new value: ");
        } else {
            break;
        }
    }

    printf("Insert the number of generations: ");
    while(1) {
        scanf("%d", &gen);
        if (gen > MAX_GENERATION) {
            printf("Invalid value! The generation value must be below 1000.\n");
            printf("Insert a new value: ");
        } else {
            break;
        }
    }


    // Allocate memory for a 2D array
    char **arr = malloc(size * sizeof(char *)); // Allocate rows
    for (int i = 0; i < size; i++) {
        arr[i] = malloc(size * sizeof(char)); // Allocate columns for each row
    }

    // Fill with ' '
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = ' '; // Initialize elements to ' '
        }
    }

    // Populate random parts of the array with "*"
    int quantity = rand() % (size * size); // Number of stars to place
    for (int n = 0; n < quantity; n++) {
        int i_ran = rand() % size;
        int j_ran = rand() % size;
        arr[i_ran][j_ran] = '*'; // Place a '*'
    }

    for (int gene = 0; gene < gen; gene++) {
        // Clear the screen
        printf("\033[H\033[J"); // ANSI escape code to clear the terminal screen

        // Print the grid
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                printf("%c ", arr[i][j]);
            }
            printf("\n");
        }

        // Apply Conway's rules to generate the next generation
        conway_rules(arr, size);

        // Introduce a small delay for visualization (1000000 microseconds = 1 second)
        usleep(100000);
    }

    // Free the allocated memory
    freearr(arr, size);
}

void freearr(char **arr, int size) {
    // Free the allocated memory
    for (int i = 0; i < size; i++) {
        free(arr[i]); // Free each row
    }
    free(arr); // Free the row pointers
}

void conway_rules(char **arr, int size) {
    // Create a temporary array to store the next generation
    char **next_gen = malloc(size * sizeof(char *));
    for (int i = 0; i < size; i++) {
        next_gen[i] = malloc(size * sizeof(char));
    }

    // Iterate through each cell in the grid
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int live_neighbors = 0;

            // Check all 8 possible neighbors
            for (int x = -1; x <= 1; x++) {
                for (int y = -1; y <= 1; y++) {
                    if (x == 0 && y == 0) continue; // Skip the current cell
                    int ni = i + x;
                    int nj = j + y;

                    // Ensure the neighbor is within bounds
                    if (ni >= 0 && ni < size && nj >= 0 && nj < size) {
                        if (arr[ni][nj] == '*') {
                            live_neighbors++;
                        }
                    }
                }
            }

            // Apply Conway's rules
            if (arr[i][j] == '*') { // Current cell is alive
                if (live_neighbors < 2 || live_neighbors > 3) {
                    next_gen[i][j] = ' '; // Cell dies
                } else {
                    next_gen[i][j] = '*'; // Cell survives
                }
            } else { // Current cell is dead
                if (live_neighbors == 3) {
                    next_gen[i][j] = '*'; // Cell becomes alive
                } else {
                    next_gen[i][j] = ' '; // Cell stays dead
                }
            }
        }
    }

    // Copy the next generation back to the main array
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = next_gen[i][j];
        }
    }

    // Free the temporary array
    for (int i = 0; i < size; i++) {
        free(next_gen[i]);
    }
    free(next_gen);
}
