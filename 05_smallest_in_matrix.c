#include <stdio.h>
int main()
{
    int matrix[10][10];
    int row, col, m, n, small = matrix[0][0];
     printf("vishal ansari section-N std id- 200111238\n");
    printf("Enter the number of rows and columns for 1st matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the matrix\n");
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < n; col++)
        {
            scanf("%d", &matrix[row][col]);
        if (matrix[row][col] < small)
        {
            small = matrix[row][col];
        }
        }
    }
    printf(" the matrix is..\n");
     for (row = 0; row < m; row++)
            {
                for (col = 0; col < n; col++)
                {
                    printf("%d\t", matrix[row][col]);
                }
                printf("\n");
            }
        printf("smallest is %d", small);
}