//#include<iostream>
//
//using namespace std;
//
//int arr[1030][1030] = {};
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		int sum = 0;
//		for (int j = 1; j <= n; j++)
//		{
//			int a;
//			cin >> a;
//			arr[i][j] = a;
//			sum += a;
//		}
//		arr[i][n+1] = sum;
//	}
//	while (m--)
//	{
//		int res = 0;
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//
//		if (x1 == x2)
//		{
//			for (int i = y1; i <= y2; i++)
//			{
//				res += arr[x1][i];
//			}
//		}
//		else if (x2 - x1 == 1)
//		{
//			for (int i = y1; i <=y2; i++)
//			{
//				res += arr[x1 - 1][i];
//			}
//			for (int i = y1-1; i <= y2 - 1; i++)
//			{
//				res += arr[x2 - 1][i];
//			}
//		}
//		else
//		{
//			for (int i = y1 - 1; i < y2-1; i++)
//			{
//				res += arr[x1 - 1][i];
//			}
//			for (int i = y1-1; i <= y2 - 1; i++)
//			{
//				res += arr[x2 - 1][i];
//			}
//			for (int i = x1; i < x2 - 1; i++)
//			{
//				res += arr[i][n];
//			}
//		}
//		cout << res << "\n";
//	}
//
//}