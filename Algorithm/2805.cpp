//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int n, m;
//vector<long long> v;
//long long temp = 0;
//long long resHeight = 0;
//
//int binarySearch()
//{
//	long long min = 0;
//	long long max = 2000000000;	
//
//	while (min <= max)
//	{
//		long long mid = (min + max) / 2;
//		temp = 0;
//		for (int i = 0; i < v.size(); i++)
//		{
//			long long last = v[i] - mid;
//			if (last >= 0)
//				temp += last;				
//		}
//		//�ʹ� ���� ũ��� ©�� ������ -> �� ���缭 �ؾ���
//		if (temp < m)
//		{
//			max = mid - 1;
//		}
//		//������ -> ���߿� �ִ밪�� ���ؾ���
//		else
//		{
//			resHeight = mid;
//			min = mid + 1;
//		}
//	}
//	return resHeight;
//
//
//}
//
//int main()
//{
//	
//	cin >> n >> m;
//
//	
//	for (int i = 0; i < n; i++)
//	{
//		long long a;
//		cin >> a;
//		v.push_back(a);
//	}
//
//	cout <<  binarySearch();
//}