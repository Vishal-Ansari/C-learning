#include <stdio.h>
#include<string.h>
int main()
{
    char st[100];
    int freq[100];
    int i, j, count;
     printf("\nVISHAL ANSARI Section:N  Student ID:200111238\n");
    printf("enter the string\n");
    gets(st);
    int len=strlen(st);
    for (i = 0; i<len; i++){
        freq[i] = -1;
    }
    for (i = 0; i<len; i++){
        count = 1;
        for (j = i + 1; j<=len; j++){
            if (st[i] == st[j]){
                count++;
                freq[j] = 0;}
        }
        if (freq[i] != 0){
            freq[i] = count;}
    }
    for (i = 0; i<len; i++){
        if (freq[i] != 0){
           printf("the freq of %c is %d\n",st[i],freq[i]);}
    }
    return 0;
}
