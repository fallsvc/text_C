#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//select method

//void s_sort(int* p, int n)
//{
//	assert(p);
//	int i = 0;
//	int j = 0;
//	int c = 0;
//	
//	while (i!= n)
//	{
//		int max = *(p+i);
//		int count = 0;
//		j = i;
//		while (j != n)
//		{
//			if (*(p +j+1)  >max)
//			{
//				max = *(p + j + 1);
//				c = j + 1;
//				count++;
//			}
//			j++;
//		}
//		if (count)
//		{
//			*(p + c) = *(p + i);
//			*(p + i) = max;
//		}
//		i++;
//	}
//}
//
//int main()
//{
//	int arr[10000] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	s_sort(arr, n);
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}

//struct student
//{
//	char number[12];
//	char name[20];
//	char gender[10];
//	double scores[4];
//};
//
//double average(struct student* p)
//{
//	return ((*p).scores[0] + (*p).scores[1] + (*p).scores[2] + (*p).scores[3]) / 4;
//}
//
//int calcu(struct student* p)
//{
//	int i = 0;
//	double max = 0;
//	int n = 0;
//	for (i = 0; i < 6; i++)
//	{
//		if (average(p + i) > max)
//		{
//			max = average(p + i);
//			n = i;
//		}
//	}
//	return n;
//}
//
//int cmp_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct student*)e1)->name, ((struct student*)e2)->name);
//}
//
//int main()
//{
//	struct student data[100] = { 0 }, * p = data;
//
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %s %s %lf %lf %lf %lf",
//			(p + i)->number, (p + i)->name, (p + i)->gender,
//			&((p + i)->scores[0]), &((p + i)->scores[1]), &((p + i)->scores[2]), &((p + i)->scores[3]));
//	}
//
//	int ret = calcu(data);
//
//	qsort(data, n, sizeof(struct student), cmp_name);
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%-15s %-15s %-15s %-4.2lf %-4.2lf %-4.2lf %-4.2lf\n",
//			(p + i)->number, (p + i)->name, (p + i)->gender,
//			(p + i)->scores[0], (p + i)->scores[1], (p + i)->scores[2], (p + i)->scores[3]
//		);
//	}
//
//	return 0;
//}
#include <math.h>

int find_n(char* pc, int* pi)
{
	int i = 0;
	while (*pc != '\0')
	{
		int j = 0;
		int f = 0;
		if (*pc == '0')
		{
			*(pi+i)= 0;
			i++;
			pc++;
			f++;
		}
		while (*pc >= '0' && *pc <= '9')
		{
			j++;
			pc++;
			f++;
		}
		int sum = 0;
		int c = j;

		while (j)
		{
			sum += (*(pc - j))*pow(10, j-1);
			j--;
		}
		if(c)
			*(pi+i) = sum;
		if(f)
			pc++;
		i++;
	}
	return i;
}

int main()
{
	char arr[1000] = { 0 };
	gets(arr);
	int a[1000] = { 0 };

	int n = find_n(arr, a);

	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d\n", a + i);
	}
	return 0;
}