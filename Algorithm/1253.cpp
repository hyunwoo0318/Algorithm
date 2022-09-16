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
//	int n, input;
//	int ans = 0;
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> input;
//		v.push_back(input);
//	}
//
//	sort(v.begin(), v.end());
//
//	int lo, hi;
//
//	for (int x = 0; x < n; x++)
//	{
//		lo = 0;
//		hi = n-1;
//		while (lo < hi )
//		{
//			if (lo == x)
//			{
//				lo++;
//				continue;
//			}
//			if (hi == x)
//			{
//				hi--;
//				continue;
//			}
//				
//			int sum = v[lo] + v[hi];
//			if (sum == v[x])
//			{
//				ans++;
//				break;
//			}
//			else if (sum < v[x])
//				lo++;
//			else
//				hi--;				
//		}
//	}
//	cout << ans;
//}