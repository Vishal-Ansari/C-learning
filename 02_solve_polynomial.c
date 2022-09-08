#include<stdio.h>
#include <math.h>

int main()
{
int a[20],i,x,solution=0,n;
printf("vishal ansari section-N std id- 200111238\n");
printf("enter the degree of polynomial\n");
scanf("%d",&n);

printf("enter the coefficients of x raise to the power\n ");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
printf("enter the value of x\n");
scanf("%d",&x);
for(i=0;i<n;i++)
{
solution=solution+a[i]*pow(x,i);
}
printf("the value of the polynomial p(x=%d)=%d",x,solution);
  return 0;
}
