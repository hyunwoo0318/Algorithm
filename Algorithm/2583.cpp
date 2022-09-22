//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//
//using namespace std;
//
//int arr[101][101];
//bool visited[101][101] = { false };
//int m, n, k;
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//bool check(int x, int y)
//{
//	if (x < 0 || y < 0 || x >= n || y >= m)
//		return false;
//	if (visited[y][x] == true)
//		return false;
//	if (arr[y][x] == 1)
//		return false;
//	return true;
//
//}
//
//int bfs(int x, int y)
//{
//	int area = 1;
//	queue<pair<int,int> > q;
//	q.push({ x,y });
//	while (!q.empty())
//	{
//		int a = q.front().first;
//		int b = q.front().second;
//		q.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int xx = a + dx[i];
//			int yy = b + dy[i];
//			if (check(xx, yy))
//			{
//				visited[yy][xx] = true;
//				q.push({ xx,yy });
//				area++;
//			}
//		}
//	}
//	return area;
//	
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	vector<int> v;
//
//	
//	cin >> m >> n >> k;
//
//	int x1, x2, y1, y2;
//
//	for (int cnt = 0; cnt < k; cnt++)
//	{
//		cin >> x1 >> y1 >> x2 >> y2;
//
//		for (int i = y1; i < y2; i++)
//		{
//			for (int j = x1; j < x2; j++)
//			{
//				arr[i][j] = 1;
//			}
//		}
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (visited[i][j] == false && arr[i][j] == 0)
//			{
//				visited[i][j] = true;
//				int area  = bfs(j, i);
//				v.push_back(area);
//			}
//				
//		}
//	}
//	sort(v.begin(), v.end());
//	cout << v.size() << "\n";
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//
//}