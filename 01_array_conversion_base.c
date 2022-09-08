//Question 5:   Vishal ansari
#include<stdio.h>
int main()
{
    long int dec_num,remainder,quotient;
    int i=1,j,temp;
    char hexa_decimal[100];
    printf("Question 1:VISHAL ANSARI Section:N  Student ID:200111238\n");
    printf("Enter decimal number:");
    scanf("%ld",&dec_num);
    quotient=dec_num;
    while(quotient!=0)
    {
        temp=quotient%16;
        if(temp<10)
            temp+=48;
        else
            temp+=55;
        hexa_decimal[i++]=temp;
        quotient/=16;
    }
    printf("Hexadecimal equivalent of given decimal number %ld is:",dec_num);
    for(j=i-1;j>0;j--)
        printf("%c",hexa_decimal[j]);
    return 0;
}