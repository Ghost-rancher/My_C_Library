#include<stdio.h>
#include "my_string.h"

int Lenght(char* g)
{
	int gh = 0;
	while(g[gh] != '\0')
	{
		gh++;
	}
	return gh;
}
