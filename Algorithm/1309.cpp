//#include<iostream>
//
//using namespace std;
//
//int arr[100001][3] = {};
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	for (int i = 0; i <= 2; i++)
//		arr[1][i] = 1;
//
//	for (int i = 2; i <= n; i++)
//	{
//		for (int j = 0; j <= 2; j++)
//		{			
//			if (j == 0)
//				arr[i][j] = arr[i - 1][0] % 9901 + arr[i - 1][1] % 9901 + arr[i - 1][2] % 9901;
//			if (j == 1)			
//				arr[i][j] = arr[i - 1][0] % 9901 + arr[i - 1][2] % 9901;			
//			if (j == 2)
//				arr[i][j] = arr[i - 1][0] % 9901 + arr[i - 1][1] % 9901;
//			arr[i][j] %= 9901;
//		}		
//	}
//
//	int ans = arr[n][0] + arr[n][1] + arr[n][2];
//	cout << ans % 9901;
//}