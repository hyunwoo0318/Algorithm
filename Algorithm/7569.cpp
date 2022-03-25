//#include<iostream>
//#include<queue>
//#include<tuple>
//using namespace std;
//
//int arr[100][100][100] = {};
//bool visited[100][100][100];
//queue<tuple<int, int, int> > q;
//int cnt = -1;
//int m, n, h;
//
//int vx[6] = { 0,0,1, -1,0, 0 };
//int vy[6] = { 0,0,0 ,0,1,-1 };
//int vz[6] = { 1,-1,0 ,0,0,0 };
//
//void tomato()
//{
//	int x, y, z, nx, ny, nz;
//	while (!q.empty())
//	{
//		int qs = q.size();
//		for (int k = 0; k < qs; k++)
//		{
//			tuple<int, int, int> temp = q.front();
//			q.pop();
//			x = get<0>(temp);
//			y = get<1>(temp);
//			z = get<2>(temp);
//			visited[z][y][x] = true;
//			for (int i = 0; i < 6; i++)
//			{
//				nx = x + vx[i];
//				ny = y + vy[i];
//				nz = z + vz[i];
//				if (nx < 0 || ny < 0 || nz < 0 || nx >= m || ny >= n || nz >= h)
//					continue;
//				else if (arr[nz][ny][nx] == 0 && visited[nz][ny][nx] == false)
//				{
//					visited[nz][ny][nx] = true;
//					q.push(make_tuple(nx, ny, nz));					
//				}
//			}
//		}
//		cnt++;
//	}
//}
//
//void sync()
//{
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			for (int k = 0; k < m; k++)
//			{
//				if (visited[i][j][k] == true)
//					arr[i][j][k] = 1;
//			}
//		}
//	}
//}
//
//bool fail()
//{
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			for (int k = 0; k < m; k++)
//			{
//				if (arr[i][j][k] == 0)
//					return true;
//			}
//		}
//	}
//	return false;
//}
//
//
//int main()
//{
//	cin >> m >> n >> h;
//	int a;
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			for (int k = 0; k < m; k++)
//			{
//				cin >> a;
//				arr[i][j][k] = a;
//			}
//		}
//	}
//
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			for (int k = 0; k < m; k++)
//			{
//				if(arr[i][j][k] == 1)
//					q.push(make_tuple(k, j, i));
//			}
//		}
//	}
//	tomato();
//	sync();
//	
//	if (fail() == true)
//		cout << -1 << endl;
//	else
//		cout << cnt << endl;
//}