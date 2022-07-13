//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int n, m, r;
//vector<int> v[100001];
//bool visited[100001] = { false };
//int arr[100001] = { 0 };
//int cnt = 1;
//
//bool cmp(int a, int b)
//{
//	return a > b;
//}
//
//void dfs(int n)
//{
//	visited[n] = true;
//	arr[n] = cnt;
//	cnt++;
//	for (int i = 0; i < v[n].size(); i++)
//	{
//		if (visited[v[n][i]] == false)
//			dfs(v[n][i]);
//	}
//}
//
//void makeGraph(int a, int b)
//{
//	v[a].push_back(b);
//	v[b].push_back(a);
//}
//
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> n >> m >> r;
//	
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		makeGraph(a, b);
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		sort(v[i].begin(), v[i].end(), cmp);
//	}
//
//	dfs(r);
//
//	for (int i = 1; i <= n; i++)
//	{
//		cout << arr[i] << "\n";
//	}
//}