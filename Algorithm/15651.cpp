//#include<iostream>
//
//using namespace std;
//
//int n, k;
//int arr[8];
//
//void dfs(int cnt)
//{
//	if (cnt == k)
//	{
//		for (int i = 0; i < k; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << "\n";
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			arr[cnt] = i;
//			dfs(cnt + 1);
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> k;
//	dfs(0);
//}