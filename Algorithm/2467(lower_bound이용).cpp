//#include<iostream>
//#include<vector>
//#include<cstdlib>
//
//#define maxNum 2000000050
//
//using namespace std;
//
//int main()
//{
//	int n, temp;
//	vector<int> v;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		v.push_back(temp);	
//	}
//
//	int ansNum = maxNum;
//	pair<int, int> ansPair;
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		int a = lower_bound(v.begin(), v.end(), -v[i]) - v.begin();
//		if (a < 1 && a >= n)
//			continue;
//		if (v[a] + v[i] == 0)
//		{
//			cout << v[i] << " " << v[a];
//			return 0;
//		}
//		if (abs(v[a] + v[i]) > abs(v[a - 1] + v[i]))
//		{
//			if (ansNum < abs(v[a - 1] + v[i]))
//			{
//				ansNum = abs(v[a - 1] + v[i]);
//				ansPair = { v[i], v[a - 1] };
//			}
//			
//		}
//		else
//		{
//			if (ansNum < abs(v[a ] + v[i]))
//			{
//				ansNum = abs(v[a] + v[i]);
//				ansPair = { v[i], v[a] };
//			}
//		}
//	}
//	cout << ansPair.first << " " << ansPair.second;
//}