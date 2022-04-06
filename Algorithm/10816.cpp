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
//	int N,a;
//	cin >> N;
//	vector<int> v;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> a;
//		v.push_back(a);		
//	}
//
//	sort(v.begin(), v.end());
//	int N2;
//	cin >> N2;
//
//	for (int i = 0; i < N2; i++)
//	{
//		cin >> a;
//		cout << upper_bound(v.begin(), v.end(), a) - lower_bound(v.begin(), v.end(), a) << " ";
//	}
//
//}