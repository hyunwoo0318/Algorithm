//#include<iostream>
//#include<vector>
//
//#define maxNum 2000000000
//
//using namespace std;
//
////idx -> 시작점, 값 {도착점 , 가중치값}
//vector<pair<int, int> > v[501];
//long long ans[501];
//
//int n, m;
//
//void Bellman_Ford()
//{
//	//시작점 설정
//	ans[1] = 0;
//
//	//정점의개수 -1번 만큼 반복함.
//	for (int cnt = 0; cnt < n - 1; cnt++)
//	{
//		//매번 모든 간선을 체크
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 0; j < v[i].size(); j++)
//			{
//				int dest = v[i][j].first;
//				int cost = v[i][j].second;
//
//				//간선에 연결되어있지 않은 정점은 확인하지않음.
//				if (ans[i] == maxNum)
//					continue;
//
//				ans[dest] = min(ans[dest], ans[i] + cost);
//			}
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j < v[i].size(); j++)
//		{
//			int dest = v[i][j].first;
//			int cost = v[i][j].second;
//
//			if (ans[i] == maxNum)
//				continue;
//
//			if (ans[dest] > ans[i] + cost)
//			{
//				cout << -1;
//				return;
//			}
//		}
//	}
//
//	for (int i = 2; i <= n; i++)
//	{
//		if (ans[i] >= maxNum)
//			cout << "-1\n";
//		else
//			cout << ans[i] << "\n";
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
//	for (int i = 1; i <= n; i++)
//	{
//		ans[i] = maxNum;
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		v[a].push_back({b,c});
//	}
//
//	Bellman_Ford();
//}