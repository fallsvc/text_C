//#include <stdio.h>
//#include <assert.h>
//
//char* myfgets(char* string, int n, FILE* stream)
//{
//	assert(string && stream);
//	if (n == 0)
//		return NULL;
//	char ch;
//	int i = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		fscanf(stream, "%c", ch);
//		if (ch == EOF)
//			break;
//		else if (ch == '\n')
//		{
//			string[i] = ch;
//			i++;
//			break;
//		}
//		else
//		{
//			string[i] = ch;
//		}
//	}
//	string[i] = '\0';
//	if (i == 0 && ch == EOF)
//		return NULL;
//
//	return string;
//}