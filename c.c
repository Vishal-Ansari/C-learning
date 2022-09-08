// #include<stdio.h>
// int main()
// {
//     int n,i,j,count,flag=0;
//     int a[20]={0};
//     int b[20]={0};
//     printf("Enter the number of elements in array\n");
//     scanf("%d",&n);
//     printf("Enter the elelemnts in array\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//         b[i]=-1;
//     }
//     for(i=0;i<n;i++)
//     {
//         count=1;
//         for(j=i+1;j<n;j++)
//         {
//             if(a[i]==a[j])
//             {
//                 count++;
//                 b[j]=flag;
//             }

//         }
//         if(b[i] != flag)
//         {
//             b[i] = count;

//         }

//     }
//     for(i=0;i<n;i++)
//     {
//         if(b[i]!=0)
//         {
//             printf("frequency of %d is %d\n",a[i],b[i]);
//         }

//     }

// }

#include <stdio.h>

// int main()
// {
//     int n, i, rem, sum = 0;
//     printf("enter how many numbers u want to print\n");
//     scanf("%d", &n);
//     int arr[n];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("\n");

//     for (i = 0; i < n; i++)
//     {
//         sum=0;
//         while (arr[i] > 0)
//         {
//             rem = arr[i] % 10;
//             sum = sum + rem;
//             n = arr[i] / 10;
//         }
//         printf("%d\n", sum);
//     }
//     return 0;
// }


// int main()
// {
//     int n, i, rem, sum = 0;
//     printf("enter how many numbers u want to print\n");
//     scanf("%d", &n);
//     int arr[n];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
   

//     for (i = 0; i < n; i++)
//     {
//         sum=0;
//         while (arr[i] > 0)
//         {
//             rem = arr[i] % 10;
//             sum = sum + rem;
//             arr[i]= arr[i] / 10;
//         }
//         printf("%d\n", sum);
//     }
//     return 0;
// }


int main()
{
    int n, i, rem, sum = 0;
    printf("enter how many numbers u want to print\n");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
   

    for (i = 0; i < n; i++)
    {
        sum=0;
        while (arr[i] > 0)
        {
            rem = arr[i] % 10;
            sum = sum + rem;
            arr[i]= arr[i] / 10;
        }
        printf("%d\n", sum);
    }
    return 0;
}
