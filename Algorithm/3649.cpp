//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<cmath>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	while (1)
//	{
//		vector<int> v;
//		int x, n, input;
//		cin >> x >> n;
//		if (cin.eof() == true) { break; }
//		if (n == 0)
//		{
//			cout << "danger\n";
//			continue;
//		}
//					
//
//		x = x * pow(10, 7);
//
//		for (int i = 0; i < n; i++)
//		{
//			cin >> input;
//			v.push_back(input);
//		}
//
//		if (n == 1)
//		{
//			cout << "danger\n";
//			continue;
//		}
//
//		sort(v.begin(), v.end());
//
//		int ans1 = 1000000001;
//		int ans2 = 1000000001;
//
//		for (int i = 0; i < n; i++)
//		{
//			int l1, l2;
//			int findIdx = lower_bound(v.begin(), v.end(), x - v[i]) - v.begin();
//			if (findIdx == n || findIdx == i)
//				continue;
//			if (v[findIdx] != x - v[i])
//				continue;
//			else
//			{
//				l1 = min(v[findIdx], v[i]);
//				l2 = max(v[findIdx], v[i]);
//				if (l1 < ans1)
//				{
//					ans1 = l1;
//					ans2 = l2;
//				}
//			}
//		}
//
//		if (ans1 == 1000000001 && ans2 == 1000000001)
//			cout << "danger\n";
//		else
//			cout << "yes " << ans1 << " " << ans2 << "\n";
//	}
//
//	
//	
//}