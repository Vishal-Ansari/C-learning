#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n, x = 0, y, i;
    ptr = (int *)malloc(n * sizeof(int));
    printf("vishal ansari section-N std id- 200111238\n");
    printf("Enter the  no of elements: \n");
    scanf("%d", &n);
    printf("enter the %d no's...\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (i = 0; i < n; i++){  
        if (ptr[i] > x) {
            x = ptr[i];
            ptr++;
        }
      
    }
    for (i = 0; i < n; i++){
          if (ptr[i] > y && ptr[i] != x){
            y = ptr[i];
            ptr++;
        }
    }
    printf("the greatest no is %d\n", x);
    printf("the second greatest no is %d\n", y);
    return 0;
}