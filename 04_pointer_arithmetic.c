#include<stdio.h>

int main()
{
 int a=5,*ptr;
 ptr=&a;
 char c='x',*ptr1;
 ptr1=&c;
  printf("vishal ansari section-N std id- 200111238\n");
 printf("...........the address of a is %u \n",&a);
 printf("the incremented adress of a is %u \n",++ptr);
 printf("the decremented adress of a is %u \n",--ptr);
 printf("the incremented adress after addition of integer a is %u \n\n\n",ptr=ptr+3);
 
 printf("...........the address of c is %u \n",&c);
 printf("the incremented adress of c is %u \n",++ptr1);
 printf("the decremented adress of c is %u \n",--ptr1);
 printf("the incremented adress after addition of integer a is %u \n\n\n",ptr1=ptr1+3);

    return 0;
}
