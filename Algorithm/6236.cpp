//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	int n, m;
//	int Max = 0;
//	int res = 0;
//	vector<int> v;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		cin >> a;
//		v.push_back(a);
//		if (Max < a)
//			Max = a;
//		res += a;
//	}
//
//	int low = Max-1;
//	int high = res;
//
//	while (low + 1 < high)
//	{
//		int mid = (low + high) / 2;
//		int sum = 0;
//		int cnt = 0;
//		for (int i = 0; i < v.size(); i++)
//		{			
//			if (v[i] + sum > mid)
//			{
//				sum = 0;
//				cnt++;
//			}
//			sum += v[i];
//		}
//		if (sum != 0)
//			cnt++;
//
//		if (cnt <= m)
//			high = mid;
//		else
//			low = mid;
//	}
//	cout << high;
//}