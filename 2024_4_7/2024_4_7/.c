//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <assert.h>

//删除值为k
// 
//int Del(int* a,int numSize,int k)
//{
//	assert(a);
//	int i = 0;
//	int j = 0;
//	while (i<numSize)
//	{
//		if (a[i] != k)
//		{
//			a[j] = a[i];
//			i++;
//			j++;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	return j;
//}
//
//int main()
//{
//	int arr[] = { 1,1,2,2,3,3 };
//	int ret=Del(arr, 6,2);
//	return 0;
//}

//合并数组

//int* Hebing(int* nums1, int n, int* nums2, int m)
//{
//	int l1 = n - 1;
//	int l2 = m - 1;
//	int l3 = m + n - 1;
//	while (l1 >= 0 && l2 >= 0)
//	{
//		if (nums1[l1] >= nums2[l2])
//		{
//			nums1[l3--] = nums1[l1--];
//		}
//		else
//		{
//			nums1[l3--] = nums2[l2--];
//		}
//	}
//	
//	while (l2>=0)
//	{
//		nums1[l3--] = nums2[l2--];
//	}
//}
//
//int main()
//{
//	int a[7] = { 1,2,2,3 };
//	int b[] = { 1,2,4 };
//	Hebing(a, 4, b, 3);
//	return 0;
//}

//typedef struct SListNode
//{
//	int data;
//	struct SListNode* next;
//}SLN;
//
//int main()
//{
//	
//	return 0;
//}

