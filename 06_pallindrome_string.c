#include <stdio.h>
#include <string.h>

int main()
{
    char st1[50];
    char st2[50];
    int i, j, count = 0,value;
    printf("\nVISHAL ANSARI  SECTION-N STD-ID-200111238\n");
    printf("\n enter the string\n ");
    gets(st1);
    while (st1[count] != '\0')
    {
        count++;
    }
    j = count - 1;
    for (i = 0; i < count; i++)
    {
        st2[i] = st1[j];
        j--;
    }
    printf("the reversed string is: %s  \n",st2);
    
value=strcmp(st1,st2);
    if (value==0)
        {
            printf("the string is palindrome string\n");
        }

    else
        {
            printf("the string is not the palindrome string\n");
        }

    return 0;
}
