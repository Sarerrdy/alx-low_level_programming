#include <stdio.h>
#include <string.h>
/**
 * main - prints the word _putchar
 * 
 * retur: always 0 represent success
 */
int main (void)
{
	char *words = "_putchar";
	while (*words)
	{
		putchar(*words);
		words++;
	}
	putchar('\n');
	return(0);
}
