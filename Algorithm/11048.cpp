//#include<iostream>
//
//using namespace std;
//
//int arr[1001][1001];
//int w[1001][1001] = {};
//
//int main()
//{
//	int n, m, a;
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> a;
//			w[i][j] = a;
//		}
//	}
//
//	arr[1][1] = w[1][1];
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (i == 1 && j == 1)
//				continue;
//			
//			arr[i][j] = max(arr[i - 1][j], max(arr[i][j - 1], arr[i - 1][j - 1])) + w[i][j];
//		}
//	}
//	cout << arr[n][m];
//}