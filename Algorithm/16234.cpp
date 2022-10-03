//#include<iostream>
//#include<vector>
//#include<queue>
//#include<cstring>
//
//using namespace std;
//
//int arr[50][50];
//int n,l ,r, input;
//bool visited[50][50] = { false };
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//void clear()
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			visited[i][j] = false;
//		}
//	}
//}
//
//bool checkBfs(int x, int y, int val)
//{
//	if (x < 0 || y < 0 || x >= n || y >= n)
//		return false;
//	if (visited[y][x])
//		return false;
//	if (abs(val - arr[y][x]) < l || abs(val - arr[y][x]) > r)
//		return false;
//	return true;
//}
//
//void bfs(int x, int y, bool& checkMove)
//{
//	queue<pair<int,int> > q;
//	vector<pair<int, int> > v;
//	int xx, yy;
//	int popu = arr[y][x];
//	v.push_back({ x,y });
//
//	visited[y][x] = true;
//	q.push({ x,y });
//
//	while (!q.empty())
//	{
//		x = q.front().first;
//		y = q.front().second;
//		q.pop();
//		
//		for (int i = 0; i < 4; i++)
//		{
//			xx = x + dx[i];
//			yy = y + dy[i];
//			if (checkBfs(xx, yy,arr[y][x]))
//			{
//				q.push({ xx,yy });
//				visited[yy][xx] = true;
//				checkMove = true;
//				popu += arr[yy][xx];
//				v.push_back({ xx,yy });
//			}
//				
//		}
//	}
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		arr[v[i].second][v[i].first] = popu / v.size();
//	}
//
//}
//
//int main()
//{
//	int ans = 0;
//	cin >> n >> l >> r;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> input;
//			arr[i][j] = input;
//		}
//	}
//
//	while (1)
//	{
//		clear();
//		bool checkMove = false;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if(!visited[i][j])
//					bfs(j,i,checkMove);
//			}
//		}
//		if (checkMove == false)
//			break;
//		ans++;
//	}
//	cout << ans;
//	
//}