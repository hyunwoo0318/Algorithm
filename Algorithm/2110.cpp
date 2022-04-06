//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int n, c;
//vector<int> v;
//
//bool check(int n)
//{
//	int cnt = 1;
//	int temp = 0;
//	
//		for (int i = 0; i < v.size(); i++)
//		{
//			if (v[i] - v[temp] >= n)
//			{
//				temp = i;
//				cnt++;
//			}
//			if (cnt == c)
//				return true;
//		}
//		
//			return false;
//	
//}
//
//int binarySearch()
//{
//	int min = 1;
//	int max = v[v.size()-1] - v[0];
//	int res = 0;
//
//	while (min <= max)
//	{
//		int mid = (min + max) / 2;
//		if (check(mid))
//		{
//			res = mid;
//			min = mid + 1;
//		}
//		else
//			max = mid - 1;
//	}
//	return res;
//}
//
//int main()
//{	
//	cin >> n >> c;
//
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		cin >> a;
//		v.push_back(a);
//	}
//
//	sort(v.begin(), v.end());
//
//	cout <<binarySearch();
//}