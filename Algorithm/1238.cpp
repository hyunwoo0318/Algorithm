//#include<iostream>
//#include<vector>
//#include<queue>
//
//#define maxNum 987654321
//
//using namespace std;
//
//int arr[1001][1001];
//int f[1001];
//int d[1001];
//int ans[1001];
//int n, m, i1, i2, input,x;
//
//vector<pair<int,int> > v[1001];
//
//
//struct cmp {
//	bool operator()(pair<int, int> p1, pair<int, int> p2)
//	{
//		return p1.second > p2.second;
//	}
//};
//
//priority_queue < pair<int, int>, vector<pair<int, int> >, cmp> pq;
//
//void floyd(int a)
//{
//	for (int k = 1; k <= n; k++)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				if (i == j)
//					continue;
//				if (arr[i][j] > arr[i][k] + arr[k][j])
//					arr[i][j] = arr[i][k] + arr[k][j];
//			}
//			
//		}
//	}
//}
//
////void dijikstra(int a)
////{
////	bool visited[1001] = { false };
////	visited[a] = true;
////	d[a] = 0;
////
////	while (!pq.empty())
////	{
////		int pos = pq.top().first;
////		pq.pop();
////		if (visited[pos])
////			continue;
////
////		visited[pos] = true;
////		
////		for (int i = 1; i <= n; i++)
////		{
////			if (visited[i] == false && d[pos] + arr[pos][i] < d[i])
////			{
////				d[i] = d[pos] + arr[pos][i];
////				pq.push({i, d[i]});
////			}				
////		}
////
////		
////	}
////
////}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> n >> m >> x;
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i == j)
//				arr[i][j] = 0;
//			else
//				arr[i][j] = maxNum;
//		}
//			
//	}
//	
//	for (int i = 0; i < m; i++)
//	{
//		cin >> i1 >> i2 >> input;
//		arr[i1][i2] =input;
//		v[i1].push_back({i2,input});
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		d[i] = arr[x][i];
//		if (d[i] != maxNum)
//			pq.push({ i,d[i] });
//		f[i] = arr[i][x];
//	}
//
//	//dijikstra(x);
//	floyd(x);
//	
//
//	int res = -1;
//	for (int i = 1; i <= n; i++)
//	{
//		ans[i] = arr[i][x] + arr[x][i];
//		if (res < ans[i])
//			res = ans[i];
//	}
//	cout << res;
//}