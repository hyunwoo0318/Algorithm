//#include<iostream>
//#include<algorithm>
//
//#define MAX 100001
//#define INF 987654321
//using namespace std;
//
//long long arr[MAX];
//int ans = INF;
//
//int main()
//{
//	int n, s;
//	cin >> n >> s;
//
//	for (int i = 0; i < n; i++)
//	{
//		long long input; cin >> input; arr[i] = input;
//	}
//
//	int l = 0;
//	int r = 0;
//	long long sum = arr[0];
//
//	while (l <= r)
//	{			
//		if (sum < s)
//		{
//			if (r == n - 1)
//				break;
//			sum += arr[++r];
//		}
//		else if (sum >= s)
//		{
//			if (r == l)
//			{
//				ans = 1;
//				break;
//			}
//			else
//			{
//				ans = min(ans, r - l + 1);
//				sum -= arr[l++];
//			}
//		}
//	}
//	if (ans == INF)
//		cout << 0;
//	else
//		cout << ans;
//}