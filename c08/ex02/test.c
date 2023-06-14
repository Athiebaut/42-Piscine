#include <stdio.h>

#include "ft_abs.h"

int main()
{
	int index = -5;
	while (index < 5)
	{
		printf("macros::abs(%d) = %d\n", index, ABS(index));
		index++;
	}
}
