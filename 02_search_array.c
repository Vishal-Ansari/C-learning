#include <stdio.h>

int main()
{
    int a[100], search, i, n;
    printf("vishal ansari section-N std id- 200111238\n");
    printf("enter the no of elements to be in array\n");
    scanf("%d", &n);
    printf("enter the %d no elements of array\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("enter the no to be searched\n");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (a[i] == search)
        {
            printf("x = %d is present in the array at %dth position\n", search, i + 1);
            break;
        }
    }
    if (a[i] != search)
        printf("x = %d is not present in the array\n", search);

    return 0;
}
