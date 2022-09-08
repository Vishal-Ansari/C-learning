#include <stdio.h>
#define MAX 30
void sorting(int *a, int N);
void calculation(int *a, int N);

int main()
{
    int N, i, j;
    int a[MAX] = {0};
    int b[MAX] = {0};
    printf("Enter the total number of terms");
    scanf("%d", &N);
    printf("Enter the terms of array");
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);
    sorting(a, N);
    printf("Calculation is happening........\n");
    calculation(a, N);
    return 0;
}
void sorting(int *a, int N)
{
    int temp;
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    printf("The arranged terms are:\n");
    for (int i = 0; i < N; i++)
        printf("%d  ", a[i]);
    printf("\n");
}
void calculation(int *a, int N)
{
    float median;
    for (int i = 0; i < N; i++)
    {
        if (N % 2 != 0)
        {
            median = a[N / 2];
        }
        else
        {
            median = (a[(N / 2) - 1] + a[N / 2]) / 2.0;
        }
    }
    printf("Median of given array is %f", median);
}