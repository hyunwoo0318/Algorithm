//#include<iostream>
//#include<algorithm>
//#include<queue>
//
//#define MAX 51
//#define INF 987654321
//using namespace std;
//
//int ans = 0;
//char arr[MAX][MAX];
//bool success = false;
//int water[MAX][MAX];
//bool visited[MAX][MAX] = { false };
//pair<int, int> dest;
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//int main()
//{
//	int r, c;
//	queue<pair<int,int> >q;
//	queue<pair<int,int> >an;
//	
//	cin >> r >> c;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			water[i][j] = -1;
//			char c; cin >> c;
//			arr[i][j] = c;
//			if (c == '*')
//				q.push({ j,i });
//			if (c == 'D')
//				dest = { j,i };
//			if (c == 'S')
//				an.push({ j,i });
//		}
//	}
//	
//	int cnt = 0;
//	//물이 이동하는거 먼저 계산
//	while (!q.empty())
//	{
//		int qs = q.size();
//		for (int i = 0; i < qs; i++)
//		{			
//			pair<int, int> cur = q.front();
//			q.pop();
//			visited[cur.second][cur.first] = true;
//
//			for (int i = 0; i < 4; i++)
//			{
//				int xx = cur.first + dx[i];
//				int yy = cur.second + dy[i];
//
//				if (xx < 0 || yy < 0 || xx >= c || yy >= r) continue;
//				if (visited[yy][xx] || arr[yy][xx] == 'X' || arr[yy][xx] == 'D') continue;
//
//				visited[yy][xx] = true;
//				water[yy][xx] = cnt + 1;
//				q.push({ xx,yy });
//			}
//		}
//		cnt++;	
//	}
//	//초기화
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			visited[i][j] = false;
//		}
//	}
//	
//	cnt = 0;
//	
//	while (!an.empty())
//	{
//		int qs = an.size();
//		for (int i = 0; i < qs; i++)
//		{
//			pair<int, int> cur = an.front();
//			visited[cur.second][cur.first] = true;
//			an.pop();
//
//			for (int i = 0; i < 4; i++)
//			{
//				int xx = cur.first + dx[i];
//				int yy = cur.second + dy[i];
//
//				if (xx < 0 || yy < 0 || xx >= c || yy >= r) continue;
//				if (visited[yy][xx] || arr[yy][xx] == 'X') continue;
//				if (water[yy][xx] <= cnt + 1 && water[yy][xx] != -1) continue;
//				//도착
//				if (xx == dest.first && yy == dest.second)
//				{
//					success = true;
//					ans = cnt + 1;
//					break;
//				}
//
//				visited[yy][xx] = true;
//				an.push({ xx,yy });
//			}
//			if (success) break;
//		}
//		cnt++;
//		if (success) break;
//	}
//
//	if (!success)
//		cout << "KAKTUS";
//	else
//		cout << ans;	
//}