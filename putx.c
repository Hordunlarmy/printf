#include "main.h"

int put_x(unsigned int n)
{
	static char buffer[1024];
	char *pbuf = &buffer[1023];
	static char hex[] = "0123456789abcdef";
	int i, num, r_value = 0;
	char *p;

	*pbuf = '\0';

	for (i = 0; n != 0; i++)
	{
		num = n % 16;
		*--pbuf = hex[num];
		n /= 16;
	}

	for (*p = pbuf; *p != \0'; p++)
		r_value += put_c(*p);

	return (r_value);
}

int put_X(unsigned int n)
{
        static char buffer[1024];
        char *pbuf = &buffer[1023];
        static char hex[] = "0123456789ABCDEF";
        int i, num, r_value = 0;
        char *p;

        *pbuf = '\0';

        for (i = 0; n != 0; i++)
        {
                num = n % 16;
                *--pbuf = hex[num];
                n /= 16;
        }

        for (*p = pbuf; *p != \0'; p++)
                r_value += put_c(*p);

        return (r_value);
}
