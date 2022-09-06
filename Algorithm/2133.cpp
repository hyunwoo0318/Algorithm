//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int n,k;
//	cin >> n;
//
//	int d[31] = {};
//	d[2] = 3;
//	d[4] = 11;
//
//	for (int i = 6; i <= n; i += 2)
//	{
//		k = i;
//		int sum = 0;
//		while (k > 2)
//		{
//			sum = d[k - 2] - (k - 2) / 2 * 3;
//			k -= 2;
//		}
//		d[i] = 3 * (sum + i / 2);
//	}
//	cout << d[n];
//}