//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	int n, k;
//	int res = 0;
//	int maxNum = 0;
//	cin >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		cin >> a;
//		v.push_back(a);
//	}
//
//	for (int i = 0; i < k; i++)
//	{
//		res += v[i];
//	}	
//	maxNum = res;
//	for (int i = 0; i < v.size() - k; i++)
//	{			
//		res -= v[i];
//		res += v[i + k];
//		if (res > maxNum)
//			maxNum = res;
//	}
//	cout << maxNum;
//
//}