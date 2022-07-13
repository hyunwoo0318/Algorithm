//#include<iostream>
//#include<deque>
//#include<string>
//
//using namespace std;
//
//int arr[100][100] = {};
//int cost[100][100] = {};
//
//int main()
//{
//	string s;
//	int n, m;
//	cin >> n >> m;
//
//	deque <pair<int,int> > dq;
//	int ans = n + m;	
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> s;
//		for (int j = 0; j < n; j++)
//		{
//			arr[i][j] = s[j]-'0';
//			cost[i][j] = ans;
//		}
//			
//	}
//
//	dq.push_front({ 0,0 });
//	cost[0][0] = 0;
//
//	while (!dq.empty())
//	{
//		int x = dq.front().first;
//		int y = dq.front().second;
//		dq.pop_front();
//
//		if (x < n-1)
//		{
//			if (arr[y][x + 1] == 1 && cost[y][x] + 1 < cost[y][x+1])
//			{
//				cost[y][x + 1] = cost[y][x] + 1;
//				dq.push_back({ x + 1,y });
//			}
//			else if (arr[y][x + 1] == 0 && cost[y][x] < cost[y][x + 1])
//			{
//				cost[y][x + 1] = cost[y][x];
//				dq.push_back({ x + 1,y });
//			}
//		}
//		if (x > 0)
//		{
//			if (arr[y][x - 1] == 1 && cost[y][x] + 1 < cost[y][x - 1])
//			{
//				cost[y][x - 1] = cost[y][x] + 1;
//				dq.push_back({ x - 1,y });
//			}
//			else if (arr[y][x - 1] == 0 && cost[y][x] < cost[y][x - 1])
//			{
//				cost[y][x - 1] = cost[y][x];
//				dq.push_back({ x - 1,y });
//			}
//		}
//		if (y > 0)
//		{
//			if (arr[y-1][x] == 1 && cost[y][x] + 1 < cost[y-1][x])
//			{
//				cost[y-1][x] = cost[y][x] + 1;
//				dq.push_back({ x,y-1 });
//			}
//			else if (arr[y-1][x] == 0 && cost[y][x] < cost[y-1][x])
//			{
//				cost[y-1][x] = cost[y][x];
//				dq.push_back({ x,y-1 });
//			}
//		}
//		if (y < m - 1)
//		{
//			if (arr[y +1][x] == 1 && cost[y][x] + 1 < cost[y + 1][x])
//			{
//				cost[y + 1][x] = cost[y][x] + 1;
//				dq.push_back({ x,y + 1 });
//			}
//			else if (arr[y + 1][x] == 0 && cost[y][x] < cost[y + 1][x])
//			{
//				cost[y + 1][x] = cost[y][x];
//				dq.push_back({ x,y + 1 });
//			}
//		}		
//	}
//	cout << cost[m - 1][n - 1];
//
//
//
//}