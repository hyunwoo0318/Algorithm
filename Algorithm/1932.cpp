//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//vector<int> v[600];
//int arr[600][600] = {};
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		int cnt = i + 1;
//		while(cnt--)
//		{
//			int a;
//			cin >> a;
//			v[i].push_back(a);
//		}		
//	}
//
//	for (int i = 1; i < n; i++)
//	{
//		arr[0][0] = v[0][0];
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = arr[i - 1][0] + v[i][j];
//			}
//			else if (j == i)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + v[i][j];
//			}
//			else
//			{
//				arr[i][j] = max(arr[i - 1][j], arr[i - 1][j - 1]) + v[i][j];
//			}
//		}
//	}
//
//	int ans = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (ans < arr[n - 1][i])
//			ans = arr[n - 1][i];
//	}
//
//	cout << ans;
//}