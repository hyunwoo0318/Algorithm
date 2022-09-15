//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	vector<int> v;
//	int m, n, l, temp;
//	int ans = 0;
//	cin >> m >> n >> l;
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> temp;
//		v.push_back(temp);
//	}
//
//	sort(v.begin(), v.end());
//
//	int x, y;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x >> y;
//		
//		int x1 = lower_bound(v.begin(), v.end(), x) - v.begin();
//		if (x1 == m)
//		{
//			if (abs(v[x1 - 1] - x) + y <= l)
//				ans++;
//		}
//		else if (x1 == 0 )
//		{
//			if (abs(v[x1] - x) + y <= l)
//				ans++;
//		}
//		else if (abs(v[x1] - x) + y <= l)
//			ans++;
//		else if (abs(v[x1 - 1] - x) + y <= l)
//			ans++;		
//	}
//	cout << ans;
//}