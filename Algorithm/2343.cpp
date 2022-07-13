//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int n, m;
//int sum = 0;
//int Max = 0;
//vector<int> v;
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		cin >> a;
//		v.push_back(a);
//
//		sum += a;
//		if (Max < a)
//			Max = a;
//	}
//
//	int low = Max-1;
//	int high = sum;
//
//	while (low + 1 < high)
//	{
//		int cnt = 0;
//		int temp = 0;
//		int mid = (low + high) / 2;
//
//		for (int i = 0; i < v.size(); i++)
//		{
//			if (temp + v[i] > mid)
//			{
//				temp = 0;
//				cnt++;
//			}
//			temp += v[i];
//		}
//		if (temp != 0)
//			cnt++;
//
//		if (cnt > m)
//		{
//			low = mid;
//		}
//		else
//		{
//			high = mid;
//		}
//	}
//	cout << high;
//
//
//}