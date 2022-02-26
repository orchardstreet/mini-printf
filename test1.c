#include <stdio.h>
#include <stdlib.h>

#include "mini-snprintf.h"

int main(void)
{
	int i = 10;
	char buff[30];
	mini_snprintf(buff, sizeof buff, "after 9 is %d", i);
	puts(buff); 
	return 0;
}
