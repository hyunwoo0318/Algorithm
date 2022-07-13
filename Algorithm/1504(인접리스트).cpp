//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//
//#define max_int 500000000
//
//using namespace std;
//
//int n, e;
//priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//vector<pair<int, int> > v[801];
//bool visited[801];
//
//int d[801] = {};
//
//void clear(int a)
//{
//	fill_n(d, 801, max_int);
//		
//		for (int j = 0; j < v[a].size(); j++)
//		{
//			d[v[a][j].first] = v[a][j].second;
//			pq.push(make_pair(v[a][j].first, v[a][j].second));
//		}
//		
//		/*for (int i = 1; i <= n; i++)
//			visited[i] = false;*/
//
//		d[a] = 0;
//		//visited[a] = true;
//	
//}
//
//void dijikstra()
//{
//	while (!pq.empty())
//	{
//		int node = pq.top().first;
//		int cost = pq.top().second;
//		pq.pop();
//		/*if (visited[node])
//			continue;		*/
//		
//		
//			//visited[node] = true;
//			for (int i = 0; i < v[node].size(); i++)
//			{
//				int updateNode = v[node][i].first;
//				int updateCost = v[node][i].second;
//				if (d[updateNode] > d[node] + updateCost)
//					d[updateNode] = d[node] + updateCost;
//			}
//	}
//	
//}
//
//int main()
//{
//	cin >> n >> e;
//
//	for (int i = 0; i < e; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		v[a].push_back({ b,c });
//		v[b].push_back({ a,c });		
//	}
//	int v1, v2;
//	cin >> v1 >> v2;
//
//	clear(1);
//	dijikstra();
//	int v1_1 = d[v1];
//	int v2_1 = d[v2];
//	clear(v1);
//	dijikstra();
//	int v1_v2 = d[v2];
//	int v1_n = d[n];
//	clear(v2);
//	dijikstra();
//	int v2_n = d[n];
//
//	int min1 = v1_1 + v1_v2 + v2_n;
//	int min2 = v2_1 + v1_v2 + v1_n;
//	int ans = min(min1, min2);
//	if (ans >= max_int)
//		cout << -1;
//	else
//		cout << ans;
//	
//
//	
//}
//
