//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdarg.h>
//
//void print_int(int n)
//{
//	char a[100];
//	int i = 0;
//	int tmp = n;
//
//	while (tmp / 10 || tmp % 10)
//	{
//		a[i++] = tmp % 10 + 48;
//		tmp /= 10;
//	}
//	while (i > 0)
//	{
//		putchar(a[--i]);
//	}
//}
//
////从myprintf函数得一个float型和位数后执行下函数
////小数保留位数wz
//void float_characters(float n, size_t wz)
//{
//
//	if (n < 0)
//	{
//		putchar('-');
//		n = -n;
//	}
//	int integer_f = (int)n;
//
//	print_int(integer_f);
//
//	putchar('.');
//
//	float small_f = (n - integer_f);
//	while (wz--)
//	{
//		small_f *= 10;
//	}
//	int small_float = (int)small_f;
//
//	print_int(small_float);
//}
//
//
//void my_printf(const char* f, ...)
//{
//	va_list args;
//	va_start(args, f);
//	while (*f)
//	{
//		if (*f == '%')
//		{
//			f++;
//
//			if (*f == '.' && (*(f + 1) > 48 && *(f + 1) < 57))
//			{
//				if (*(f + 2) == 'f')
//				{
//					float num = va_arg(args, double);
//					float_characters(num, (*(f + 1)) - 48);
//					f += 3;
//				}
//			}
//			else if (*f == 'f')
//			{
//				float num = va_arg(args, double);
//				float_characters(num, 5);
//			}
//			else if (*f == 'd')
//			{
//				int num = va_arg(args, int);
//				print_int(num);
//			}
//			else if (*f == 'c')
//			{
//				char a = va_arg(args, char);
//				putchar(a);
//			}
//			else if (*f == 's')
//			{
//				char* b = va_arg(args, char*);
//				while (*b)
//				{
//					putchar(*b);
//					b++;
//				}
//			}
//			else if (*f == 'x')
//			{
//				int n = va_arg(args, int);
//				int tmp = n;
//				int j = 0;
//				char str[100];
//				while (tmp)
//				{
//					str[j++] = tmp % 16;
//					tmp /= 16;
//				}
//				str[j] = 0;
//				while (j > 0)
//				{
//					j--;
//					if (str[j] < 10)
//						putchar('0' + str[j]);
//					else
//						putchar('a' + str[j] - 10);
//				}
//			}
//			else
//			{
//				putchar('%');
//				putchar(*f);
//			}
//		}
//		else
//		{
//			putchar(*f);
//		}
//		f++;
//	}
//	va_end(args);
//}
//
//int main()
//{
//	int num = 10;
//	my_printf("%f %.4f", -123.123, 123.123);
//	return 0;
//}
