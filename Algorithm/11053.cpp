//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//vector<pair<int,int>> v;
//
//a이하의 idx에서 제일 큰 값을 찾는것.
//int findMax(int a)
//{
//	int res = 0;
//	for (int i = 1; i < a; i++)
//	{
//		if (res < v[i].second && v[a].first > v[i].first)
//			res = v[i].second;
//	}
//	return res;
//}
//
//int main()
//{
//	int ans = 0;
//	int n;
//	cin >> n;	
//	v.push_back(make_pair(0,0));
//
//	for (int i = 1; i <= n; i++)
//	{
//		int a;
//		cin >> a;
//		v.push_back(make_pair(a,1));
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (i == 1)
//		{
//			v[1].second = 1;
//		}
//		else
//		{
//			for (int k = 1; k < i; k++)
//			{
//				if (v[k].first < v[i].first)
//					자기자신과 그전꺼와 자기를 이은거 중에서 더 큰놈을 고르기.
//					v[i].second = max(v[i].second, v[k].second + 1);
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (ans < v[i].second)
//			ans = v[i].second;
//	}
//	cout << ans;
//}