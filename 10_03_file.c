// question 3
// vishal ansari
#include<stdio.h>
int main(){
	FILE *fptr = fopen("ThreeParas.txt","w");
	char paras[100];
	int i = 1;
	while(i<=3){
		printf("\nEnter Paragraph %d:",i);
		fgets(paras,100,stdin);
		fputs(paras,fptr);
		i++;
	}
	fclose(fptr);
	fptr = fopen("ThreeParas.txt","r");
	int consonents = 0, vowels = 0;
	int ch;
	while((ch = fgetc(fptr)) != EOF){
		printf("%c",ch);
		if(ch < 'a')
			ch = ch+32;
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			vowels++;
		else
			consonents++;
	}
	printf("\nConsonents = %d, Vowels = %d",consonents,vowels);
	fclose(fptr);
    printf("vishal ansari section-N std id- 200111238\n");
	return 0;
}