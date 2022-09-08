// question 1  FILE
// printf("vishal ansari section-N std id- 200111238\n");
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char para[1000];

    // creating file pointer to work with files
    FILE *fptr;

    // opening file in writing mode
    fptr = fopen("program.txt", "w");

    // exiting program 
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(para, sizeof(para), stdin);
    fprintf(fptr, "%s", para);
    
    fscanf(fptr , "%s" , para);
    
    for(int i = 0; i < strlen(para); i++){  
        if(para[i] == ' ')  
            para[i] = '$';  
    } 
    
    printf("%s" , para);
    fclose(fptr);
    printf("vishal ansari section-N std id- 200111238\n");
    return 0;
} 