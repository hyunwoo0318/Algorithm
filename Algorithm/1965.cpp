//#include<iostream>
//#include<algorithm>
//
//#define INF 200000000
//
//using namespace std;
//
//int arr[401][401];
//int ans[401];
//
//int main()
//{
//	int v, e;
//	int i, j, k;
//	cin >> v >> e;
//
//	for (i = 1; i <= v; i++)
//	{
//		for (j = 1; j <= v; j++)
//		{
//			if (i == j)
//				arr[i][j] = 0;
//			else
//				arr[i][j] = INF;
//		}
//		ans[i] = INF;
//	}
//
//	for (i = 0; i < e; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		arr[a][b] = c;
//	}
//
//	for (k = 1; k <= v; k++)
//	{
//		for (i = 1; i <= v; i++)
//		{
//			for (j = 1; j <= v; j++)
//			{
//				arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
//			}
//		}
//	}
//
//	for (i = 1; i <= v; i++)
//	{
//		for (j = 1; j <= v; j++)
//		{
//			if (i == j)
//				continue;
//			ans[i] = min(ans[i], arr[i][j] + arr[j][i]);
//		}
//	}
//
//	sort(ans, ans + v);
//	if (ans[1] >= INF)
//		cout << -1;
//	else
//		cout << ans[1];
//}