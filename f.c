#include<stdio.h>
#include<string.h>
int main()
{
char st1[50],ch[50];
int n=strlen(st1),i,count;
printf("\nenter the string...\n");
scanf("%s",st1);
for ( i = 0; i < n/2; i++)
{
    char ch=st1[i];
st1[i]=st1[n-i-1];
st1[n-i-1]=ch;
}

printf("the reverse of the string is %s",st1);


    return 0;
}
