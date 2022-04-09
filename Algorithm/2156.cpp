//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//int n;
//int arr[10001][2] = {};
//
//int findMax(int a)
//{
//	int res = 0;
//	for (int i = 0; i <= a - 2; i++)
//	{
//		int maxi = max(arr[i][0], arr[i][1]);
//		if (res < maxi)
//			res = maxi;
//	}
//	return res;
//}
//
//int main()
//{
//	
//	int ans = 0;
//	cin >> n;
//
//	arr[0][0] = arr[0][1] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int a;
//		cin >> a;
//		arr[i][0] = arr[i][1] = a;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (i == 1)
//		{
//			continue;
//		}
//		else
//		{
//			arr[i][0] += findMax(i);
//			
//			arr[i][1] += arr[i - 1][0];
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int maxNum = max(arr[i][0], arr[i][1]);
//		if (maxNum > ans)
//			ans = maxNum;
//	}
//	cout << ans;
//}