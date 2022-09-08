#include <stdio.h>
#include <string.h>

int main()
{
    char st[100];
    int m, n, i=0;
    printf("vishal ansari section-N std id- 200111238\n");
    printf("enter the string\n");
    gets(st);
    printf("Enter the value of characters: m and position: n to be extracted\n");
    scanf("%d\n%d", &m, &n);
        while ((n + i) < n + m)
        {
            st[i] = st[i + n];
            printf("%c",st[i]);   
            i++;
        }
    return 0;
}

// #include <stdio.h>
// void slice(char *st, int m, int n)
// {
//     int i = 0;
//      printf("enter the string\n");
//     gets(st);
//     printf("Enter the value of characters: m and position: n to be extracted\n");
//     scanf("%d\n%d", &m, &n);
//     while ((n+ i) < n+m)
//     {
//         st[i] = st[i + n];
//         i++;
//     }
//     st[i] = '\0';
// }

// int main()
// {
//     char st[100];
//    int m,n;
//     slice(st, m, n);
//     puts(st);
//     return 0;
// }
