// question 3: vishal ansari

#include<stdio.h>
int main()
{
  int Arr[50], i, n,k;
    printf("\nEnter the number of elements :");
    scanf("%d", &n);
    printf("\nInput the array elements : ");
    for (i = 0; i < n; i++)
        scanf("%d", &Arr[i]);
         printf("\nInput the key : ");
         scanf("%d", &k);

    int large=0,small=0,equal=0;
    
    printf("Question 3:VISHAL ANSARI Section:N  Student ID:200111238\n");
    
    for(int i=0;i<n;i++)
    {
        if(Arr[i]<k)
           small++;
        else if(Arr[i]>k)
           large++;
        else
           equal++;
    }
    printf("Numbers smaller than k are:%d\n",small);
    printf("Numbers greater than k are:%d\n",large);
    printf("Numbers equal to k are:%d\n",equal);
    
    return 0;
}