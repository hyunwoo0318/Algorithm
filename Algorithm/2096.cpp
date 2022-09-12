//#include<iostream>
//
//using namespace std;
//
//int arr[3][4];
//int w[100001][4];
//
//void init(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= 3; j++)
//			arr[i][j] = 0;
//	}
//}
//
//int findMax(int n)
//{
//	init(n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= 3; j++)
//		{
//			if (j == 1)
//				arr[2][j] = max(arr[1][j], arr[1][j + 1]) + w[i][j];
//			if (j == 2)
//				arr[2][j] = max(arr[1][j], max(arr[1][j - 1], arr[1][j + 1])) + w[i][j];
//			if (j == 3)
//				arr[2][j] = max(arr[1][j], arr[1][j - 1]) + w[i][j];
//		}
//		for (int j = 1; j <= 3; j++)
//		{
//			arr[1][j] = arr[2][j];
//		}
//	}
//
//	return max(arr[1][1], max(arr[1][2], arr[1][3]));
//}
//
//int findMin(int n)
//{
//	init(n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= 3; j++)
//		{
//			if (j == 1)
//				arr[2][j] = min(arr[1][j], arr[1][j + 1]) + w[i][j];
//			if (j == 2)
//				arr[2][j] = min(arr[1][j], min(arr[1][j - 1], arr[1][j + 1])) + w[i][j];
//			if (j == 3)
//				arr[2][j] = min(arr[1][j], arr[1][j - 1]) + w[i][j];
//		}
//		for (int j = 1; j <= 3; j++)
//		{
//			arr[1][j] = arr[2][j];
//		}
//	}
//
//	return min(arr[1][1], min(arr[1][2], arr[1][3]));
//}
//
//int main()
//{
//	int n,a;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= 3; j++)
//		{
//			cin >> a;
//			w[i][j] = a;
//		}
//	}
//
//	int ansMin = findMin(n);
//	int ansMax = findMax(n);
//
//	cout << ansMax << " " << ansMin;
//
//
//}