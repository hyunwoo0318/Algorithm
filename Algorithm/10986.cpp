//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//#define MAX 1000001
//using namespace std;
//
//long long arr[MAX];
//long long summ[1001];
//
//long long calc(long long x)
//{
//	return (x * (x - 1)) / 2;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		long long x; cin >> x;
//		if (i == 0)
//		{
//			arr[i] = x;
//		}
//		else
//		{
//			arr[i] = arr[i - 1] + x;
//		}
//		summ[arr[i] % m]++;
//	}
//	
//	long long ans = 0;
//	for (int i = 0; i < m; i++)
//	{
//		if (i == 0)
//		{
//			ans += summ[i];
//			ans += calc(summ[i]);
//		}
//		else
//		{
//			ans += calc(summ[i]);
//		}
//	}
//	cout << ans;
//
//}