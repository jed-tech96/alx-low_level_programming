#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry point
 * Description: Prints single digit numbersof base 10 starting from zero followed by new line
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a= 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return(0);
}
