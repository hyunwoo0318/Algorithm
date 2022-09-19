//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int n, input;
//int arr[100][100];
//bool visited[100][100] = {false};
//queue<pair<int, int> > q;
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//bool check(int x, int y, int height)
//{
//	if (x < 0 || y < 0 || x >= n || y >= n)
//		return false;
//	if (visited[y][x] == true)
//		return false;
//	if (arr[y][x] <= height)
//		return false;
//	return true;
//}
//
//void dfs(int x, int y, int height)
//{
//	visited[y][x] = true;
//	for (int i = 0; i < 4; i++)
//	{
//		int xx = dx[i] + x;
//		int yy = dy[i] + y;
//		if (check(xx, yy, height))
//			dfs(xx, yy, height);
//	}
//}
//
////bfs구현시 큐에 넣어줄때 visited체크를 해줘야함 -> 아니면 동일 정점이 계속 들어갈수있음.
//void bfs(int x0, int y0, int height)
//{	
//	q.push({ x0,y0 });
//	while (!q.empty())
//	{
//		pair<int,int> top = q.front();
//		q.pop();
//		int x = top.first;
//		int y = top.second;
//		
//		for (int i = 0; i < 4; i++)
//		{
//			int xx = dx[i] + x;
//			int yy = dy[i] + y;
//			if (check(xx, yy, height))
//			{
//				visited[yy][xx] = true;
//				q.push({ xx,yy });
//			}
//				
//		}
//	}
//}
//
//
//void clear()
//{
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			visited[i][j] = false;
//}
//
//int main()
//{
//	int maxNum = 0;
//	int minNum = 10000;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> input;
//			arr[i][j] = input;
//			if (input > maxNum)
//				maxNum = input;
//			if (minNum > input)
//				minNum = input;
//		}
//	}
//
//	int ans = 0;
//	for (int k = 0;k <= maxNum; k++)
//	{
//		int cnt = 0;
//		clear();
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (visited[i][j] == false && arr[i][j] > k)
//				{
//					cnt++;
//					visited[i][j] = true;
//					bfs(j, i, k);
//				}
//			}
//		}
//		ans = max(cnt, ans);
//	}
//	cout << ans;
//
//
//
//}