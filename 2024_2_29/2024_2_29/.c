#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	FILE* pf = fopen("C:\\Users\\12092\\OneDrive\\文档\\Visual Studio 2022\\VS code\\c\\2024_2_29\\2024_2_29\\test.txt.txt", "r");
//	if (pf == NULL)
//	{
//		/*printf("%s\n", strerror(errno));*/
//		perror("fopen");
//		return 1;
//	}
//	//..
//	//write
//	/*fputc('a', pf);
//	char i = 0;
//	for (i = 'a'; i < 'z'; i++)
//	{
//		fputc(i, pf);
//	}*/
//
//	//read 
//	/*char ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c\n", ch);
//	}*/
//
//	//write
//	/*fputs("hello boys!!\n", pf);
//	fputs("hello boys!!\n", pf);
//	fputs("hello boys!!\n", pf);*/
//
//	//read
//	char arr[10];
//	fgets(arr, 5, pf);
//	printf("%s\n", arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct STU
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct STU s = { 0 };//{ "zhangans",25,100.00 };
//	FILE*pf=fopen("C:\\Users\\12092\\OneDrive\\文档\\Visual Studio 2022\\VS code\\c\\2024_2_29\\2024_2_29\\test.txt.txt", "r");//w
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//write
//	//fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//	//read
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//
//	fprintf(stdout,"%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

struct STU
{
	char name[20];
	int age;
	float score;
};

int main()
{
	struct STU s = { "zhangsan",23,50.0 };
	//二进制写到文件
	FILE*pf=fopen("C:\\Users\\12092\\OneDrive\\文档\\Visual Studio 2022\\VS code\\c\\2024_2_29\\2024_2_29\\test.txt.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//二进制写
	//fwrite(&s, sizeof(struct STU), 1, pf);
	//rb
	fread(&s, sizeof(struct STU), 1, pf);
	fprintf(stdout, "%s %d %f\n", s.name, s.age, s.score);

	fclose(pf);
	pf = NULL;

	return 0;
}