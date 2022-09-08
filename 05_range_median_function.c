#include <stdio.h>
float median()
{
    int arr[20], i, sum = 0, x = 0, y, n, temp;
    float median;
    printf("enter the no of observation..\n");
    scanf("%d", &n);
    printf("enter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > x)
        {
            x = arr[i];
        }
       y=arr[0];
    }
    for (i = i; i < n; i++)
    {
        if (y> arr[i])
        {
            y = arr[i];
        }
       
    }
    //sorting....
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    printf("The arranged terms are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (n % 2 != 0)
        {
            median = arr[n / 2];
        }
        else
        {
            median = (arr[(n / 2) - 1] + arr[n / 2]) / 2.0;
        }
    }
    printf("\nMedian of given array is %f\n", median);
        printf("the range of the observations is %d\n",x-y);
}
int main()
{
    printf("vishal ansari section-N std id- 200111238\n");
     median();

    return 0;
}
