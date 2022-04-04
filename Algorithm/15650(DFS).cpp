//#include<iostream>
//
//using namespace std;
//
//int n, k;
//int arr[9];
//bool visited[9];
//
//void dfs(int num, int cnt)
//{
//	if (cnt == k)
//	{
//		for (int i = 0; i < k; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << '\n';
//	}
//	else
//	{
//		for (int i = num; i <= n; i++)
//		{
//			if (visited[i] == false)
//			{
//				visited[i] = true;
//				arr[cnt] = i;
//				dfs(i, cnt + 1);
//				visited[i] = false;
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	cin >> n >> k;
//	dfs(1,0);
//}