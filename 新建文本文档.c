#include <stdio.h>
//
////void prinf()
////{
////	printf("hehe");
////}
////int main()
////{
////	void (*p)() = prinf; // 函数指针，指向函数的指针 ； 函数名就是函数地址
////	(*p)();  //
////	prinf();//  函数指针调用
////	return 0;
////}
////   (*(void(*)())0)()  一次函数的调用;将0强制转换成void(*)()的函数指针类型，0就是一个函数的地址，调用0地址处的函数
//
////   void(* signal(int, void(*)(int) ) (int)
////   signal是函数类型
////   signal函数的参数有两个，一个是int类型，一个是函数指针类型，该函数指针指向的函数参数是int型，返回是void
////   signal函数的返回类型也是一个函数指针，该函数指针指向的函数参数是int型，返回是void
////    简化写法： 
////   typedef  void(*p_fun)(int); // 将void (*)(int) 定义为p_fun
////   p_fun(*signal(int,p_fun);
//
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	int(*p[4])(int, int) = { add,sub,mul,div };  // 函数指针数组，存放函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", p[i](2, 3));
//	}
//
//	return 0;
//}