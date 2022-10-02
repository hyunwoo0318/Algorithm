//#include<iostream>
//
//using namespace std;
//
//int arr[501][501] = {};
//int ans = 0;
//int m, n, input, i,j;
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//bool check(int x, int y, int val)
//{
//	if (x < 0 || y < 0 || x >= n || y >= m || val <= arr[y][x])
//		return false;
//	return true;
//}
//
//void dfs(int x, int y)
//{
//	if (x == n - 1 && y == m - 1)
//		ans++;
//	else
//	{		
//		int val = arr[y][x];
//		for (int i = 0; i < 4; i++)
//		{
//			int xx = x + dx[i];
//			int yy = y + dy[i];
//			if (check(xx, yy, val))
//			{
//				dfs(xx, yy);				
//			}			
//		}
//	}	
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	
//	cin >> m >> n;
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			cin >> input;
//			arr[i][j] = input;
//		}
//	}
//
//	dfs(0, 0);
//	cout << ans;
//}