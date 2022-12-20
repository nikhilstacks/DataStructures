#include <stdio.h>

int main()
{
	char str[30],ch;
	int  ind[10],loop,j;
	
	printf("Enter string: ");
	scanf("%[^\n]s",str);
	
	printf("Enter character: ");
	getchar();
	ch=getchar();
	
	j=0;
	for(loop=0; str[loop]!='\0'; loop++)
	{
		if(str[loop]==ch)
			ind[j++]=loop;
	}
	
	printf("Input string is: %s\n",str);
	printf("Indexes: ");
	for(loop=0; loop<j; loop++)
		printf("%d \t",ind[loop]);

	return 0;
}
