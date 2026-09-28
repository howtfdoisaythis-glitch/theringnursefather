#include <stdlib.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Rows and columns must be positive.\n");
        return 1;
    }

    int *matrix = malloc((size_t)rows * (size_t)cols * sizeof(*matrix));
    if (matrix == NULL) {
        printf("Unable to allocate memory for the matrix.\n");
        return 1;
    }

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i * cols + j]);
        }
    }

    printf("Matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i * cols + j]);
        }
        printf("\n");
    }

    free(matrix);
    return 0;
}