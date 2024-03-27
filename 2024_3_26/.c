#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//数组删除元素
//int main()
//{
//	int arr[] = { 1,2,5,3,4,5,5,6,7,9 };
//	int k = 5;
//	int i, j=0;
//	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		if (arr[i] != k)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for(i=0;i<j;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopenpf");
//		return 1;
//	}
//	FILE* p = fopen("data_copy.txt", "w");
//	if (p == NULL)
//	{
//		perror("fopenp");
//		fclose(pf);
//		pf = NULL;
//		return 1;
//	}
//	//copy
//	char ch=0;
//	while ((ch= fgetc(pf))!= EOF)
//	{
//		fputc(ch, p);
//	}
//	fclose(pf);
//	fclose(p);
//	pf = NULL;
//	p = NULL;
//	return 0;
//}

//#define SQ(x,y) x+y*x+y
//int main()
//{
//	int sum=SQ(3, 4);
//
//	printf("%d\n", sum);
//
//	return 0;
//}
#if 0
#define Generic(type) 
int main()
{

	printf("%d\n", 20);

	return 0;
}
#endif
int main()
{
	printf("123456789");
	return 0;
}
