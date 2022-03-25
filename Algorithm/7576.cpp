//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int cnt = -1;
//int arr[1000][1000] = {};
//bool visited[1000][1000];
//int vx[4] = { 1,-1,0,0 };
//int vy[4] = { 0,0,1,-1 };
//queue<pair<int, int> > q;
//
//int m, n, a;
//
//void tomato()
//{
//	while (!q.empty())
//	{
//		int sz = q.size();
//		for (int k = 0; k < sz; k++)
//		{
//			pair<int, int> temp = q.front();
//			q.pop();
//			int x = temp.first;
//			int y = temp.second;
//			visited[y][x] = true;
//
//			for (int i = 0; i < 4; i++)
//			{
//				int nx = x + vx[i];
//				int ny = y + vy[i];
//
//				if (nx < 0 || ny < 0 || nx >= m || ny >= n)
//					continue;
//				else if (arr[ny][nx] == 0 && visited[ny][nx] == false)
//				{
//					visited[ny][nx] = true;
//					q.push(make_pair(nx, ny));
//				}
//			}
//		}
//		cnt++;
//		
//	}
//	
//}
//
//void sync()
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (visited[i][j] == true)
//			{
//				arr[i][j] = 1;
//			}
//		}
//	}
//}
//
//bool fail()
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (arr[i][j] == 0)
//				return false;
//		}
//	}
//	return true;
//}
//
//
//int main()
//{
//	
//	cin >> m >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &a);
//			
//			arr[i][j] = a;
//		}
//	}			
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if (arr[i][j] == 1)
//				{					
//					q.push(make_pair(j,i));
//				}
//			}
//		}		
//		tomato();
//		sync();
//
//	if (fail() == false)
//		cout << -1 << endl;
//	else
//		cout << cnt << endl;
//}