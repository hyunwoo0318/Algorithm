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
////���� 0�̸� ����° ���ڸ� false�� ���� 1�̸� ����° ���ڸ� true�� �ΰ� Ǭ��.
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
//			//�����ϴ� ���� �Ÿ��� �����Ѵ�.
//			if (x == n - 1 && y == m - 1)
//				return cnt;
//			for (int j = 0; j < 4; j++)
//			{
//				int nx = x + vx[j];
//				int ny = y + vy[j];
//
//				if (nx < 0 || ny < 0 || nx >= n || ny >= m)
//					continue;
//				//���� �Ⱥμ��� 1�� ����������
//				else if (arr[ny][nx] == 0 && visited[ny][nx][block] == false)
//				{
//					visited[ny][nx][block] = visited[ny][nx][block] + 1;
//					q.push(make_tuple(nx, ny, block));
//				}
//				else if (arr[ny][nx] == 1 && block == 1)
//				{
//					//���� �μ��� ��Ȳ�̹Ƿ� ������ ���� �μ��� ���ϰ� �ؾ���.
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