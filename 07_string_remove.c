#include <stdio.h>
#include <string.h>
char *slice(char *st, char *st2, int m, int n)
{
    int i = 0,j=0;

    for (i = 0,j=0; st[i] != '\0'; i++)
    {
        if (i < n || i > m + n - 1)
        {
            printf("%c", st[i]);
            st2[j] = st[i];
            j++;
        }
    }
    return st2;
}
int main()
{
    char st[100], st2[100];
    int m, n;
    printf("vishal ansari section-N std id- 200111238\n");
    printf("enter the string\n");
    gets(st);
    printf("Enter the value of characters: m and position: n to be extracted\n");
    scanf("%d\n%d", &m, &n);
    const char *stnew;
    stnew = slice(st, st2, m, n);
    printf("\n");
    puts(stnew);
    return 0;
}