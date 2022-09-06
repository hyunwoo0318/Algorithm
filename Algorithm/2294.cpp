//#include<iostream>
//
//using namespace std;
//
//int d[101];
//int ans[10001];
//
//int main()
//{
//	int n,k;
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		cin >> a;
//		d[i] = a;
//		if(a <= k)
//			ans[a] = 1;
//	}
//
//	for (int i = 1; i <= k; i++)
//	{
//		int temp = 100000;
//		for (int j = 0; j < n; j++)
//		{
//			int sub = i - d[j];
//			if (sub >= 0)
//			{
//				temp = min(temp, ans[sub] + 1);
//			}
//		}
//		ans[i] = temp;
//	}
//	if (ans[k] == 100000)
//		cout << -1;
//	else
//		cout << ans[k];
//}