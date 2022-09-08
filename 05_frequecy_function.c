#include<stdio.h>
#include <stdlib.h>

int main()
{
      int *ptr,b[50],count,n,i,j;
    ptr = (int *)malloc(n * sizeof(int));
    printf("\nVISHAL ANSARI Section:N  Student ID:200111238\n");
    printf("enter the no of elements\n");
    scanf("%d",&n);
    printf("enter the %d elements one by one\n",n);
    for ( i = 0; i < n; i++)
    {
     scanf("%d",&ptr[i+1]) ;
     b[i]=-1;  
    }
    
    for ( i = 0; i < n; i++)
    {
        count=1;
        for (j=i+1; j < n; j++)
        {
            if(ptr[i+1]==ptr[j+1])
            {
                count++;
                b[j]=0;
            }
        }
        if(b[i]!=0)
        {
            b[i]=count;
        }
    }
     for(i=0; i<n; i++)
    {
        if(b[i] != 0)
        {
            printf("frequency of %d is %d...\n", ptr[i+1], b[i]);
        }
    }
    return 0;
}



