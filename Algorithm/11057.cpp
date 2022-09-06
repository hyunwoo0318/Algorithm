//#include<iostream>
//
//using namespace std;
//
//long long arr[1001][10];
//int ans[1001];
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	//초기값 설정
//	for (int i = 0; i <= 9; i++)
//	{
//		arr[1][i] = 1;
//	}
//	ans[1] = 10;
//
//	for (int i = 2; i <= n; i++)
//	{
//		for (int j = 0; j <= 9; j++)
//		{
//			for (int k = 0; k <= j; k++)
//			{
//				arr[i][j] += arr[i - 1][k] % 10007;
//			}
//			ans[i] += arr[i][j] % 10007;
//		}
//		ans[i] %= 10007;
//	}
//
//	cout << ans[n];
//
//
//}