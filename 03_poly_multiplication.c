//Polynomial Multiplication
// VISHAL ANSARI
#include <stdio.h>
int main()
{
    int a[15] = {0};
    int b[15] = {0};
    int c[30] = {0};
    int i, j;
    int m, n, p;
    printf("Question 1:VISHAL ANSARI Section:N  Student ID:200111238\n");
    printf("\nEnter the degree of first polynomial");
    scanf("%d", &m);
    printf("\nEnter the coefficients of first polynomial\n");
    for (i = 0; i <= m; i++)
        scanf("%d", &a[i]);
    printf("\nEnter the degree of second polynomial\n");
    scanf("%d", &n);
    printf("\nEnter the coefficients ofsecond polynomial\n");
    for (i = 0; i <= n; i++)
        scanf("%d", &b[i]);
    p = m + n;
    for (i = 0; i <= p; i++)
    {
        for (j = 0; j <= i; j++)
        {
            c[i] = c[i] + a[j] * b[i - j];
        }
    }
    printf("\nThe coefficients of resultant polynomial are\n");
    for (i = 0; i <= p; i++)
        printf("%d\t", c[i]);
}
