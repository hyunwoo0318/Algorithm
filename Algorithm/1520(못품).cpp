//#include<iostream>
//
//using namespace std;
//
//int m, n, a;
//
//int arr[501][501] = {};
//int ans[501][501] = {};
//int cnt[501][501] = {};
// 
//
//int xx[4] = { 0,0,-1,1 };
//int yy[4] = { 1,-1,0,0 };
//
//void findPath()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			for (int k = 0; k < 4; k++)
//			{
//				int nx = j + xx[k];
//				int ny = i + yy[k];
//				if (nx < 1 || ny < 1 || nx > m || ny > n)
//					continue;
//				else if(arr[ny][nx] < arr[i][j])
//					cnt[ny][nx]++;
//			}
//		}
//	}
//}
//
//void dfs(int x, int y)
//{
//	if (x == m && y == n)
//	{
//	}
//	else {
//		for (int k = 0; k < 4; k++)
//		{
//			int nx = x + xx[k];
//			int ny = y + yy[k];
//			if (nx < 1 || ny < 1 || nx > m || ny > n)
//				continue;
//			else
//			{
//				if (arr[ny][nx] < arr[y][x] && cnt[ny][nx] != 0)
//				{
//					cnt[ny][nx]--;
//					if (ans[ny][nx] == -1)
//					{
//						ans[ny][nx] = ans[y][x];
//
//					}
//
//					else
//						ans[ny][nx] += ans[y][x];
//					dfs(nx, ny);
//				}
//			}
//		}
//	}
//	
//}
//
//int main()
//{
//	
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{			
//			cin >> a;
//			arr[i][j] = a;
//			ans[i][j] = -1;
//		}
//	}
//
//	findPath();
//
//	ans[1][1] = 1;
//	dfs(1, 1);
//	if (ans[n][m] == -1)
//		cout << 0;
//	else
//		cout << ans[n][m];
//}