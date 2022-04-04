//#include<iostream>
//
//using namespace std;
//
//int n, k;
//int arr[9];
//
//void dfs(int num, int cnt)
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
//		for (int i = num; i <= n; i++)
//		{
//			arr[cnt] = i;
//			dfs(i, cnt + 1);
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> k;
//	dfs(1, 0);
//}