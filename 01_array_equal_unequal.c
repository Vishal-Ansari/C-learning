//Question 4:   VISHAL ANSARI
#include<stdio.h>  
  
#define N 5  
#define M (N * 2)  
  
int main()  
{  
    int a[N], b[N], c[M], i, k; 
   printf("Question 1:VISHAL ANSARI Section:N  Student ID:200111238\n");
  
    printf("Enter %d elements for array a\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    printf("Enter %d elements for array b\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &b[i]);  
  
    printf("\nMerging arrays a & b into c in alternate position\n");  
    for(i = 0, k = 0; i < N; i++, k += 2)  
        c[k] = a[i];  
  
    for(i = 0, k = 1; i < N; i++, k += 2)  
        c[k] = b[i];  
  
    printf("Array elements of c is:\n");  
    for(i = 0; i < M; i++)  
        printf("%d ", c[i]);  
  
    return 0;  
}