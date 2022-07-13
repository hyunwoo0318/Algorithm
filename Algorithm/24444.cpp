//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//int n, m, r;
//vector<int> v[100001];
//bool visited[100001];
//int arr[100001];
//int cnt = 1;
//queue<int> q;
//
//bool cmp(int a, int b)
//{
//	return a > b;
//}
//
//
//void makeGraph(int a, int b)
//{
//	v[a].push_back(b);
//	v[b].push_back(a);
//}
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
//	visited[r] = true;
//	arr[r] = cnt;
//	cnt++;
//	q.push(r);
//	while (!q.empty())
//	{
//		int temp = q.front();
//		q.pop();
//		for (int i = 0; i < v[temp].size(); i++)
//		{
//			if (!visited[v[temp][i]])
//			{
//				visited[v[temp][i]] = true;
//				arr[v[temp][i]] = cnt;
//				cnt++;
//				q.push(v[temp][i]);
//			}
//				
//		}
//		
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << arr[i] << "\n";
//	}
//}