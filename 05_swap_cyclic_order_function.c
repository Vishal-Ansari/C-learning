#include<stdio.h>
void swap(int *a,int *b,int *c);
int main()
{
    int a=1,b=2,c=3;
    printf("Question 1:VISHAL ANSARI Section:N  Student ID:200111238\n");
    printf("the value of a , b and c before swap is %d %d and %d\n",a,b,c);
    swap(&a,&b,&c);
    printf("the value of a , b and c after swap is %d ,%d and %d \n",a,b,c);

    return 0;
}

void swap(int *a,int *b,int *c)
{
   int temp;//,,,,,,,,,,,, 123...312
    temp=*a;//temp=1
    *a=*c;// a=3
    *c=*b;//c=2
    *b=temp;//b=1 

}