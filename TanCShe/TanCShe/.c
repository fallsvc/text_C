//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//#include <locale.h>
//
//#define KEY_PRESS(VK)  ((GetAsyncKeyState(VK) & 1) ? 1 : 0 )
//
////int main()
////{
////    while (1)
////    {
////        if (KEY_PRESS(0x30))
////        {
////            printf("0\n");
////        }
////        else if (KEY_PRESS(0x31))
////        {
////            printf("1\n");
////        }
////        else if (KEY_PRESS(0x32))
////        {
////            printf("2\n");
////        }
////        else if (KEY_PRESS(0x33))
////        {
////            printf("3\n");
////        }
////        else if (KEY_PRESS(0x34))
////        {
////            printf("4\n");
////        }
////        else if (KEY_PRESS(0x35))
////        {
////            printf("5\n");
////        }
////        else if (KEY_PRESS(0x36))
////        {
////            printf("6\n");
////        }
////        else if (KEY_PRESS(0x37))
////        {
////            printf("7\n");
////        }
////        else if (KEY_PRESS(0x38))
////        {
////            printf("8\n");
////        }
////        else if (KEY_PRESS(0x39))
////        {
////            printf("9\n");
////        }
////    }
////    return  0;
////}
//
//void set_pos(short x, short y)
//{
//	HANDLE houtput = NULL;
//	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	//定位光标位置
//	COORD pos = { x,y };
//	SetConsoleCursorPosition(houtput, pos);
//}
////int main()
////{
////	system("mode con cols=100 lines=30");
////	system("title 贪吃蛇");
////	set_pos(10, 20);
////	printf("hehe\n");
////	//getchar();
////	//system("pause");
////	return 0;
////}
//
//int main()
//{
//	char*p =setlocale(LC_ALL, NULL);
//	printf("%s\n",p);
//	p = setlocale(LC_ALL, "");
//	printf("%s\n", p);
//
//	wchar_t a = L'刘';
//	wprintf(L"%lc\n", a);
//	return 0;
//}