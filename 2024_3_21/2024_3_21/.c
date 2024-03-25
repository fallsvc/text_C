#include <stdio.h>
#include <stdlib.h>

//enum color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	enum color c = RED;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc:");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	int* ret = (int*)realloc(p, 40 + sizeof(int) * 5);
//	if (ret != NULL)
//		p = ret;
//
//	for (i = 0; i < 5; i++)
//	{
//		*(p + 10 + i) = i;
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}

int main()
{
	int row = 3;
	int col = 5;

	int** arr = (int**)malloc(sizeof(int*) * row);
	if (arr == NULL)
	{
		perror("malloc");
		return 1;
	}
	int i = 0;
	for (i = 0; i < row; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * col);
		if (arr == NULL)
		{
			perror("malloc");
			return 1;
		}
	}
	int j = 0;
	int n = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = n++;
		}
	}
	//´òÓ¡
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < row; i++)
	{
		free(arr[i]);
	}
	free(arr);

	return 0;
}