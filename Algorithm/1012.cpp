//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int m, n, k;
//int arr[50][50] = {};
//bool visited[50][50];
//int vx[4] = { 1,-1,0, 0 };
//int vy[4] = { 0, 0, 1, -1};
//
////dfs를 여러번 돌리는 상황에서는 꼭 전역으로 선언한 배열은
////모두 초기화 해줘야한다.
//
//void DFS(int x, int y)
//{
//	visited[x][y] = true;
//	int nx, ny;
//	for (int i = 0; i < 4; i++)
//	{
//		nx = x + vx[i];
//		ny = y + vy[i];
//
//		if (nx < 0 || nx>=m  || ny < 0 ||ny>=n)
//			continue;
//		else
//		{
//			if (arr[nx][ny] == 1 && visited[nx][ny] == false)
//				DFS(nx, ny);
//		}
//	}
//
//}
//
//int main()
//{
//	int num;
//	cin >> num;
//
//	for (int i1 = 0; i1 < num; i1++)
//	{
//		for (int i = 0; i < 50; i++)
//		{
//			for (int j = 0; j < 50; j++)
//			{
//				visited[i][j] = false;
//				arr[i][j] = 0;
//			}
//				
//		}
//		
//		cin >> m >> n >> k;
//		for (int j1 = 0; j1 < k; j1++)
//		{
//			int x, y;
//			cin >> x >> y;
//			arr[y][x] = 1;
//		}
//		
//		int cnt = 0;
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if ((arr[i][j] == 1) && (visited[i][j] == false))
//				{
//					DFS(i,j);
//					cnt++;i
//				}
//			}
//		}
//		cout << cnt << endl;
//	}
//}