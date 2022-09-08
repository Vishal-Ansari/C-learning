//question 7
//vishal ansari
#include <stdio.h>
#include <process.h>
#include <ctype.h>

int main()
{
    FILE *fp, *fp1;
    char ch;
    fp = fopen("alphabets.txt", "r");
    fp1=fopen("upper.txt","w");

    if (fp == NULL)
    {
        printf("error"); 
        fclose(fp);
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, fp1);
    }

    return 0;
}
