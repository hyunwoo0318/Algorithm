//#include<iostream>
//#include<string>
//#include<queue>
//#include<tuple>
//
//using namespace std;
//int arr[1000][1000] = {};
//int visited[1000][1000][2];
//int vx[4] = { 1,0,-1,0 };
//int vy[4] = { 0,-1,0,1 };
////값이 0이면 세번째 인자를 false로 값이 1이면 세변째 인자를 true로 두고 푼다.
//queue<tuple<int, int, int> > q;
//
//int cnt = 1;
//int m, n;
//
//int findPath()
//{
//	visited[0][0][1] = 1;
//	q.push(make_tuple(0, 0, 1));
//
//	while (!q.empty())
//	{
//		int qs = q.size();
//		for (int i = 0; i < qs; i++)
//		{
//			tuple<int, int, int> temp = q.front();
//			q.pop();
//			int x = get<0>(temp);
//			int y = get<1>(temp);
//			int block = get<2>(temp);
//
//			//도착하는 순간 거리를 리턴한다.
//			if (x == n - 1 && y == m - 1)
//				return cnt;
//			for (int j = 0; j < 4; j++)
//			{
//				int nx = x + vx[j];
//				int ny = y + vy[j];
//
//				if (nx < 0 || ny < 0 || nx >= n || ny >= m)
//					continue;
//				//아직 안부수고 1을 만나지않음
//				else if (arr[ny][nx] == 0 && visited[ny][nx][block] == false)
//				{
//					visited[ny][nx][block] = visited[ny][nx][block] + 1;
//					q.push(make_tuple(nx, ny, block));
//				}
//				else if (arr[ny][nx] == 1 && block == 1)
//				{
//					//벽을 부수는 상황이므로 앞으로 문을 부수지 못하게 해야함.
//					visited[ny][nx][block - 1] = visited[y][x][block] + 1;
//					q.push(make_tuple(nx, ny, block - 1));
//				}
//			}
//		}
//		cnt++;
//
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
//	int ans = findPath();
//	cout << ans << endl;
//}