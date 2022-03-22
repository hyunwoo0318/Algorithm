//#include<iostream>
//
//using namespace std;
//
//int arr[10000]={};
//
//int main()
//{
//	for (int i = 2; i < 10000; i++)
//		arr[i] = i;
//	
//	for (int i = 2; i < 100; i++)
//	{
//		if (arr[i] == 0) continue;
//		for (int j = 2 * i; j <= 10000; j += i)
//		{
//			arr[j] = 0;
//		}
//	}
//
//	int countNum;
//	cin >> countNum;
//
//	int N,a,b;	
//
//	for (int i = 0; i < countNum; i++)
//	{
//		cin >> N;
//		a = N / 2;
//		b = N / 2;
//
//		while (b != 0)
//		{
//			if (arr[a] != 0 && arr[b] != 0)
//			{
//				cout << b << " " << a << endl;
//				break;
//			}
//			else
//			{
//				a++; b--;
//			}
//
//		}
//	}
//	
//
//}