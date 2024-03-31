#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define  Offsetof(id, element)  (size_t)(&(((struct id*)0)->element))
#define offsetof(a,b) ((char*)&b-(char*)&a)

struct ST
{
	char a;
	int b;
	char c;
};

int main()
{
	struct ST s;
	unsigned long ret=Offsetof(ST,c);
	printf("%lu\n", ret);

	return 0;
}


//(n&0xaaaaaaaa)>>1)奇数位到偶数位
//(n&0x55555555)<<1)偶数位到奇数位
#define swap_bit(n) (n=((n&0xaaaaaaaa)>>1)+((n&0x55555555)<<1))

int main()
{
	int n = 10;
	swap_bit(n);

	printf("%d\n",n);

	return 0;
}

//文件的打开
//	fopen(const char*filename,const char* mode)
//关闭文件
//	int fclose(FILE * stream);

//int main()
//{
//	//打开文件
//	FILE* pf=fopen("test.txt","r");
//	//判断是否打开成功
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
////	int fgetc(FILE * stream);
//	int ret=fgetc(pf);
//// int fputc(int c,FILE*stream);
//	fputc("c", pf);
////	char* fgets(char* string, int n, FILE * stream);
//	char a[20];
//	fgets(a, 20, pf);
//
////	int fputs(const char* string, FILE * stream);
//	fputs("abcdf", pf);
////	int fscanf(FILE * stream, const char* formal[, argument]...);
//	char s;
//	char str[20];
//	int b;
//	fscanf(pf, "%c %s %d ",&s,str,&b);
////	int fprintf(FILE * stream, const char* formal[, argument]...);
//	fprintf(pf, "%d %s", 10, "abcdf");
//	//关闭文件
////	size_t fread(void* buffer, size_t size, size_t count, FILE * stream);
//	
//	fread(c, sizeof(char), 20, pf);
////	size_t fwrite(const void* buffer, size_t size, size_t count, FILE * stream);
//	char c[20];
//	fwrite(c, sizeof(char), 20, pf);
////	int fseek(FILE * stream, long offset, int origin);
////	origin操作位置 offset相对于origin位置偏移量
//	fseek(pf, 5, SEEK_SET);
//
//	long ftell(FILE * stream);
//
//	void rewind(FILE * stream);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}

int main()
{

	int ret=Add(1, 2);
	printf("%d\n",ret);
	return 0;
}
#endif
