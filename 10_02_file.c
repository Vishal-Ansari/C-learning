// question 2
// Vishal ansari
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    FILE *fptr;
    fptr = fopen("Numbers.txt", "r");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    while(fscanf(fptr , "%d\n" , &num) != EOF)
    {
        if(num % 7 == 0)
          printf("%d\n" , num);
    }   
    fclose(fptr);
    printf("vishal ansari section-N std id- 200111238\n");
    return 0; 
}