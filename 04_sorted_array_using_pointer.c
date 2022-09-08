#include <stdio.h>
int main()
{
    int a[20];
    int *ptr, i, j, temp, n;
    ptr = a;
    printf("vishal ansari section-N std id- 200111238\n");
    printf("enter the no of elements to be stored in array...: \n");
    scanf("%d", &n);
    printf("enter the elements of the array..\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr+i);
    }
    // Implementation of insertion sort algorithm
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while ((temp < a[j]) && (j >= 0))
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }

    printf("Order of Sorted elements: ");
    for (i = 0; i < n; i++)
        printf(" %d", a[i]);

    return 0;
}
