#include<stdio.h>
void swap(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    printf("the swapped values of x is %d and y is %d",x,y);    
}

int main()
{
    printf("vishal ansari section-N std id- 200111238\n");
    int x,y;
    printf("enter the no of x \n");
    scanf("%d",&x);
    printf("enter the no of y \n");
    scanf("%d",&y);
    swap(x,y);
    return 0;
}
