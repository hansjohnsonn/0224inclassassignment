#include<stdio.h>

void hexDump (const char * desc, const void * addr, const int len)
{
	int i;
	unsigned char buff[17];
	const unsigned char * pc = (const unsigned char *)addr;

	//output desc
	if (desc != NULL)
		printf("%s:\n",desc);

	//process bytes
	for (i = 0; i < len; i++)
	{
		if ((i%16) ==0)
		{
			if (i != 0)
				printf("   %s\n", buff);
			printf("   %04x", i);
		}
		//hex code per character
		printf("   %02x", pc[i]);

		//buffer mmm
		if ((pc[i] < 0x20) || (pc[i] > 0x7e))
			buff[i%16] = '.';
		else
			buff[i%16] = pc[i];
		buff[(i%16)+1] = '\0';
	}
	while ((i%16) != 0) 
	{
		printf ("   ");
		i++;
	}
	printf("   %s\n", buff);
}
int main (int argc, char *argv[])
{
	char str[] = "get them strings";
	hexDump ("str", &str, sizeof (str));
	return 0;
}

