#include <stdio.h>
#define MAX_SIZE 10

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    printf("Matrix in spiral form: ");
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    while (top <= bottom && left <= right) {

        for (int i = left; i <= right; i++) printf("%d ", matrix[top][i]);
        top++;


        for (int i = top; i <= bottom; i++) printf("%d ", matrix[i][right]);
        right--;


        if (top <= bottom)
            for (int i = right; i >= left; i--) printf("%d ", matrix[bottom][i]);
        bottom--;


        if (left <= right)
            for (int i = bottom; i >= top; i--) printf("%d ", matrix[i][left]);
        left++;
    }

    printf("\n");
    return 0;
}
