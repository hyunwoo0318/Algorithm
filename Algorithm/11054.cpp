//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//vector<pair<int, int> > v;
//vector<int>res;
//int temp1 = 0;
//int temp2 = 0;
//
//void clear()
//{
//	for (int i = 0; i < v.size(); i++)
//	{
//		v[i].second = 1;
//		temp1 = 0;
//		temp2 = 0;
//	}
//}
//
//int main()
//{
//	int n;	
//	int ans = 0;
//	cin >> n;
//
//	v.push_back(make_pair(0, 0));
//
//	for (int i = 1; i <= n; i++)
//	{
//		int a;
//		cin >> a;
//		v.push_back(make_pair(a,1));
//	}
//	
//	for (int k = 1; k <= n; k++)
//	{
//		for (int i = 1; i < k; i++)
//		{
//			if (v[i] >= v[k])
//				continue;
//			for (int j = 1; j < i; j++)
//			{
//				if (v[j].first < v[i].first)
//				{
//					v[i].second = max(v[i].second, v[j].second + 1);
//				}
//			}
//			if (v[i].second > temp1)
//				temp1 = v[i].second;
//		}
//		for (int i = k+1; i <=n; i++)
//		{
//			if (v[i] >= v[k])
//				continue;
//			for (int j = k+1; j < i; j++)
//			{
//				if (v[j].first > v[i].first && v[j]<v[k])
//				{
//					v[i].second = max(v[i].second, v[j].second + 1);
//				}
//			}
//			if (v[i].second > temp2)
//				temp2 = v[i].second;
//		}
//		int a = temp1 + temp2 + 1;
//		if (a > ans)
//			ans = a;
//		clear();
//		
//	}
//
//	cout << ans;
//}