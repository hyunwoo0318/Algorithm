//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int arr[50][50];
//bool visited[50][50] = { false };
//int ans = 0;
//int dx[8] = { 1,1,1,0,0,-1,-1,-1 };
//int dy[8] = { 1,0,-1,1,-1,1,0,-1 };
//int w, h, input;
//
//void clear()
//{
//	for (int i = 0; i < 50; i++)
//	{
//		for (int j = 0; j < 50; j++)
//		{
//			arr[i][j] = 0;
//			visited[i][j] = false;
//		}
//	}
//}
//
//bool check(int x, int y)
//{
//	if (!arr[y][x])
//		return false;
//	if (visited[y][x])
//		return false;
//	if (x < 0 || x >= w || y < 0 || y >= h)
//		return false;
//	return true;
//}
//
//void dfs(int x, int y)
//{
//	visited[y][x] = true;
//	for (int i = 0; i < 8; i++)
//	{
//		if (check(x + dx[i], y + dy[i]))
//		{
//			dfs(x + dx[i], y + dy[i]);
//		}
//	}
//}
//
//int main()
//{
//	while (1)
//	{		
//		clear();
//		ans = 0;
//		cin >> w >> h;
//		if (!w && !h)
//			break;
//
//		for (int i = 0; i < h; i++)
//		{
//			for (int j = 0; j < w; j++)
//			{
//				cin >> input;
//				arr[i][j] = input;
//			}
//		}
//		
//		
//		for (int i = 0; i < h; i++)
//		{
//			for (int j = 0; j < w; j++)
//			{
//				if (check(j,i))
//				{
//					dfs(j, i);
//					ans++;
//				}
//					
//			}
//		}
//		cout << ans << "\n";
//	}
//	
//}