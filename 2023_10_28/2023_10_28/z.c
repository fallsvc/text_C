//#include <stdio.h>
//����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//int mid=left+(right-left)/2;��ֹ��ֵ���
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("zhuadao\n");
//			break;
//		}
//		
//	}
//	if (left > right)
//			printf("zhaobdao\n");
//	return 0;
//}
//����ַ��������ƶ����м���
// 
//char buf[] = "abc";
//[a b c \0]
//int main()
//{
//	char arr1[] = "welcome to here!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr2) - 1;//int right=sizeof(arr2)/sizeof(arr2[0])-2;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);// ms
//		left++;
//		right--;
//
//	}
//	return 0;
////}
//system //�����Ļ�⺯�� system("cls")

//�����������Σ����������˳�
#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>

int main()
{
	int i = 0;
	char pass[20] = { 0 };
	//�����������ַ���
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", pass);//�ַ����������ǵ�ַ����Ҫ&
		if (strcmp(pass, "abcdf") == 0)//strcmp(,) ��Ⱥ�Ϊ0
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("�������������ʧ�ܣ��˳�����\n");
	return 0;
 
}