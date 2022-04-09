//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//long long arr[101][10] = {};
//
//int main()
//{
//	long long ans = 0;
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (i == 1)
//		{
//			for (int j = 1; j <= 9; j++)
//				arr[i][j]++;
//		}
//		else
//		{
//			arr[i][0] = arr[i - 1][1] % 1000000000;
//			arr[i][9] = arr[i - 1][8] % 1000000000;
//
//			for (int j = 1; j <= 8; j++)
//			{
//				arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1])%1000000000;
//			}
//		}
//			
//	}
//	
//	for (int i = 0; i < 10; i++)
//	{
//		ans += (arr[n][i]);
//		ans %= 1000000000;
//	}
//	cout << ans % 1000000000;
//}