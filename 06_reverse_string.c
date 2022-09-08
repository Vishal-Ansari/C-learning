#include<stdio.h>
#include<string.h>

int main()
{
char st1[50];
char st2[50];
int i,j,count=0;
printf("\nVISHAL ANSARI  SECTION-N STD-ID-200111238\n");
printf("enter the string\n ");
scanf("%s",st1);
while(st1[count]!='\0')
{
    count++;
}
j=count-1;
for(i=0;i<count;i++)
{
    st2[i]=st1[j];
    j--;
}
printf("the reversed string is: %s            \n",st2);

    return 0;
}
