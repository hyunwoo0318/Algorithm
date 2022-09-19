//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int arr[5001];
//int n, m, input;
//
//bool check(int x)
//{
//	int cnt = 0;
//	int point = 0;
//	bool success = false;
//	vector<int> v;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i - 1; j >= point; j--)
//		{
//			if (abs(arr[i] - arr[j]) > x)
//			{
//				if (j - point <= 1)
//					return false;
//				cnt++;
//				v.push_back(j);
//				point = j;
//				break;
//			}
//		}		
//	}
//	if (cnt >= m || success == false)
//		return false;
//	return true;
//}
//
//int main()
//{
//	int maxnum = -1;
//	int minnum = 100002;
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> input;
//		arr[i] = input;
//		if (input > maxnum)
//			maxnum = input;
//		if (input < minnum)
//			minnum = input;
//	}
//
//	int lo = -1;
//	int hi = maxnum - minnum;
//
//	while (lo < hi - 1)
//	{
//		int mid = (lo + hi) / 2;
//		if (check(mid))
//			hi = mid;
//		else
//			lo = mid;
//	}
//	cout << hi;
//}