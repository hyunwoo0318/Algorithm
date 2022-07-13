//#include<iostream>
//#include<vector>
//
//
//using namespace std;
//
//int ans[100000] = {};
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> v;
//	int res = -1001;
//
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		cin >> a;
//		v.push_back(a);
//	}
//		
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (i == 0)
//			ans[0] = v[0];
//		else
//		{
//			int temp = max(ans[i - 1]+ v[i], v[i]);
//			ans[i] = temp;
//		}
//		if (ans[i] > res)
//			res = ans[i];
//	}
//	cout << res;
//}