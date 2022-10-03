//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//#define maxNum 987654321
//
//int arr[101][101];
//
//int main()
//{
//	int n, m, i1,i2,input;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//			arr[i][j] = maxNum;
//	}
//
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> i1 >> i2;
//		arr[i1][i2] = 1;
//		arr[i2][i1] = 1;
//	}
//
//	for (int k = 1; k <= n; k++)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
//			}
//		}
//	}
//
//	int res = maxNum;
//	int ans = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		int sum = 0;
//		for (int j = 1; j <= n; j++)
//		{
//			if (i == j)
//				continue;
//			sum += arr[i][j];
//		}
//		if (sum < res)
//		{
//			res = sum;
//			ans = i;
//		}
//	}
//	cout << ans;
//}