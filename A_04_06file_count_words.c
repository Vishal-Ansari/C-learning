// question 6
// vishal ansari
#include <stdio.h>
int main()
{
    int characters= 0,words=1;
    FILE *ptr = fopen("countfile.txt", "r");

    char ch;
    ch = fgetc(ptr);

    while(ch!= EOF)
    {
        
        characters++;
       ch = fgetc(ptr);

       if(ch==' '||ch=='\n'||ch=='\t'||ch=='\0')
       {
         words++;
       ch = fgetc(ptr);
       }
	}
	fclose(ptr);

	printf(" total character are %d\n total no of words are %d",characters,words);
	return 0;
}