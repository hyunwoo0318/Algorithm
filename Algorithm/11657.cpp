//#include<iostream>
//#include<vector>
//
//#define maxNum 2000000000
//
//using namespace std;
//
////idx -> ������, �� {������ , ����ġ��}
//vector<pair<int, int> > v[501];
//long long ans[501];
//
//int n, m;
//
//void Bellman_Ford()
//{
//	//������ ����
//	ans[1] = 0;
//
//	//�����ǰ��� -1�� ��ŭ �ݺ���.
//	for (int cnt = 0; cnt < n - 1; cnt++)
//	{
//		//�Ź� ��� ������ üũ
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 0; j < v[i].size(); j++)
//			{
//				int dest = v[i][j].first;
//				int cost = v[i][j].second;
//
//				//������ ����Ǿ����� ���� ������ Ȯ����������.
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