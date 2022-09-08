#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5,6,7};
int *ptr,i,temp;
ptr=a;

for(i=0;i<4;i++)
{
    temp=*(ptr+i);
    *(ptr+i)=*(ptr+(6-i));
    *(ptr+(6-i))=temp;
 
}
 printf("vishal ansari section-N std id- 200111238\n");
    printf("the reverse order is ..\n");
   for(i=0;i<7;i++)
   printf("%d\t",*(ptr+i));

    return 0;
}
