#include <stdio.h>
#include <math.h>
// VISHAL ANSARI
int main()
{
    double semi_vs=0.0, vs, sd, mean, sum = 0.0;
    int a[100];
    int i, ob;
    printf("Question 1:VISHAL ANSARI Section:N  Student ID:200111238\n");
    printf("enter the no of observations :- \n ");
    scanf("%d", &ob);
    printf("enter the observation one by one...");
    for (i = 0; i < ob; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
     mean = sum / ob;

     for (i = 0; i < ob; i++)
     {
         semi_vs = semi_vs + (a[i] - mean) * (a[i] - mean);
     }
    mean = sum / ob;
    vs = (semi_vs) / ob;
    sd = sqrt(vs);
    printf("the mean of the observations is : %lf\n", mean);
    printf("the standar deviation of the observations is : %lf\n", sd);
    printf("the variance of the observations is : %lf\n", vs);

    return 0;
}
