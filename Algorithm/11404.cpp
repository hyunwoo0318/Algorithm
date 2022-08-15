//#include<iostream>
//
//#define INF 200000000
//
//using namespace std;
//
//
//int arr[101][101] = {};
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//		{
//			if (i == j)
//				arr[i][j] = 0;
//			else
//				arr[i][j] = INF;
//		}
//			
//
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		if (arr[a][b] == INF)
//			arr[a][b] = c;
//		else
//			arr[a][b] = min(arr[a][b], c);
//
//	}
//	//k == 거쳐가는 정점
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
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (arr[i][j] >= INF)
//				cout << "0 ";
//			else
//				cout << arr[i][j] << " ";
//		}
//		cout << "\n";
//	}
//
//}