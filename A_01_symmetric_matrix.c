#include<stdio.h>
int main()
{
    int matrix[10][10], transpose[10][10];
    int row, col, m, n, sym = 1;
    printf("Enter the number of rows and columns for 1st matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the matrix\n");
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < n; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }

    for (row = 0; row < m; row++)
    {
        for (col = 0; col < n; col++)
        {
            transpose[col][row] = matrix[row][col];
        }
    }

    if (m == n)
    {
        for (row = 0; row < m; row++)
        {
            for (col = 0; col < n; col++)
            {
                if (matrix[row][col] != transpose[row][col])
                {
                    sym = 0;
                    break;
                }
            }
            if (sym == 0)
            {
                printf("\nThe matrix is not symmetric");
                break;
            }
        }
        if (sym == 1)
        {
            printf("\nThe matrix is symmetric\n");
            printf("Question 1:VISHAL ANSARI Section:N  Student ID:200111238\n");
            for (row = 0; row < m; row++)
            {
                for (col = 0; col < n; col++)
                {
                    printf("%d\t", matrix[row][col]);
                }
                printf("\n");
            }
        }
    }
    else
    {
        printf("\nThe matrix is not symmetric");
    }
}