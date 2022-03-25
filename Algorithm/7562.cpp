//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int arr[301][301] = {};
//bool visited[301][301];
//int vx[8] = { 1,1, -1,-1, 2,2,-2,-2 };
//int vy[8] = { 2, -2, 2, -2, 1, -1, 1, -1 };
//int cnt = 0;
//queue<pair<int, int> > q;
//
//int knight(pair<int,int> st, pair<int, int> des, int l)
//{
//	int x = st.first;
//	int y = st.second;
//	int dx = des.first;
//	int dy = des.second;
//	visited[y][x] = true;
//	q.push(make_pair(x, y));
//
//	while (!q.empty())
//	{
//		int qs = q.size();
//		while (qs--)
//		{
//			x = q.front().first;
//			y = q.front().second;
//			q.pop();
//
//			if (x == dx && y == dy)
//				return cnt;
//			for (int i = 0; i < 8; i++)
//			{
//				int nx = x + vx[i];
//				int ny = y + vy[i];
//
//				if (nx < 0 || ny < 0 || nx >= l || ny >= l)
//					continue;
//				else if (visited[ny][nx] == false)
//				{
//					visited[ny][nx] = true;
//					q.push(make_pair(nx, ny));
//				}
//			}
//		}
//		cnt++;
//	}
//}
//
//void reset()
//{
//	for (int i = 0; i < 301; i++)
//	{
//		for (int j = 0; j < 301; j++)
//			visited[i][j] = false;
//	}
//	cnt = 0;
//	while (!q.empty())
//		q.pop();
//}
//
//int main()
//{
//	int num, l;
//
//	cin >> num;
//
//	while (num--)
//	{		
//		cin >> l;
//		pair<int, int> st, des;
//		cin >> st.first >> st.second >> des.first >> des.second;
//				
//		cout << knight(st, des, l) << endl;
//		reset();
//	}
//
//
//}