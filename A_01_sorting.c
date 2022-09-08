#include <stdio.h>
int main()
{

   /* Here i & j for loop counters, temp for swapping,
    * n for total number of elements, number[] to
    * store the input numbers in array. You can increase
    * or decrease the size of number array as per requirement
    */
   int i, j, n, temp, arr[25];
   int *ptr;
   ptr=arr;

   printf("How many numbers u are going to enter?: ");
   scanf("%d", &n);

   printf("Enter %d elements: ", n);
   // This loop would store the input numbers in array
   for (i = 0; i < n; i++)
      scanf("%d", ptr+i);

   // Implementation of insertion sort algorithm
   for (i = 1; i < n; i++)
   {
      temp = arr[i];
      j = i - 1;
      while ((temp < arr[j]) && (j >= 0))
      {
         arr[j + 1] = arr[j];
         j = j - 1;
      }
      arr[j + 1] = temp;
   }

   printf("Order of Sorted elements: ");
   for (i = 0; i < n; i++)
      printf(" %d", arr[i]);

   return 0;
}