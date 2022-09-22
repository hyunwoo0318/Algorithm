//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//bool visited[100001] = { false };
//int ans[100001];
//vector<int> v[100001];
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n;	
//	queue<int> q;
//	cin >> n;
//
//	visited[1] = true;
//	q.push(1);
//
//
//	for (int i = 0; i < n-1; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//
//	while (!q.empty())
//	{
//		int x = q.front();
//		q.pop();
//		for (int i = 0; i < v[x].size(); i++)
//		{
//			int val = v[x][i];
//			if (!visited[val])
//			{
//				visited[val] = true;
//				q.push(val);
//				ans[val] = x;
//			}
//		}
//	}	
//
//
//	for (int i = 2; i <= n; i++)
//	{
//		cout << ans[i] << "\n";
//	}
//}