#include "main.h"

/**
 *jack_bauer - prints number per minute
 */
void jack_bauer(void)
{
	int hr, mnt;

	for (hr = 0; hr < 24; hr++)
	{
		for (mnt = 0; mnt < 60; mnt++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mnt / 10) + '0');
			_putchar((mnt % 10) + '0');
			_putchar('\n');
		}
	}
}
