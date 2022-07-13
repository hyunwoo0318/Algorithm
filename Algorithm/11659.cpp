//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	vector<int> v;
//	int sum = 0;
//	v.push_back(0);
//	for(int i=0;i<n;i++)
//	{
//		int a;
//		cin >> a;
//		sum += a;
//		v.push_back(sum);
//	}
//
//	while (m--)
//	{
//		int i, j;
//		cin >> i >> j;
//
//		cout << v[j] - v[i-1] << "\n";
//	}
//}