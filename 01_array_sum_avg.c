
//  Question 1: vishal ansari
#include  <stdio.h>
 
int main()
{
    int i, n;
    float sum = 0.0, average;
    printf("Question 1:VISHAL ANSARI Section:N  Student ID:200111238\n");
    printf ("Enter the value of N \n");
    scanf("%d", &n);
    int array[n];
 
    printf("Enter %d numbers \n", n);
 
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }  
 
    printf("Input array elements \n");
 
    for (i = 0; i < n; i++)
    {
        printf("%+3d\n", array[i]);
    }
 

 
    for (i = 0; i < n; i++)
    {
        sum+=array[i];
    }
 
    average = sum / n;
 
    printf("\n Sum of all numbers =  %.2f\n", sum);
 
    printf("\n Average of all input numbers =  %.2f\n", average);
 }
 
