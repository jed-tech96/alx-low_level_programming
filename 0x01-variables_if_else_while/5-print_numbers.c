#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry point
 * Description: prints all single digits of base 10 from base 0
 * Return: Always 0 (success)
 */
int main(void)
{	
	int a;

	for (a= 0; a < 10; a++)
	{	
		printf("%d", a);
	}
	putchar('\n');
	return(0);
}

