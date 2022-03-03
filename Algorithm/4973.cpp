//#include<iostream>
//
//using namespace std;
//
//int find(int a)
//{
//	double d = (double)a;
//	int th, hun, ten, one;
//	th = a / 1000;
//	hun = (a / 100) % 10;
//	ten = (a % 100) / 10;
//	one = a % 10;
//	return (th + hun + ten + one);
//}
//bool selfNum(int a)
//{
//	for (int i = 1; i < a; i++)
//	{
//		if (i + find(i) == a)
//		{
//			//self-num이 아닌경우
//			return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	for (int i = 1; i < 10000; i++)
//	{
//		if (selfNum(i) == true)
//			printf("%d\n", i);
//	}
//}