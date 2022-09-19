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
//	cout.tie(NULL);
//
//	vector<int>v;
//	int m, n , input;
//	cin >> m >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> input;
//		v.push_back(input);
//	}
//
//	sort(v.begin(), v.end());
//
//	////1명인경우
//	//if (m == 1)
//	//{
//	//	cout << v[n - 1];
//	//	return 0;
//	//}
//
//
//	int lo = 0;
//	int hi = v[n-1]+1;
//	int cnt = 0;
//	
//	while (lo < hi-1)
//	{
//		cnt = 0;
//		int mid = (lo + hi) / 2;
//		for (int i = 0; i < n; i++)
//		{
//			cnt += v[i] / mid;
//			if (cnt >= m)
//				break;
//		}
//		if (cnt >= m)
//		{
//			lo = mid;
//		}
//		else
//		{
//			hi = mid;
//		}
//	}
//	cout << lo;
//}