//#include<iostream>
//
//using namespace std;
//
////가로 1, 세로 2, 대각선 3
//
//int w[18][18] = {};
//int arr[18][18] = {};
//bool visited[18][18] = { false };
//
//int n, a;
//int ans = 0;
//
//void dfs(int x, int y, int type)
//{
//	if (x == n && y == n)
//		ans++;
//	else
//	{
//		
//		if (type == 1)
//		{
//			if (w[y][x + 1] == 0)
//			{
//				dfs(x + 1, y, 1);				
//			}
//				
//			if (w[y][x + 1] == 0 && w[y + 1][x + 1] == 0 && w[y + 1][x] == 0)
//				
//			{
//				dfs(x + 1, y + 1, 3);
//				
//			}
//				
//		}
//		if (type == 2)
//		{
//			if (w[y + 1][x] == 0)
//				dfs(x, y + 1, 2);
//			if (w[y][x + 1] == 0 && w[y + 1][x + 1] == 0 && w[y + 1][x] == 0)
//				dfs(x + 1, y + 1, 3);
//		}
//		if (type == 3)
//		{
//			if (w[y][x + 1] == 0)
//				dfs(x + 1, y, 1);
//			if (w[y + 1][x] == 0)
//				dfs(x, y + 1, 2);
//			if (w[y][x + 1] == 0 && w[y + 1][x + 1] == 0 && w[y + 1][x] == 0)
//				dfs(x + 1, y + 1, 3);
//		}
//	}
//}
//
//int main()
//{
//	
//	cin >> n;
//
//	for (int i = 0; i <= n; i++)
//	{
//		w[i][0] = w[0][i] = -1;
//		w[i][n + 1] = w[n + 1][i] = -1;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> a;
//			w[i][j] = a;
//		}
//	}
//	
//
//	dfs(2,1, 1);
//	cout << ans;
//}