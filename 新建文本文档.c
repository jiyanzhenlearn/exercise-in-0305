#include <stdio.h>
//
////void prinf()
////{
////	printf("hehe");
////}
////int main()
////{
////	void (*p)() = prinf; // ����ָ�룬ָ������ָ�� �� ���������Ǻ�����ַ
////	(*p)();  //
////	prinf();//  ����ָ�����
////	return 0;
////}
////   (*(void(*)())0)()  һ�κ����ĵ���;��0ǿ��ת����void(*)()�ĺ���ָ�����ͣ�0����һ�������ĵ�ַ������0��ַ���ĺ���
//
////   void(* signal(int, void(*)(int) ) (int)
////   signal�Ǻ�������
////   signal�����Ĳ�����������һ����int���ͣ�һ���Ǻ���ָ�����ͣ��ú���ָ��ָ��ĺ���������int�ͣ�������void
////   signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ���������int�ͣ�������void
////    ��д���� 
////   typedef  void(*p_fun)(int); // ��void (*)(int) ����Ϊp_fun
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
//	int(*p[4])(int, int) = { add,sub,mul,div };  // ����ָ�����飬��ź���ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", p[i](2, 3));
//	}
//
//	return 0;
//}