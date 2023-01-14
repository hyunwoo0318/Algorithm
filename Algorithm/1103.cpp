////1103 게임
//#include<iostream>
//#include<algorithm>
//#include<string>
//
//#define MAX 51
//#define INF -987654321
//using namespace std;
//
//int arr[MAX][MAX];
////해당 좌표에서 몇번 움직일수 있는지 알려줌
//int d[MAX][MAX];
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//bool visited[MAX][MAX] = { false };
//
//int n, m;
//
//
//int dfs(int x, int y)
//{
//	if (d[y][x]) return d[y][x];
//	int c = arr[y][x];
//	visited[y][x] = true;
//	int ret = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		int xx = x + dx[i] * c;
//		int yy = y + dy[i] * c;
//
//		if (xx < 0 || yy < 0 || xx >= m || yy >= n) continue;
//		if (arr[yy][xx] == -1) continue;		
//
//		// 무한루프 체크
//		if (visited[yy][xx]) return -2;	
//
//		//정상		
//		int ret = dfs(xx, yy);
//		if (ret == -2) return -2;
//		d[y][x] = max(d[y][x], ret + 1);
//	}
//	visited[y][x] = false;
//	return d[y][x];
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		string s;
//		cin >> s;
//		for (int j = 0; j < m; j++)
//		{
//			if (s[j] == 'H')
//				arr[i][j] = -1;
//			else
//				arr[i][j] = s[j]-'0';
//			
//		}
//	}
//
//	
//	int ans = dfs(0,0);
//	cout << ans+ 1;
//
//}