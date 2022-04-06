//#include<iostream>
//#include<vector>
//#include<algorithm>
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
//
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		int a;
//		cin >> a;
//		v.push_back(a);
//	}
//
//	sort(v.begin(), v.end());
//	int N2;
//	cin >> N2;
//	for (int i = 0; i < N2; i++)
//	{
//		int a;
//		cin >> a;
//		if (binary_search(v.begin(), v.end(), a))
//			cout << 1 << "\n";
//		else
//			cout << 0 << "\n";
//
//	}
//}