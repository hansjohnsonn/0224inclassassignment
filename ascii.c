#include<stdio.h>

int main()
{
	char str[100];
	int i;

	printf("Enter a character or a string: ");
	fgets(str,100,stdin);

	printf("String: %s\n",str);
	printf("ASCII: ");
	for(i=0; str[i]!='\0';i++)
	{
		printf("%d\n ",str[i]);
	}
	printf("\n");
	return 0;
}

