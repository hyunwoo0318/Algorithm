//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	int ans = 0;
//	vector<int> v;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		cin >> a;
//		v.push_back(a);
//	}
//	
//	sort(v.begin(), v.end());
//	int temp = n;
//	for (int i = 0; i < n; i++)
//	{
//		ans += temp * v[i];
//		temp--;
//	}
//	cout << ans;
//}