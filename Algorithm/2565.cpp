//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//vector<pair<int, int> > vec;
//vector<pair<int,int> > v;
//
//bool cmp(pair<int, int> a, pair<int, int> b)
//{
//	return a.first < b.first;
//}
//
//int main()
//{
//	int n;
//	cin >> n;	
//	int ans = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		int a,b;
//		cin >> a >> b;
//		vec.push_back(make_pair(a, b));
//	}
//
//	sort(vec.begin(), vec.end(), cmp);
//
//	for (int i = 0; i < n; i++)
//	{
//		v.push_back(make_pair(vec[i].second, 1));
//	}
//
//	for (int k = 0; k <n; k++)
//	{
//		for (int i = 0; i < k; i++)
//		{
//			if (v[i].first < v[k].first)
//				v[k].second = max(v[k].second, v[i].second + 1);
//		}
//		if (ans < v[k].second)
//			ans = v[k].second;
//	}
//	cout << n-ans;
//
//}