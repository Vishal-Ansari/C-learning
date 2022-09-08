#include<stdio.h>

int main()
{
char st1[50],i,count=1;
printf("\nVISHAL ANSARI  SECTION-N STD-ID-200111238\n");
printf("enter the string \n");
gets(st1);
for(i=0;st1[i]!='\0';i++)
{
if(st1[i]==' '&&st1[i+1]!=' ')
{
    count++;
}
}
printf("the total no of words in the entered string is %d",count);
    return 0;
}
