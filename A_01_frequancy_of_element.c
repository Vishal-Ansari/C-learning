#include <stdio.h>

int main()
{
    int arr[20];
    int count = 0, i, search, n;
    printf(" enter the no of elements...\n");
    scanf("%d", &n);
    printf("enter the elements one by one...\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the element whose frequency is to be counted..\n");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (search == arr[i])
        {
            count++;
        }
    }
    printf("the frequency of the %d is : %d\n", search, count);
    return 0;
}
