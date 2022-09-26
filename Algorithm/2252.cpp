//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//
//using namespace std;
//
//vector<int> v[32001];
//int topo[32001] = {};
//int n, m, i1, i2;
//
//void topologySort()
//{
//	queue<int> q;
//	for (int i = 1; i <= n; i++)
//	{
//		if (topo[i] == 0)
//			q.push(i);
//	}
//	while (!q.empty())
//	{
//		int qs = q.size();
//		for (int i = 0; i < qs; i++)
//		{
//			int x = q.front();
//			cout << x << " ";
//			q.pop();
//			topo[x] = -1;
//			for (int j = 0; j < v[x].size(); j++)
//			{
//				topo[v[x][j]]--;
//				if (topo[v[x][j]] == 0)
//					q.push(v[x][j]);
//			}
//		}
//	}
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
//	for (int i = 0; i < m; i++)
//	{
//		cin >> i1 >> i2;		
//		v[i1].push_back(i2);
//		topo[i2]++;
//	}
//
//	topologySort();
//	
//}