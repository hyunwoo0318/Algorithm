//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<limits.h>
//
//using namespace std;
//
//int n, k;
//vector<int> v;
//int ans = 0;
//
//int binarySearch(long long min, long long max)
//{
//	int resMax = 0;
//	while (min <= max)
//	{		
//		/*if (min == INT_MAX)
//		{
//			resMax = min;
//			break;
//		}*/
//		ans = 0;
//		//(max + min ) / 2���� �����÷ο찡 �Ͼ�� �����ϰ� �����ִ� ���
//		//�� long long���� �����ϸ� ���
//		long long mid = (max + min) / 2 ;
//
//		for (int i = 0; i < v.size(); i++)
//		{
//			ans += v[i] / mid;
//		}
//
//		if (ans >= n)
//		{
//			resMax = mid;
//			min = mid + 1;
//		}				
//		 else if (ans < n)
//		{
//			max = mid -1;
//		}
//
//	}
//	return resMax;
//}
//
//int main()
//{	
//	cin >> k >> n;	
//
//	for (int i = 0; i < k; i++)
//	{
//		int a;
//		cin >> a;
//		v.push_back(a);
//	}
//
//	sort(v.begin(), v.end());
//		
//	int res = binarySearch(0, INT_MAX);
//	cout << res;
//}