//#include<iostream>
//
//using namespace std;
//
//bool findNum(int a)
//{
//	double d = (double)a;
//	int th, hun, ten, one;
//	th = a / 1000;
//	hun = (a / 100) % 10;
//	ten = (a % 100) / 10;
//	one = a % 10;
//	
//	int first = ten - one;
//	int second = hun - ten;
//	int third = th - hun;
//
//	if (th == 0 && hun == 0)
//		return true;
//	else if (th == 0 && second == first)
//		return true;
//	else if ((first == second) && (second == third))
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	int countNum;
//	cin >> countNum;
//
//	int count = 0;
//	for (int i = 1; i <= countNum; i++)
//	{
//		if (findNum(i) == true)
//		{
//			count++;
//		}			
//	}
//	cout << count << endl;
//
//}