#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry point
 * Description : printing alphabet in lowercase
 * Return: Always 0 Sucess
 */
int main(void)
{
	int ch;

	for (ch ='a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
	
