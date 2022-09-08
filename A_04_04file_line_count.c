//question 4
//vishal ansari
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int count=1;
    char ch;
FILE *ptr;
ptr=fopen("lines.txt","r");
ch=getc(ptr);
while(ch!=EOF)
{
    if(ch=='\n')
    {count+=1;}
    ch=getc(ptr);
}
fclose(ptr);
printf("the total no of lines in the file is %d",count);
    return 0;
}
