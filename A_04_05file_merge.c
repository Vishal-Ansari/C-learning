//question 5
//vishal ansari
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr1, *ptr2, *ptr3;
    ptr1 = fopen("test1.txt", "r");
    ptr2 = fopen("test2.txt", "r");
    ptr3 = fopen("mergefiles.txt", "w");

    char c;
    
    if (ptr1 == NULL || ptr2 == NULL || ptr3 == NULL)
    {
        printf("sorry");
        exit(1);
    }

    while ((c = fgetc(ptr1) != EOF))
    {
        fputc(c, ptr3);
    
    }

    while ((c = fgetc(ptr2) != EOF))
    {
        fputc(c, ptr3);
    }

    printf("\nthe content of the merged file is\n");
    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);
    return 0;
}
