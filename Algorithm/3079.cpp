//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	vector<int> v;
//	int n, temp;
//	unsigned long long m;
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		v.push_back(temp);
//	}
//
//	sort(v.begin(), v.end());
//
//	unsigned long long lo = 0;
//	unsigned long long hi = v[n - 1] * m;
//	unsigned long long cnt, mid;
//	
//
//	while (lo < hi - 1)
//	{
//		cnt = 0;
//		mid = (lo + hi) / 2;
//		for (int i = 0; i <v.size(); i++)
//		{
//			cnt += mid / v[i];
//			if (cnt >= m)
//				break;				
//		}
//		if (cnt >= m)
//		{
//			hi = mid;
//		}
//		else
//			lo = mid;
//	}
//	cout << hi;
//}