#include <stdio.h>
#include <math.h>

int main()
{
  int a[20], b[20], c[40], i, x, m,n,p;
  printf("vishal ansari section-N std id- 200111238\n");
  printf("enter the degree of 1st polynomial\n");
  scanf("%d", &m);

  printf("enter the coefficients of x raise to the power for 1st polynomial\n ");
  for (i = 0; i <= m; i++)
  {
    scanf("%d", &a[i]);
  }

  printf("enter the degree of 2nd polynomial\n");
  scanf("%d", &n);
  
  printf("enter the coefficients of x raise to the power for 2nd polynomial\n ");
  for (i = 0; i <= n; i++)
  {
    scanf("%d", &b[i]);
  }

  if(m>n)
  p=m;
  else
  p=n;

  for (i = 0; i <=p; i++)
  {
    c[i] = a[i] + b[i];
    printf("\nthe sum of %d & %d is %d",a[i],b[i],c[i]);
  }

  return 0;
}
