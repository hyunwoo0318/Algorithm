//#include<iostream>
//#include<string>
//#include<queue>
//
//using namespace std;
//int arr[1000][1000] = {};
//bool visited[1000][1000];
//int vx[4] = { 1,0,-1,0 };
//int vy[4] = { 0,-1,0,1 };
//queue<pair<int, int> > q;
//bool num1 = false;
//int cnt = 1;
//int m, n;
//
//int findPath()
//{
//	visited[0][0] = true;
//	q.push(make_pair(0, 0));
//	
//	/*if (arr[1][0] == 0 && arr[0][1] == 0)
//	{
//		q.push(make_pair(1, 0));
//		q.push(make_pair(0, 1));
//	}*/
//	while (!q.empty())
//	{
//		int qs = q.size();
//		for (int i = 0; i < qs; i++)
//		{
//			pair<int, int> temp = q.front();
//			q.pop();
//			int x = temp.first;
//			int y = temp.second;
//			if (x == n - 1 && y == m - 1)
//				return cnt;
//			for (int j = 0; j < 4; j++)
//			{
//				int nx = x + vx[j];
//				int ny = y + vy[j];
//				
//				if (nx < 0 || ny < 0 || nx >= n || ny >= m)
//					continue;
//				else if (arr[ny][nx] == 0 && visited[ny][nx] == false)
//				{
//					visited[ny][nx] = true;
//					q.push(make_pair(nx, ny));
//				}
//				else if (arr[ny][nx] == 1 && visited[ny][nx] == false && num1 == false)
//				{
//					visited[ny][nx] = true;
//					num1 = true;
//					q.push(make_pair(nx, ny));
//				}
//			}
//		}
//		cnt++;
//	}
//	return -1;
//}
//
//int main()
//{
//	cin >> m >> n;
//
//	for (int i = 0; i < m; i++)
//	{
//		string s;
//		cin >> s;
//		for (int j = 0; j < n; j++)
//		{
//			arr[i][j] = s[j] - '0';
//		}
//	}
//	int ans =findPath();
//	cout << ans << endl;
//}