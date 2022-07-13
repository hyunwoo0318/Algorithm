//#include<iostream>
//#include<deque>
//
//using namespace std;
//
//int main()
//{
//	int n, k;
//	
//	cin >> n >> k;
//	deque<int> dq;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		cin >> a;
//		dq.push_front(a);
//	}
//	int ans = 0;
//	int i = 0;
//	while (k != 0)
//	{
//		if (dq[i] > k)
//			i++;
//		else
//		{
//			k -= dq[i];
//			ans++;
//		}
//	}
//	cout << ans;
//}