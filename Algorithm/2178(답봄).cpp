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
//		int sz = q.size(); // queue�� ����� üũ
//		for (int z = 0; z < sz; z++)
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
//			/*pair<int, int> temp = q.front();
//			if (visited[temp.first][temp.second] == false)
//			{
//				visited[temp.first][temp.second] = true;
//				q.pop();
//
//				int nx, ny;
//				for (int i = 0; i < 4; i++)
//				{
//					nx = temp.first + dx[i];
//					ny = temp.second + dy[i];
//
//					if (nx < 0 || nx >= m || nx < 0 || ny >= n)
//						continue;
//					else
//					{
//						if (arr[nx][ny] == 1 && visited[nx][ny] == false)
//						{
//							q.push(pair<int, int>(nx, ny));
//
//						}
//						if (nx == (m - 1) && ny == (n - 1))
//							break;
//					}
//
//				}
//				cnt++;
//			}
//			else
//				q.pop();
//
//		}
//		*/
//
//		}
//		cnt++;
//		//bfs������ ������ ���� �����ִ� ���
//		//bfs�� ���� queue�� ����� üũ�ؼ� �� ������ ��ŭ �Ȱ��� bfs�� ������
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