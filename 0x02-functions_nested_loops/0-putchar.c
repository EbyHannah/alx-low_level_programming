#include <stdio.h>

#include "main.h"



/**
 * main - Entry point
 * Descriptions: Print _putchar followed by a new line
 * Return:0
 */
int main(void)

{

	char ch[8] = "_putchar";

	int i = 0;



	while (i < 8)

	{

	_putchar(ch[i]);

	i++;

	}

	_putchar('\n');

	return (0);



}
