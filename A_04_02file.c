//question 2
//vishal ansari
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f, *f1, *f2, *f3, *f4;
    f = fopen("mix.txt", "w");
    char a[10000], ch;
    printf("\nEnter content\n");
    fgets(a, 10000, stdin);
    fputs(a, f);
    fclose(f);

    f = fopen("mix.txt", "r");
    f1 = fopen("vowels.txt", "w");
    f2 = fopen("consonents.txt", "w");
    f3 = fopen("digits.txt", "w");
    f4 = fopen("specialchar.txt", "w");

    ch = fgetc(f);

    while (ch != EOF)
    {
        ch = fgetc(f);

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                fputc(ch, f1);
                ch = fgetc(f);
            }
            else
            {
                fputc(ch, f2);
                ch = fgetc(f);
            }
        }
        else if (ch >= '0' && ch <= '9')
        {
            fputc(ch, f3);
            ch = fgetc(f);
        }

        else
        {
            fputc(ch, f4);
            ch = fgetc(f);
        }
    }
    fclose(f);
    fclose(f1);
    fclose(f2);
    fclose(f3);
    fclose(f4);
    printf("vishal ansari section-N std id- 200111238\n");
    return 0;
}
