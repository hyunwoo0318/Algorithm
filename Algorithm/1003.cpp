//#include<iostream>
//#include<vector>
//#include<tuple>
//
//using namespace std;
//int cnt1 = 0;
//int cnt2 = 0;
//
//
//pair<int,int> fibo(int n)
//{
//
//	vector<pair<int, int> > v(40, make_pair(0, 0));
//	for (int i = 0; i <= n; i++)
//	{
//		if (i == 0)
//		{
//			v[i].first = 1;
//			v[i].second = 0;
//		}
//		else if (i == 1)
//		{
//			v[i].first = 0;
//			v[i].second = 1;
//		}
//		else
//		{
//			v[i].first = v[i - 1].first + v[i - 2].first;
//			v[i].second = v[i - 1].second + v[i - 2].second;
//		}
//	}
//	return make_pair(v[n].first, v[n].second);
//}
//
//int main()
//{
//	
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		
//		int a;
//		cin >> a;
//		pair<int,int> ans = fibo(a);
//		cout << ans.first << " " << ans.second << "\n";
//		
//	}
//	
//}