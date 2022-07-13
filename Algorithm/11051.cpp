//#include<iostream>
//
//using namespace std;
//
//long long arr[1001][1001] = {};
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//
//	for (int i = 0; i <= n; i++)
//	{
//		for (int j = 0; j <= k; j++)
//		{
//			if (j == i || j == 0)
//				arr[i][j] = 1;
//			else if (j == 1)
//				arr[i][j] = i;
//			else {
//				arr[i][j] = (arr[i - 1][j - 1] % 10007) + (arr[i - 1][j] % 10007);
//			}
//		}
//	}
//	cout << arr[n][k] % 10007;
//}