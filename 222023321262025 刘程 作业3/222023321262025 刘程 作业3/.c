#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdarg.h>

void my_printf(const char* f, ...)
{
	va_list args;
	va_start(args, f);
	while (*f)
	{
		if (*f == '%')
		{
			f++;
			if (*f == 'd')
			{
				int num = va_arg(args, int);
				int tmp = num;
				int digits = 0;
				while (tmp)
				{
					tmp /= 10;
					digits++;
				}
				//char str[digits+1];//c99
				char str[10000];
				
				tmp = num;
				for (int i = digits-1; i>=0; i--)
				{
					str[i] = tmp % 10+'0';
					tmp /= 10;
				}
				str[digits] = 0;
				for (int i = 0; i < digits; i++)
				{
					putchar(str[i]);
				}
			}
            else if (*f == 'c')
            {
                char a = va_arg(args, char);
                putchar(a);
            }
            else if (*f == 's')
            {
                char* b = va_arg(args, char*);
                while (*b)
                {
                    putchar(*b);
                    b++;
                }
            }
            else if (*f == 'x')
            {
                int n = va_arg(args, int);
				int tmp = n;
				int j= 0;
				char str[100];
				while (tmp)
				{
					str[j++] = tmp % 16;
					tmp /= 16;
				}
				str[j] = 0;
				while (j > 0)
				{
					j--;
					if (str[j] <= 10)
						putchar('0' + str[j]);
					else
						putchar('a' + str[j] - 10);
				}
            }
            else
            {
                putchar('%');
                putchar(*f);
            }
		}
        else
        {
            putchar(*f);
        }
        f++;
	}
    va_end(args);
}

int main() {
    int num = 10;
    my_printf("num==%d %s %c %x\n", num,"abcf",'c',20);
    return 0;
}
