#include <stdio.h>

int main()
{
  int A[] = {11, -4, 67, -99, 88, 99};
  int *ptr, i, x = 0, y = 0;
  ptr = &A[0]; //ptr=A same thing...
  for (i = 0; i < 6; i++)
  {
    if (A[i] > x)
    {
      x = A[i];
      ptr++;
    }
   
  }
  for (i = 0; i < 6; i++)
{
   if (A[i] > y && (A[i]<x))
    {
      y = ptr[i];
      ptr++;
    }
}
  printf("the greatest no is %d\n", y);
  printf("vishal ansari section-N std id- 200111238\n");
  printf("the smallest is %d", x);
  return 0;
}
