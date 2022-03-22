//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//bool IsPrime(int a)
//{
//	if (a == 1)
//		return false;
//	for (int i = 2; i < a; i++)
//	{
//		if (a % i == 0)
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	int m, n,i;
//	cin >> m >> n;
//	int sum = 0;
//
//	vector<int> v;
//
//	for (i = m; i <= n; i++)
//	{
//		if (IsPrime(i) == true)
//			v.push_back(i);
//	}
//
//	if (v.empty() == true)
//		cout << -1 << endl;
//	else
//	{
//		for (i = 0; i < v.size(); i++)
//		{
//			sum += v[i];
//		}
//		cout << sum << endl;
//		cout << v[0] << endl;
//	}
//}