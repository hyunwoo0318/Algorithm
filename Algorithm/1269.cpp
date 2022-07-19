//#include<iostream>
//#include<set>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	int n, m;
//	int ans = 0;
//	vector<int> a;
//	set<int> b;
//
//	cin >> n >> m;
//	ans = n + m;
//
//	for (int i = 0; i < n; i++)
//	{
//		int temp;
//		cin >> temp;
//		a.push_back(temp);
//	}
//
//
//	for (int i = 0; i < m; i++)
//	{
//		int temp;
//		cin >> temp;
//		b.insert(temp);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (b.find(a[i]) != b.end())
//			ans -= 2;
//	}
//	cout << ans;
//	
//
//}