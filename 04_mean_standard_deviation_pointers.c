#include<stdio.h>
#include<math.h>
int main()
{
int a[100];
int *ptr;
ptr=a;
int i,n;
double sum=0.0,mean,semi_vs=0.0, vs, sd;
printf("Question 1:VISHAL ANSARI Section:N  Student ID:200111238\n");
printf("enter the no of observations...\n");
scanf("%d",&n);
printf("enter the observations one by one.\n");
 for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr+i));
        sum=sum+ *(ptr+i);
    }

mean = sum / n;

 for (i = 0; i < n; i++)
     {
         semi_vs = semi_vs + (a[i] - mean) * (a[i] - mean);
     }
    vs = (semi_vs) /n;
    sd = sqrt(vs);
 printf("the sum of the observations is : %lf\n", sum);
printf("the mean of the observations is: %lf\n",mean);
 printf("the standard deviation of the observations is : %lf\n", sd);
    return 0;
}
