#include<stdio.h>

int main()
{
char st[1000];
int i;
 printf("vishal ansari section-N std id- 200111238\n");
printf("enter the string\n");
gets(st);
for(i=0;st[i]!='\0';i++)
{
    if((st[i]>=65&&st[i]<=90)||(st[i]>=90&&st[i]<=122))
    printf("%c",st[i]);
    else
    printf(" ");
}
    return 0;
}
