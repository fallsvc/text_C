#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <assert.h>
//int main()
//{
//	const char arr= NULL;
//	assert(arr != NULL);
//
//	return 0;
//
//}
///���ַ�������
#include <assert.h>

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);//is NULL(0) Ϊ�ٱ���
//	//release�� assert �ᱻ�Ż�
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello boy";
//	int len = my_strlen(arr);//char*
//	printf("%d\n",len);
//
//	return 0;
//}
// ctrl+f ����
//��̳�������
//1.�����ͣ��﷨����
//2.�����ͣ������ڼ䣩eg��LNK�޷�����...
//3.����ʱ���󣨵��Խ����

//�ж�������

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) == 3)
	{
		if ((a + b > c) && (a + c > b) && (b + c > a))
		{
			if ((a == b) && (b == c))
			{
				printf("Equilateral triangle\n");
			}
			else if ((a == b && b != c) || (a == c && b != c) || (b == c && c != a))
			{
				printf("Isosceles triangle\n");
			}
			else
				printf("Ordinary triangle\n");
		}
		else
		{
				printf("not a triangle\n");
		}	
	}
	return 0;
}