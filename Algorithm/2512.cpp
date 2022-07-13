//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//vector<int> v;
//int N;
//int Max;
//int res = 0;
//int sum = 0;
//
//bool Check(int x)
//{
//	int temp = sum;
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (v[i] > x)
//		{
//			temp -= (v[i] - x);
//		}
//	}
//	return temp <= Max;
//}
//
//int main()
//{	
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		int a;
//		cin >> a;
//		v.push_back(a);
//		sum += a;
//	}
//	sort(v.begin(), v.end());
//	cin >> Max;
//
//	int lo = 0;
//	int hi = v.back()+1;
//
//	while (lo + 1 < hi)
//	{
//		int mid = (lo + hi) / 2;
//		if (Check(mid))
//			lo = mid; //맞았으니 더 위에 부분을 확인해봐야함(최댓값을 찾는문제)
//		else
//			hi = mid;
//	}
//	cout << lo;
//}