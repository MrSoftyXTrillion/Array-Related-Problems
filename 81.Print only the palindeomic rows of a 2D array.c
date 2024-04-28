#include <stdio.h>
int main()
{
    int rows, cols,row,col;
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            scanf("%d", &arr[row][col]);
        }
    }
    for (int row = 0; row < rows; row++)
    {
        int isPalindrome = 1;
        for (int col = 0; col < cols / 2; col++)
        {
            if (arr[row][col] != arr[row][cols - 1 - col])
            {
                isPalindrome = 0;
                break;
            }
        }
        if (isPalindrome)
        {
            for (int col = 0; col < cols; col++)
            {
                printf("%d ", arr[row][col]);
            }
            printf("\n");
        }
    }
    return 0;
}
