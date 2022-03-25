//#include<iostream>
//#include<vector>
//#include<string>
//#include<queue>
//
//using namespace std;
//
//int m, n;
//int arr[101][101] = {};
//bool visited[101][101];
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//queue<pair<int, int> > q;
//int cnt = 1;
//
//int Bfs(int x, int y)
//{
//	visited[0][0] = true;
//	q.push(make_pair(0, 0));
//
//	while (q.empty() == false)
//	{
//		int sz = q.size(); // queue의 사이즈를 체크
//		for (int z = 0; z < sz; z++) // q의 사이즈는 계속 변하므로 변수로 두고 해야함.
//		{
//			int a = q.front().first;
//			int b = q.front().second;
//			q.pop();
//
//			if (a == m - 1 && b == n - 1) return cnt;
//			for (int i = 0; i < 4; i++)
//			{
//				int nx = a + dx[i];
//				int ny = b + dy[i];
//
//				if (nx < 0 || nx >= m || ny < 0 || ny >= n)
//					continue;
//				else
//				{
//					if (arr[nx][ny] == 1 && visited[nx][ny] == false)
//					{
//						visited[nx][ny] = true;
//						q.push(make_pair(nx, ny));
//					}
//				}
//			}
//			
//		}
//		cnt++;
//		//bfs에서의 깊이의 수를 세워주는 방식
//		//bfs를 도는 queue의 사이즈를 체크해서 그 사이즈 만큼 똑같은 bfs를 돌고나면
//	}
//	return -1;
//}
//
//int main()
//{
//	
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
//	
//	int res = Bfs(0, 0);
//	if (res == -1)
//		return 0;
//	else
//		cout << res << endl;
//}