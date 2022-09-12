//#include<iostream>
//#include<vector>
//
//int arr[1001];
//int w[1001];
//
//using namespace std;
//
//int main()
//{
//	
//	int n,a;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a;
//		w[i] = a;
//		arr[i] = 1;
//	}
//
//	int ans = 0;
//
//	for (int i = 1; i <= n; i++)
//	{	
//		
//		for (int j = 1; j < i; j++)
//		{
//			if (w[j] > w[i])
//				arr[i] = max(arr[i], arr[j] + 1);
//		}
//		if (ans < arr[i])
//			ans = arr[i];
//	}
//	cout << ans;
//}