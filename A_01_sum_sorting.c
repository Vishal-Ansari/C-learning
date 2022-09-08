
#include <stdio.h>
void main()
{
    int a[50], b[50], c[100], m, n, i, j, k = 0;
    printf("Question 1:VISHAL ANSARI Section:N  Student ID:200111238\n");
    printf("\n Enter the no of elements of  Array 1: ");
    scanf("%d", &m);

    printf("\n Enter sorted elements of array 1: \n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n Enter the no of elements of  Array 2: ");
    scanf("%d", &n);

    printf("\n Enter sorted elements of array 2: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;

    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }

        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    if (i >= m)
    {
        while (j < n)
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }

    if (j >= n)
    {
        while (i < m)
        {
            c[k] = a[i];
            i++;
            k++;
        }
    }

    printf("\n After merging: \n");
    for (i = 0; i < m + n; i++)
    {
        printf("\n%d", c[i]);
    }
}