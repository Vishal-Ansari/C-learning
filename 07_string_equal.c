#include <stdio.h>
int equal_string()
{
    char st1[100], st2[100];
    int val, i;
    printf("vishal ansari section-N std id- 200111238\n");
    printf("enter the first sring\n");
    scanf("%s", st1);
    printf("enter the second string\n");
    scanf("%s", st2);
    for (i = 0; st1[i] != '\0' || st2[i] != '\0'; i++){
        if (st1[i] == st2[i]){
            return 1;}
        else{
            return 0;
            break;}
        }
}
int main()
{
    int val;
    val = equal_string();
    if (val == 1)
        printf("the srings are equal");
    else
        printf("the srings are not equal");
}