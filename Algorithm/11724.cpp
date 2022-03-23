//#include<iostream>
//#include<vector>
//
//using namespace std;
//vector<int>v[1001];
//bool visit[1001];
//
//void makeGraph(int a, int b)
//{
//	v[a].push_back(b);
//	v[b].push_back(a);
//}
//
//void DFS(int n)
//{
//	visit[n] = true;
//	
//	for (int i = 0; i < v[n].size(); i++)
//	{
//		if (visit[v[n][i]] == false)
//			DFS(v[n][i]);
//	}
//}
//
//int main()
//{
//	int n, m,a,b;
//	int cnt = 0;
//	cin >> n >> m;
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a >> b;
//		makeGraph(a, b);
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (visit[i] == false)
//		{
//	}
//			DFS(i);
//			cnt++;
//		}		
//	cout << cnt;
//}