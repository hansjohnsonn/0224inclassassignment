#include <stdio.h>

void main()
{
	int num, i, flag;

	printf("Number \n");
	scanf("%d", &num);

	if (num <= 1)
	{
		printf("%d is not a prime number \n", num);
	}
	flag = 0;
	for (i = 2; i <= num / 2; i++)
	{
		if ((num % i) ==0)
		{
		flag = 1;
		break;
		}
	}
	if (flag == 0) {
		printf("%d is a prime number \n", num);
	}
	else {
		printf("%d is not a prime number \n", num);
	}
}	
